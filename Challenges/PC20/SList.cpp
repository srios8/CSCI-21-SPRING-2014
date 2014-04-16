#include "SList.h"
#include "SLNode.h"

SList()
:head(NULL), size(0)
{}

virtual~SList()
{
    clear();
}

void insertHead(int content)
{
    SLNode* nodie = new SLNode(content);
    nodie->setNextNode(head);
    head = nodie;
    size++;
}

void insertTail(int content)
{
    if(head==NULL)
    {
        insertHead(content);
    }
    else
    {
        SLNode* temp = new SLNode(content);
        SLNode* i = head;
        while(i->getNextNode() != NULL)
        {
            i = i->getNextNode();
        }
        i->setNextNode(temp);
        size++;
    }
}

void removeHead()
{
    if(head!=NULL)
    {
        SLNode* temp = head;
        head = head->getNextNode();
        delete temp;
        size--;
    }
}

void removeTail()
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

void insert(int)
{
    
}

bool removeFirst(int)
{
    
}

void clear()
{
    while(head!=NULL)
    {
        removeHead();
    }
}

unsigned int getSize() const
{
    return size;
}

string ToString()  const
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