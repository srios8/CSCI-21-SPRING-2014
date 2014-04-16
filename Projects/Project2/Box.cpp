#include "Box.h"

Box::Box()
: boxNumber(0), boxColor("NO COLOR"), prizeCapacity(5), prizeCount(0)
{
    prizes = new Prize[prizeCapacity];
}

Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity)
: boxNumber(newBoxNumber), boxColor(newBoxColor), prizeCapacity(newPrizeCapacity), prizeCount(0)
{
    prizes = new Prize[prizeCapacity];
}

Box::~Box()
{
    delete[] prizes;
    prizes = NULL;
}

unsigned int Box::getBoxNumber() const
{
    return boxNumber;
}


void Box::setBoxNumber(unsigned int newBoxNumber)
{
    boxNumber = newBoxNumber;
}

string Box::getBoxColor() const
{
    return boxColor;
}

void Box::setBoxColor(string newBoxColor)
{
    boxColor = newBoxColor;
}

unsigned int Box::getPrizeCapacity() const
{
    return prizeCapacity;
}

unsigned int Box::getPrizeCount () const
{
    return prizeCount;
}

bool Box::addPrize(Prize prize)
{
    if(prizeCount < prizeCapacity)
    {
        prizes[prizeCount++] = prize;
        return true;
    }
    else
    {
        return false;
    }
}

Prize& Box::getPrize(unsigned int index)
{
    return prizes[index];
}

Prize Box::removePrize(unsigned int index)
{
    if(index < prizeCount)
    {
        Prize returnItem = prizes[index];
        prizes[index] = scratch;
        --prizeCount;
        for(unsigned int i = index; i < prizeCount; ++i)
        {
            prizes[i] = prizes[i+1];
        }
    
        return returnItem;
    }
    else 
    {
        return scratch;
    }
}