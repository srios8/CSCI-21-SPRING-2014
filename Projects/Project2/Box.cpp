#include "Box.h"


/*
    Box (check UNIT TEST for required API)

    *public default constructor: initial values boxNumber (0), boxColor ("NO COLOR"),               
    prizeCapacity (5), prizeCount(0); in the definition, prizes array must be initialized to match prizeCapacity
    *public overloaded constructor: parameters for boxNumber, boxColor, prizeCapacity;                    
    in the definition, prizes array must be initialized to match prizeCapacity                                     
    *public accessors/gets AND mutators/sets for boxNumber, boxColor                                
    *public accessor/get ONLY for data members prizeCapacity, prizeCount                            
    *public addPrize: parameters prize (Prize), return value (bool); place prize in                 
    prizes array if there is space and return true, else return false
    *public getPrize: parameters index (unsigned int), return value Prize&;                         
    return a Prize if index is valid, else return scratch (data member declared in class header)
    *public removePrize: parameters index (unsigned int), return value Prize;                       
    remove and return Prize if index is valid, else return scratch (data member declared in class header)
*/

Box::Box()
{
    boxNumber = 0;
    boxColor = "NO COLOR";
    prizeCapacity = 5;
    prizeCount = 0;
    prizes = new Prize[prizeCapacity];
}
Box::Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity)
{
    boxNumber = newBoxNumber;
    boxColor = newBoxColor;
    prizeCapacity = newPrizeCapacity;
    prizeCount = 0;
    prizes = new Prize[prizeCapacity];
}

Box::~Box()
{
    delete[] prizes;
}

unsigned int Box::getBoxNumber() const
{
    return boxNumber;
}


unsigned int Box::setBoxNumber(unsigned int newBoxNumber)
{
    boxNumber = newBoxNumber;
}

string Box::getBoxColor() const
{
    return boxColor;
}

string Box::setBoxColor(string newBoxColor)
{
    boxColor = newBoxColor;
}

unsigned int Box::getPrizeCapacity() const
{
    return prizeCapacity;
}

unsigned int Box::getPrizeCount(const)
{
    return prizeCapacity;
}
//place prize in prizes array if there is space and return true, else return false
bool Box::addPrize(Prize prize, bool value)
{
    if(prizeCount < prizeCapacity)
    {
        prize[prizeCount++] = prize;
        return true;
    }
    else
    {
        return false;
    }
}
//return a Prize if index is valid, else return scratch (data member declared in class header)
Prize& Box::getPrize(unsigned int index)
{
    for(unsigned int i = 0; i < prizeCapacity; i++)
    {
        if(index < prizeCapacity)
        {
            return prizes[index];
        }
        else
        {
            return scratch;
        }
    }
}

Prize Box::removePrize(unsigned int index)
{
    if(index < prizeCapacity)
    {
        Prize temp = prizes[index];
        prizes[index] = "";
        --prizeCount;
        
        for(unsigned int i = index; i< prizeCount;++i)
        {
            prizes[i] = prizes[i+1];
        }
        return temp;
    }
    else
    {
        return scratch;
    }
}