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
    ss << getName() << ", $" << getValue() << ", " << units << " " << unitOfMeasure << ", " << calories << " calories";
    return ss.str();
}