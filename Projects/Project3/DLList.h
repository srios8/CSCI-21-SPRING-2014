#pragma once
#include <iostream>

#include <cstdlib>
#include<sstream>
using namespace std;

class DLList
{
    public:
    /*
     *initialize count to zero, head and tail to NULL
     */
        DLList();
        
    /*
     *call clear function
     */
        virtual~DLList();
        
    /*
     *return count
     */
        unsigned int getSize() const;
        
    /*
     *create new DLNode with newContents and attach at head; *should not be called in conjunction with insert
     */
        void pushFront(int newContents);
        
    /*
     *create new DLNode with newContents and attach at tail; *should not be called in conjunction with insert
     */
        void pushBack(int newContents);
        
    /*
     *create new DLNode with newContents and insert in ascending (based on newContents) order; *should not be called in conjunction with pushFront or pushBack
     */
        void insert(int newContents);
        
    /*
     *return the value of the contents of the head node; throw an exception (throw "LIST EMPTY") if the list is empty
     */
        int getFront() const;
        
    /*
     *return the value of the contents of the tail node; throw an exception (throw "LIST EMPTY") if the list is empty
     */
        int getBack() const;
        
    /*
     *return true if target is in list, else return false
     */
        bool get(int target) const;
        
    /*
     *remove current head node; do nothing if list is empty
     */
        void popFront(); 
        
    /*
     *remove current tail node; do nothing if list is empty
     */
        void popBack();
        
    /*
     *remove the first instance of a DLNode containing target; do nothing if target is not found
     */
        bool removeFirst(int target);
        
    /*
     *remove all instances of DLNode containing target; do nothing if target is not found
     */
        bool removeAll(int target);
        
    /*
     *clear all nodes from list, reset count to zero, set head and tail to NULL
     */
        void clear();
        
    /*
     *display the contents of each node in the list, formatted per the program specification ("NUM1,NUM2,NUM3,...,NUMX"), to the output stream out
     */
        friend ostream& operator == (ostream& out, const DLList& src);
    
    private:
    /*
     *count of nodes
     */
        int numNodes;
        
    /*
     *pointer to head node
     */
        DLList*head;
        
    /*
     *pointer to tail node
     */
        DLList*tail;
    
};