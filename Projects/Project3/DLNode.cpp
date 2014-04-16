#include "DLNode.h"

DLNode::DLNode()
: contents(0), nextNode(NULL), previousNode(NULL)
{}
    
DLNode::DLNode(int newContents)
: contents(newContents), nextNode(NULL), previousNode(NULL)
{}

DLNode::~DLNode()
{}

void DLNode::setContents (int newContents)
{
    contents = newContents;
}
     
void DLNode::setNext (DLNode* newNext)
{
    newNext = nextNode;
}
    
void DLNode::setPrevious (DLNode* newPrevious)
{
    newPrevious = previousNode;
}
    
int DLNode::getContents () const
{
    return contents;
}

DLNode* DLNode::getNext () const
{
    return nextNode;
}
    
DLNode* DLNode::getPrevious () const
{
    return previousNode;
}