#include "BSTree.h"

BSTree::BSTree()
: root(NULL), size(0)
{}
        
BSTree::~BSTree()
{}

bool BSTree::insert(int value)
{
    return insert(value, root);
}
        
bool BSTree::remove(int value)
{
    return remove(value, root);
}

void BSTree::clear()
{
    clear(root);
}
        
unsigned int BSTree::getSize() const
{
    return size;
}
        
void BSTree::inOrder()
{
    inOrder(root);
}
        
bool BSTree::insert(int value, BSTNode*& tempRoot)
{
    if(tempRoot == NULL)
    {
        tempRoot = new BSTNode(value);
        size++;
        return true;
    }
    else if(value < tempRoot->getContents())
    {
        return insert(value, tempRoot->getLeftChild());
    }
    else if(value > tempRoot->getContents())
    {
        return insert(value, tempRoot->getRightChild());
    }
    else
    {
        return false;
    }
}

bool BSTree::remove (int value, BSTNode*& tempRoot) 
{
    if (tempRoot == NULL) 
    {
        return false;
    }
    else if (value < tempRoot->getContents()) 
    {
        return remove(value, tempRoot->getLeftChild());
    }
    else if (value > tempRoot->getContents()) 
    {
        return remove(value, tempRoot->getRightChild());
    }
    else 
    {
        if (tempRoot->getLeftChild() == NULL) 
        {
            BSTNode* oldPtr = tempRoot;
            tempRoot = tempRoot->getRightChild();
            delete oldPtr;
            size--;
        }
        else
        {
            removeMax(tempRoot -> getContents(), tempRoot -> getLeftChild());
        }
        return true;
    }
}
    	
void BSTree::removeMax (int& value, BSTNode*& tempRoot)
{
    if (tempRoot -> getRightChild() == NULL) {
        BSTNode* maxNode = tempRoot;
        value = tempRoot -> getContents();
        tempRoot = tempRoot -> getLeftChild();
        delete maxNode;
    }
    else
    {
        removeMax(value, tempRoot -> getRightChild());
    }
}

void BSTree::clear (BSTNode*& tempRoot)
{
    if(tempRoot!=NULL)
    {
        clear(tempRoot->getLeftChild());
        clear(tempRoot->getRightChild());
        delete tempRoot;
        tempRoot =NULL;
        size--;
    }
}

void BSTree::inOrder (BSTNode* tempRoot)
{
    if(tempRoot!=NULL)
    {
        inOrder(tempRoot->getLeftChild());
        cout << tempRoot->getContents() << " ";
        inOrder(tempRoot->getRightChild());
    }
}
