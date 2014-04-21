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
    if(head==NULL)
    {
        insertHead(newContents);
    }
    else if(head->getNextNode()==NULL)
    {
        if(value <= head->getContents())
        {
            insertHead(newContents);
        }
        else
        {
            insertTail(newContents);
        } 
    }
    else
    {
        if(value <= head->getContents())
        {
            insertHead(newContents);
        }
        else
        {
            SLNode* trailer = NULL;
            SLNode* spot = head;
            while(spot->getNextNode() != NULL && value > spot->getContents())
            {
                trailer = spot;
                spot = spot->getNextNode();
            }
            if(value > spot->getContents())
            {
                insertTail(newContents);
            }
            else
            {
                SLNode* nodee = new SLNode(newContents);
                nodee->setNextNode(spot);
                trailer->setNextNode(nodee);
                size++;
            }
        }
    }
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
    if(head==NULL)
    {
        return false;
    }
    else
    {
        SLNode* trailer = NULL;
        SLNode* spot = head;
        while(spot!=NULL && spot->getContents() != target)
        {
            trailer = spot;
            spot = spot->getNextNode();
        }
        if(spot==NULL)
        {
            return false;
        }
        else if(spot==head)
        {
            removeHead();
            return true;
        }
        else
        {
            trailer->setNextNode(spot->getNextNode());
            delete spot;
            size--;
            return true;
        }
    }
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