#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
 
using namespace std;

template <typename T>
class SLNode
{
     public:
        SLNode()
        : nextNode(NULL), contents(0)
        {}
        
        SLNode(T newContents)
        : nextNode(NULL), contents(newContents)
        {}
        
        ~SLNode()
        {
            nextNode = NULL;
        }
        
        void setContents(T newContents)
        {
            contents = newContents;
        }
        
        T getContents() const
        {
            return contents;
        }
        
        void setNextNode(SLNode<T>* newNextNode)
        {
            nextNode = newNextNode;
        }
        
        SLNode<T>* getNextNode() const
        {
            return nextNode;
        }
    
    private:
        SLNode<T>* nextNode;
        T contents;
};