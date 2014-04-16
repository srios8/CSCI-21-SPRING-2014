#pragma once 

#include "Prize.h"
#include <string>
using namespace std;

/*
public default constructor: initial values boxNumber (0), boxColor ("NO COLOR"), prizeCapacity (5), prizeCount(0); in the definition, prizes array must be initialized to match prizeCapacity
public overloaded constructor: parameters for boxNumber, boxColor, prizeCapacity; in the definition, prizes array must be initialized to match prizeCapacity
public destructor: free memory associated with prizes
public accessors/gets AND mutators/sets for boxNumber, boxColor
public accessor/get ONLY for data members prizeCapacity, prizeCount
public addPrize: parameters prize (Prize), return value (bool); place prize in prizes array if there is space and return true, else return false
public getPrize: parameters index (unsigned int), return value Prize&; return a Prize if index is valid, else return scratch (data member declared in class header)
public removePrize: parameters index (unsigned int), return value Prize; remove and return Prize if index is valid, else return scratch (data member declared in class header)
*/
class Box
{
    public:
    
    /*
     *
     */
        Box();
        
    /*
     *
     */
        Box(unsigned int newBoxNumber, string newBoxColor, unsigned int newPrizeCapacity);
        
    /*
     *
     */
        ~Box();
        
    /*
     *
     */
        unsigned int getBoxNumber() const;
        
    /*
     *
     */
        void setBoxNumber(unsigned int newBoxNumber);
        
    /*
     *
     */
        string getBoxColor() const;
        
    /*
     *
     */
        void setBoxColor(string newBoxColor);
        
    /*
     *
     */
        unsigned int getPrizeCapacity() const;
        
    /*
     *
     */
        unsigned int getPrizeCount() const;
        
    /*
     *
     */
        bool addPrize(Prize newPrize);
        
    /*
     *
     */
        Prize& getPrize(unsigned int index);
        
    /*
     *
     */
        Prize removePrize(unsigned int index);
        
    private:
    /*
     *
     */
        unsigned int boxNumber;
        
    /*
     *
     */
        string boxColor;
        
    /*
     *
     */
        Prize scratch;
        
    /*
     *
     */
        Prize* prizes;
        
    /*
     *
     */
        unsigned int prizeCapacity;
        
    /*
     *
     */
        unsigned int prizeCount;
};