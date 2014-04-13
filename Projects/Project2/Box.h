#pragma once 

#include "Prize.h"
#include <string>
#include <iostream>
using namespace std;

/*
    Box (check UNIT TEST for required API)

    *private data members: boxNumber (unsigned int), boxColor (string), scratch (Prize),            DONE
    prizes (Prize*, for dynamic array), prizeCapacity (unsigned int), prizeCount (unsigned int)
    *public default constructor: initial values boxNumber (0), boxColor ("NO COLOR"),               DONE
    prizeCapacity (5), prizeCount(0); in the definition, prizes array must be initialized to match prizeCapacity
    *public overloaded constructor: parameters for boxNumber, boxColor, prizeCapacity;              DONE          
    in the definition, prizes array must be initialized to match prizeCapacity
    *public destructor: free memory associated with prizes                                          DONE
    *public accessors/gets AND mutators/sets for boxNumber, boxColor                                DONE
    *public accessor/get ONLY for data members prizeCapacity, prizeCount                            DONE
    *public addPrize: parameters prize (Prize), return value (bool); place prize in                 DONE
    prizes array if there is space and return true, else return false
    *public getPrize: parameters index (unsigned int), return value Prize&;                         DONE
    return a Prize if index is valid, else return scratch (data member declared in class header)
    *public removePrize: parameters index (unsigned int), return value Prize;                       DONE
    remove and return Prize if index is valid, else return scratch (data member declared in class header)
*/

class Box
{
    public:
        Box();
        Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity);
        ~Box();
        unsigned int getBoxNumber() const;
        void setBoxNumber(unsigned int newBoxNumber);
        string getBoxColor() const;
        void setBoxColor(string newBoxColor);
        unsigned int getPrizeCapacity() const;
        unsigned int getPrizeCount() const;
        bool addPrize(Prize prize);
        Prize& getPrize(unsigned int index);
        Prize removePrize(unsigned int index);
        
    private:
        unsigned int boxNumber;
        string boxColor;
        Prize scratch;
        Prize* prizes;
        unsigned int prizeCapacity;
        unsigned int prizeCount;
};