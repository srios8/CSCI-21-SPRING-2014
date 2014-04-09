
#include "SLNode.h"

SLNode::SLNode()
: nextNode(NULL), contents(0)
{}

SLNode::SLNode(int newContents)
: nextNode(NULL), contents(newContents)
{}

~SLNode()
{
    nextNode = NULL;
}

void setContents (int newContents)
{
    contents = newContents;
}

int getContents () const
{
    return Contents;
}

void setNextNode (SLNode* newNextMode)
{
    nextNode = newNextMode;
}
	
SLNode* getNextNode () const
{
    return newNextMode;
}