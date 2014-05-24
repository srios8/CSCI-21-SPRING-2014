#include "FoodItem.h"

FoodItem::FoodItem(string newName, unsigned int newValue, unsigned int newCalories, string newUnitOfMeasure, float newUnits)
: Item(newName, newValue), calories(newCalories), unitOfMeasure(newUnitOfMeasure), units(newUnits)
{}

FoodItem::~FoodItem()
{}

void FoodItem::setCalories(unsigned int newCalories)
{
    calories = newCalories;
}

void FoodItem::setUnitOfMeasure(string newUnitOfMeasure)
{
    unitOfMeasure = newUnitOfMeasure;
}

void FoodItem::setUnits(float newUnits)
{
    units = newUnits;
}
    	
unsigned int FoodItem::getCalories() const
{
    return calories;
}

string FoodItem::getUnitOfMeasure() const
{
    return unitOfMeasure;
}

float FoodItem::getUnits() const
{
    return units;
}
	
string FoodItem::toString()
{
    stringstream ss;
    ss.setf(ios::fixed);
    ss.setf(ios::showpoint);
    ss.precision(2);
<<<<<<< HEAD
    ss << getName() << ", $" << getValue() << ", " << units << " " << unitOfMeasure << ", " << calories << " calories";
=======
//
// Grader comments 2014.05.19
// item.getName and item.getValue below need to be item.getName() and
// item.getValue(). This won't compile.
//
    ss << item.getName << ", " << item.getValue << ", " << units << " " << unitOfMeasure << ", " << calories << " calories" << endl;
>>>>>>> 923c3a23297b04a4bb4a8df185fdbb52584307da
    return ss.str();
}
