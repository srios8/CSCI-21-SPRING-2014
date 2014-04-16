#include "DLList.h"
#include "DLNode.h"

DLList::DLList()
: numNodes(0), head(NULL), tail(NULL)
{}

DLList::~DLList()
{
    clear();
}

unsigned int DLList::getSize() const
{
    return numNodes;
}

void DLList::pushFront(int newContents)
{
    DLNode* nodie = new DLNode(newContents);
    nodie->setNext(head);
    head = nodie;
    numNodes++;
}

void DLList::pushBack(int newContents)
{
    if(head==NULL)
    {
        pushFront(newContents);
    }
    else
    {
        DLNode* temp = new DLNode(newContents);
        DLNode* i = head;
        while(i->getNext() != NULL)
        {
            i = i->getNext();
        }
        i->setNext(temp);
        numNodes++;
    }
}

void DLList::insert(int newContents)
{
    
}

int DLList::getFront() const
{
    if(head!=NULL)
    {
        return ->pushFront(head);
    }
    else
    {
        throw ArrayException("LIST EMPTY");
    }
}

int DLList::getBack() const
{
    if(tail!=NULL)
    {
        return ->pushBack(tail);
    }
    else
    {
        throw ArrayException("LIST EMPTY");
    }
}

bool DLList::get(int target) const
{
    
}

void DLList::popFront() 
{
    if(head!=NULL)
    {
        DLNode* temp = head;
        head = head->getNext();
        delete temp;
        numNodes--;
    }
}

void DLList::popBack()
{
    if(head!=NULL)
    {
        DLNode* i = head;
        DLNode* trailer = NULL;
        while(i->getNext() != NULL)
        {
            trailer = i;
            i = i->getNext();
        }
        delete i;
        numNodes--;
        if(trailer == NULL)
        {
            head = NULL;
        }
        else
        {
            trailer->setNext(NULL);
        }
    }    
}

bool DLList::removeFirst(int target)
{
            
}

bool DLList::removeAll(int target)
{
    
}

void DLList::clear()
{
    while(head!=NULL)
    {
        popFront();
    }
}

friend DLList::ostream& <<(ostream& out, const DLList& src)
{
    
}