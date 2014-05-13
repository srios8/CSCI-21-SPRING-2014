#pragma once

#include "BSTNode.h"
#include<iostream>
#include<cstdlib>
#include<sstream>
using namespace std;
                 
class BSTree
{
    public:
    
    /*
     * default constructor, sets values root(NULL) and size(0)
     */
        BSTree();
        
    /*
     * destructor, calls the clear function
     */
        virtual ~BSTree();
        
    /*
     * bool insert (int), calls private function insert(int, root)
     */
        bool insert(int value);
        
    /*
     * bool remove (int), return value returned by private function remove(int, root)
     */
        bool remove(int value);
        
    /*
     * void clear (), call private function clear(root)
     */
        void clear();
        
    /*
     * unsigned int getSize () const
     */
        unsigned int getSize() const;
        
    /*
     * void inOrder (), call private function inOrder(root)
     */
        void inOrder();
        
    private:
    /*
     * BSTNode* that points to the root node of a binary search tree
     */
        BSTNode* root;
        
    /*
     * unsigned int the number of nodes in the tree
     */
        unsigned int size;
        
    /*
     * create a new BSTNode and insert it into the tree, returns true;
     * if integer is already in the true, does not insert, returns false
     */
        bool insert(int value, BSTNode*& tempRoot);
     
    /*
     * traverse the tree and remove the node containing the target integer if present, return true;
     * return false if target integer is not in tree
     */
    	bool remove (int, BSTNode*& tempRoot);
    	
    /*
     * helper function for private remove
     */
	
	    void removeMax (int&, BSTNode*& tempRoot);
	    
	/*
	 * clear the entire contents of the tree, freeing all memory associated with all nodes
	 */
	
    	void clear (BSTNode*& tempRoot);
	
	/*
	 * print the data in all nodes in the tree, in ascending order, separate by spaces
	 * (there should be a space after the last output value)
	 */
    	void inOrder (BSTNode* tempRoot);
};