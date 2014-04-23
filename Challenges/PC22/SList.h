#pragma once
 
#include "SLNode.h"
 
#include <string>
#include <iostream>
#include <cstdlib>
#include<sstream>

 
using namespace std;
 
template <typename T>
class SList
{
    public:
        SList()
        :head(NULL), size(0)
        {}
        
        ~SList()
        {
            clear();
        }
        
        void insertHead(T content)
        {
            SLNode<T>* nodie = new SLNode<T>(content);
            nodie->setNextNode(head);
            head = nodie;
            size++;
        }
        
        void insertTail(T content)
        {
            if(head==NULL)
            {
                insertHead(content);
            }
            else
            {
                SLNode<T>* temp = new SLNode<T>(content);
                SLNode<T>* i = head;
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
                SLNode<T>* temp = head;
                head = head->getNextNode();
                delete temp;
                size--;
            }
        }
        
        void removeTail()
        {
            if(head!=NULL)
            {
                SLNode<T>* i = head;
                SLNode<T>* trailer = NULL;
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
        
        void insert(T value)
        {
            if(head==NULL)
            {
                insertHead(value);
            }
            else if(head->getNextNode()==NULL)
            {
                if(value <= head->getContents())
                {
                    insertHead(value);
                }
                else
                {
                    insertTail(value);
                } 
            }
            else
            {
                if(value <= head->getContents())
                {
                    insertHead(value);
                }
                else
                {
                    SLNode<T>* trailer = NULL;
                    SLNode<T>* spot = head;
                    while(spot->getNextNode() != NULL && value > spot->getContents())
                    {
                        trailer = spot;
                        spot = spot->getNextNode();
                    }
                    if(value > spot->getContents())
                    {
                        insertTail(value);
                    }
                    else
                    {
                        SLNode<T>* nodee = new SLNode<T>(value);
                        nodee->setNextNode(spot);
                        trailer->setNextNode(nodee);
                        size++;
                    }
                }
            }
        }
        
        bool removeFirst(T target)
        {
            if(head==NULL)
            {
                return false;
            }
            else
            {
                SLNode<T>* trailer = NULL;
                SLNode<T>* spot = head;
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

        
        bool removeAll(T value)
        {
            bool done = removeFirst(value);
            while(removeFirst(value)==true)
            {
                
            }
            
            return done;
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
        
        string toString() const
        {
            stringstream ss;
            
            for(SLNode<T>* i = head; i!=NULL; i = i ->getNextNode())
            {
                ss << i->getContents();
                if(i->getNextNode()!=NULL)
                {
                    ss << ',';
                }
            }
            
            return ss.str();
        }
    
    private:
        SLNode<T>* head;
        unsigned int size;
};

