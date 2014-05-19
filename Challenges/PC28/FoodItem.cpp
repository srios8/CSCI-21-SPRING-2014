#include "FoodItem.h"

Item item;

FoodItem::FoodItem(string newName, unsigned int newValue, unsigned int newCalories, string newUnitOfMeasure, float newUnits)
{
    item.setName(newName);
    //name = newName;
    item.setValue(newValue);
    //value = newValue;
    calories = newCalories; 
    unitOfMeasure = newUnitOfMeasure;
    units = newUnits;
}

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
    	
unsigned int FoodItem::getCalories()
{
    return calories;
}

string FoodItem::getUnitOfMeasure()
{
    return unitOfMeasure;
}

float FoodItem::getUnits()
{
    return units;
}
	
string FoodItem::toString()
{
    stringstream ss;
    ss.setf(ios::fixed);
    ss.setf(ios::showpoint);
    ss.precision(2);
//
// Grader comments 2014.05.19
// item.getName and item.getValue below need to be item.getName() and
// item.getValue(). This won't compile.
//
    ss << item.getName << ", " << item.getValue << ", " << units << " " << unitOfMeasure << ", " << calories << " calories" << endl;
    return ss.str();
}
