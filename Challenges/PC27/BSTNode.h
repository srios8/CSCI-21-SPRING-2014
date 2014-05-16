#pragma once
#include <iostream>

#include <cstdlib>
#include<sstream>

class BSTNode
{
    public:
        BSTNode();
        
        BSTNode(int newContents);
        
        ~BSTNode();
        
        void setContents(int newContents);
        
        int getContents() const;
        
        int& getContents();
        
        void setLeftChild(BSTNode* newLeftChild);
        
        void setRightChild(BSTNode* newRightChild);
        
        BSTNode* getLeftChild() const;
        
        BSTNode*& getLeftChild();
        
        BSTNode* getRightChild() const;
        
        BSTNode*& getRightChild();
    
    private:
        BSTNode* leftChild;
        BSTNode* rightChild;
        int contents;
};