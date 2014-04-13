#include "Prize.h"


/*
 Prize (check UNIT TEST for required API)

    private data members: prizeName (string), prizeValue (unsigned int)             DONE
    public default constructor: initial values itemName ("NO NAME"), itemValue (0)  DONE
    public overloaded constructor: parameters for all data members                  DONE
    public destructor: empty                                                        DONE
    friend overloaded operator==: returns true if the prizeName and prizeValue of the two Prizes being compared are equivalent, else return false
    public accessors/gets and mutators/sets for all data members

*/

Prize::Prize()
: prizeName("NO NAME"), prizeValue(0)
{}

Prize::Prize(string newPrizeName, unsigned int newPrizeValue)
: prizeName(newPrizeName), prizeValue(newPrizeValue)
{}

Prize::~Prize()
{}

void Prize::setPrizeName(string newPrizeName)
{
    prizeName = newPrizeName;
}


string Prize::getPrizeName() const
{
    return prizeName;
}

    
void Prize::setPrizeValue(unsigned int newPrizeValue)
{
    prizeValue = newPrizeValue;
}


unsigned int Prize::getPrizeValue() const
{
    return prizeValue;
}


bool operator== (Prize firstPrize, Prize secondPrize)
{
    if(firstPrize.prizeName==secondPrize.prizeName && firstPrize.prizeValue==secondPrize.prizeValue)
    {
        return true;
    }
    else
    {
        return false;
    }
}