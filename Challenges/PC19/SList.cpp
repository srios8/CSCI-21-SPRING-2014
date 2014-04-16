#include "SList.h"
#include "SLNode.h"

SList::SList()
: head(NULL), size(0)
{}

SList::~SList()
{
    clear();
}

void SList::insertHead(int content)
{
    SLNode* nodie = new SLNode(content);
    nodie->setNextNode(head);
    head = nodie;
    size++;
}

void SList::insertTail(int content)
{
    if(head==NULL)//size == 0 an alternative
    {
        insertHead(content);
    }
    else
    {
        SLNode* temp = new SLNode(content);//SLNode* temp(new SLNode(content))
        SLNode* i = head;
        while(i->getNextNode() != NULL)
        {
            i = i->getNextNode();
        }
        i->setNextNode(temp);
        size++;
    }
}

void SList::removeHead()
{
    if(head!=NULL)
    {
        SLNode* temp = head;
        head = head->getNextNode();
        delete temp;
        size--;
    }
}

void SList::removeTail()
{
    if(head!=NULL)
    {
        SLNode* i = head;
        SLNode* trailer = NULL;
        while(i->getNextNode() != NULL)
        {
            trailer = i;
            i = i->getNextNode();
        }
        delete i;
        size--;
        if(trailer == NULL)
        {
            head = NULL;
        }
        else
        {
            trailer->setNextNode(NULL);
        }
    }
}

void SList::clear()
{
    while(head!=NULL)
    {
        removeHead();
    }
}

unsigned int SList::getSize() const
{
    return size;
}

string SList::toString () const
{
    stringstream ss;
    
    for(SLNode* i = head; i!=NULL; i = i ->getNextNode())
    {
        ss << i->getContents();
        if(i->getNextNode()!=NULL)
        {
            ss << ',';
        }
    }
    
    return ss.str();
}