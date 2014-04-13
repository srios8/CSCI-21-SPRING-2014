#include "SList.h"
#include "SLNode.h"

SList::SList()
: head(NULL), size(0)
{}

SList::~SList()
{
    clear();
}

void SList::inserHead(int newSize)
{
    SLNode* nodie = new SLNode(newSize);
    nodie->setNextNode(head);
    head = nodie;
    size++;
}

void SList::insertTail(int newSize)
{
    SLNode* temp = new SLNode(newSize);    

    temp->setContents(newSize);
    temp->setNextNode(NULL);

    if(!head) 
    {
        head = temp;
        return;
    } 
    else 
    {
        SLNode* tail = head;
        while(tail->setNextNode) 
        {
        tail->setNextNode(temp);
        }
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