#include "Prize.h"

Prize::Prize()
: prizeName("NO NAME"), prizeValue(0)
{}

Prize::Prize(string itemName, unsigned int itemValue)
: prizeName(itemName), prizeValue(itemValue)
{}

Prize::~Prize()
{}

void Prize::setPrizeName(string newName)
{
    prizeName = newName;
}


string Prize::getPrizeName() const
{
    return prizeName;
}

    
void Prize::setPrizeValue(unsigned int newValue)
{
    prizeValue = newValue;
}


unsigned int Prize::getPrizeValue() const
{
    return prizeValue;
}


bool operator==(const Prize &prizeOne, const Prize &prizeTwo)
{
    if(prizeOne.prizeValue == prizeTwo.prizeValue && prizeOne.prizeName == prizeTwo.prizeName)
    {
      return true;  
    }
    return false;
  
}