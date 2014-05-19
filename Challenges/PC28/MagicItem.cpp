#include "MagicItem.h"

MagicItem::MagicItem(string newName, unsigned int newValue, string newDescription, unsigned int newManaRequired): Item(name, value)
{
    name = newName;
    value = newValue;
    description = newDescription;
    manaRequired = newManaRequired;
}

MagicItem::~MagicItem()
{}

void MagicItem::setDescription(string newDescription)
{
    description = newDescription;
}

void MagicItem::setManaRequired(unsigned int newManaRequired)
{
    manaRequired = newManaRequired;
}

string MagicItem::getDescription()
{
    return description;
}

unsigned int MagicItem::getManaRequired()
{
    return manaRequired;
}

string MagicItem::toString()
{
    stringstream ss;
    ss << name << ", " << value << ", " << description << ", requires " << manaRequired << " mana" << endl;
    return ss.str();
}