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
     * destructor, calls the clear function
     */
        ~SList();
        
    /*
     * create a new SLNode and attach as head of list
     */
        void insertHead(int newSize);
        
    /*
     * remove the head node from the list
     */
        void removeHead();
        
    /*
     * clear the entire contents of the list, freeing all memory associated with 
     * all nodes
	 */
        void clear();
        
        
        unsigned int getSize () const;
        
    /*
     * return a string representation of the contents of all nodes in the list, 
     * in the format NUM1,NUM2,...,LASTNUM; return empty string on empty list
	*/
        string toString () const;
    
    private: 
        /*
         * SLNode* that points to the first node in a singly-linked list
         */
        SLNode* head;
        
        /*
         * unsigned int the count of the number of nodes in the list
         */
        unsigned int size;
};


