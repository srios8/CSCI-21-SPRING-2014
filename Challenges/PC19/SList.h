#pragma once

#include "SLNode.h"
#include <iostream>

#include <cstdlib>
#include<sstream>
using namespace std;

class SList
{
    public:
    /*
     * default constructor, sets values head(NULL) and size(0)
     */
        SList();
        
    /*
     *destructor, calls the clear function
     */
        virtual~SList();
        
    /*
     *create a new SLNode and attach as head of list
     */
        void insertHead(int content);
        
    /*
     *create a new SLNode and attach at the end of list
     */
        void insertTail(int content);
        
    /*
     *remove the head node from the list
     */
        void removeHead();
        
    /*
     *remove the tail node from the list
     */
        void removeTail();
        
    /*
     *clear the entire contents of the list, freeing all memory associated with all nodes
     */
        void clear();
        
    /*
     *
     */
        unsigned int getSize() const;
        
    /*
     *return a string representation of the contents of all nodes in the list, in the format NUM1,NUM2,...,LASTNUM; return empty string on 	                          empty list
     */
        string toString () const;
    
    private:
    
    /*SLNode* that points to the first node in a singly-linked list*/
        SLNode* head;
    
    /*unsigned int the count of the number of nodes in the list*/
        unsigned int size;
        
};