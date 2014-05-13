#pragma once
#include"BSTNode.h"

#include <iostream>

#include <cstdlib>
#include<sstream>
using namespace std;

class BSTree
{
    public:
        BSTree();
        
        ~BSTree();
        
        bool insert(int value);
        
        void clear();
        
        unsigned int getSize() const;
        
        void inOrder();
        
    private:
        BSTNode* root;
        
        unsigned int size;
        
        /*
         *create a new BSTNode and insert it into the tree, returns 
	     *true; if integer is already in the true, does not insert, returns false
	     */
        bool insert(int value, BSTNode*& subTreeRoot);
        
        /*
         *clear the entire contents of the tree, freeing all memory
	     *associated with all nodes
	     */
        void clear(BSTNode*& subTreeRoot);
        
        /*
         *print the data in all nodes in the tree, in ascending order, 
	     *separate by spaces (there should be a space after the last output value)
	     */
        void inOrder(BSTNode* subTreeRoot);
};