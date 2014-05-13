#include "BSTree.h"


BSTree::BSTree()
: root(NULL), size(0)
{}
        
BSTree::~BSTree()
{
    clear();
}
        
bool BSTree::insert(int value)
{
    return insert(value, root);
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
        
bool BSTree::insert(int value, BSTNode*& subTreeRoot)
{
    if(subTreeRoot == NULL)
    {
        subTreeRoot = new BSTNode(value);
        size++;
        return true;
    }
    else if(value < subTreeRoot->getContents())
    {
        return insert(value, subTreeRoot->getLeftChild());
    }
    else if(value>subTreeRoot->getContents())
    {
        return insert(value, subTreeRoot->getRightChild());
    }
    else
    {
        return false;
    }
}

void BSTree::clear(BSTNode*& subTreeRoot)
{
    if(subTreeRoot!=NULL)
    {
        clear(subTreeRoot->getLeftChild());
        clear(subTreeRoot->getRightChild());
        delete subTreeRoot;
        subTreeRoot =NULL;
        size--;
    }
}
        
void BSTree::inOrder(BSTNode* subTreeRoot)
{
    if(subTreeRoot!=NULL)
    {
        inOrder(subTreeRoot->getLeftChild());
        cout << subTreeRoot->getContents() << " ";
        inOrder(subTreeRoot->getRightChild());
    }
}