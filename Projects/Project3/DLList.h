#pragma once

#include <string>
#include <sstream>
#include "DLNode.h"
using namespace std;

struct Error
{
    Error (string newMessage = "Error")
    : message(newMessage)
    {}

    string message;
};

template <typename T>
class DLList{
    public:
        /*
         * Default Constructor which purpose is to initialize head/tail to NULL and size to 0
         */
        DLList()
        : head(NULL), tail(NULL), size(0)
        {}
        
        /*
         * Default deconstructor 
         */
        ~DLList()
        {
            clear();
        }
        
        /*
         * Adds a new node at the front of the list
         * @param contents an int with content of node
         */
        void pushFront(T contents)
        {
            DLNode<T>* temp = new DLNode<T>(contents);
            
            if(head == NULL)
            {	
                head = tail = temp;
            }
            else if(head->getNext() == NULL)
            {
                temp->setNext(head);
                tail->setPrevious(temp);
                head = temp;
            }
            else
            {
                temp->setNext(head);
                DLNode<T>* i = tail;
                
                while(i->getPrevious() != NULL)
                {
                    i = i->getPrevious();
                }
                
                i->setPrevious(temp);
                head = temp;
            }
            size++;
        }
        
        /*
         * Adds a a node at the end of the list
         * @param contents an int with contents of a node
         */
        void pushBack(T contents)
        {
            DLNode<T>* temp = new DLNode<T>(contents);
            temp->setPrevious(tail);
            tail=temp;
        
            if(tail->getPrevious()==NULL)
                head=tail;
            else
                tail->getPrevious()->setNext(tail);
        }
        
        /*
         * Removes front node of list(head)
         */
        void popFront()
        {
            if(head != NULL)
            {
                if(head == tail)
                {
                    delete head;
                    head = NULL;
                    tail = NULL;
                }
                else
                {
                    size--;
                    DLNode<T> *oldHead = head;
                    head = head->getNext();
                    head->setPrevious(NULL);
                    delete oldHead;
                }
            }
        }
        
        /*
         * Removes node at end of list(tail).
         */
        void popBack()
        {
            if(tail != NULL)
            {
                if(head == tail)
                {
                    delete head;
                    head = NULL;
                    tail = NULL;
                }
                else
                {
                   size--;
                    DLNode<T>* oldTail = tail;
                    tail = tail->getPrevious();
                    tail->setNext(NULL);
                    delete oldTail; 
                }
            }
        }
        
        /*
         * Reveals content of front node(head)
         * @return an int containing contents of node
         */
        T getFront() const
        {
            if(head != NULL)
            {
                return head->getContents();
            }
            else
            {
                throw Error("LIST EMPTY");
            }
        }
        
        /*
         * Reveals contents of last node of list(tail)
         * @return an int with contents of last node.
         */
        T getBack() const
        {
            if(tail != NULL)
            {
                return tail->getContents();
            }
            else
            {
                throw Error("LIST EMPTY");
            }
        }
        
        /*
         * Checks list for value
         * @param target an int the function looks for.
         * @returns bool determining whether the target exists or not.
         */
        bool get(T target) const
        {
            bool found = false;
            
            if(head != NULL)
            {
                DLNode<T>* nodie = head;
                
                while(nodie != NULL)
                {
                    if(nodie->getContents() == target)
                    {
                        found = true;
                    }
                    nodie = nodie->getNext();
                }
            }
            return found;
        }
        
        /*
         * Inserts a node in the link in ascending order
         * @param contents an int with contents of node.
         */
        void insert(T contents)
        {
            if(head==NULL)
            {
                pushFront(contents);
            }
            else if(head->getNext()==NULL)
            {
                if(contents <= head->getContents())
                {
                    pushFront(contents);
                }
                else
                {
                    pushBack(contents);
                } 
            }
            else
            {
                if(contents <= head->getContents())
                {
                    pushFront(contents);
                }
                else
                {
                    DLNode<T>* trailer = NULL;
                    DLNode<T>* spot = head;
                    while(spot->getNext() != NULL && contents > spot->getContents())
                    {
                        trailer = spot;
                        spot = spot->getNext();
                    }
                    if(contents > spot->getContents())
                    {
                        pushBack(contents);
                    }
                    else
                    {
                        DLNode<T>* nodee = new DLNode<T>(contents);
                        nodee->setNext(spot);
                        trailer->setNext(nodee);
                        size++;
                    }
                }
            }
        }
        
        /*
         * Removes first instance of specified number
         * @param target an integer to be removed
         * @return a bool determining whether target was removed or not
         */
        bool removeFirst(T target)
        {
            bool found = false;
        
            DLNode<T>* nodie = head;
            
            while(nodie != NULL)
            {
                DLNode<T> *previousNode = nodie->getPrevious();
                DLNode<T> *nextNode = nodie->getNext();
                
                if(nodie->getContents() == target)
                {
                    if(nodie == head)
                    {
                        popFront();
                    }
                    else if(nodie == tail)
                    {
                        popBack();
                    }
                    else
                    {
                        size--;
                        previousNode->setNext(nextNode);
                        nextNode->setPrevious(previousNode);
                        delete nodie;
                        found = true;
                    }
                    found = true;
                    break;
                }
                nodie = nextNode;
            }
            
            return found;
        }
        
        /*
         * Removes all instances of specified number.
         * @param target an int which is number to be removed
         * @return a bool determining whether target was removed removed.
         */
        bool removeAll(T target)
        {
            bool found = false;
        
            DLNode<T>* nodie = head;
            
            while(nodie != NULL)
            {
                DLNode<T>* previousNode = nodie->getPrevious();
                DLNode<T>* nextNode = nodie->getNext();
                
                if(nodie->getContents() == target)
                {
                    if(nodie == head)
                    {
                        popFront();
                    }
                    else if(nodie == tail)
                    {
                        popBack();
                    }
                    else
                    {
                        size--;
                        previousNode->setNext(nextNode);
                        nextNode->setPrevious(previousNode);
                        delete nodie;
                    }
                    found = true;
                }
                nodie = nextNode;
            }
            
            return found;
        }
        
        /*
         * Clears list; deletes all nodes.
         */
        void clear()
        {
            while(head != NULL)
            {
                popFront();
            }
            size = 0;
        }
        
        /*
         * Gets number of nodes in list
         * @return an unsigned int representing size of list
         */
        unsigned int getSize() const
        {
            return size;
        }
        
        /*
         * Oveorloads operator to reveal the contents of the list separated by comas
         * @param out an ostream& that shows the list's contents
         * @param src a DLList& contains the contents
         */
        friend ostream& operator<<(ostream& out, const DLList<T>& src)
        {
            stringstream ss;
            DLNode<T>* node = src.head;
            
            while(node != NULL)
            {
                ss << node->getContents();
                node = node->getNext();
                if(node != NULL)
                {
                    ss << ',';
                }
            }
            out << ss.str();
            return out;
        }
        
    private:
    
        DLNode<T>* head;
        
        DLNode<T>* tail;
        
        unsigned int size;
};