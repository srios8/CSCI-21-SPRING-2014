#include "MagicItem.h"

MagicItem::MagicItem(string newName, unsigned int newValue, string newDescription, unsigned int newManaRequired)
:Item(newName, newValue), description(newDescription), manaRequired(newManaRequired)
{}

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

string MagicItem::getDescription() const
{
    return description;
}

unsigned int MagicItem::getManaRequired() const
{
    return manaRequired;
}

string MagicItem::toString()
{
    stringstream ss;
    ss << getName() << ", $" << getValue() << ", " << description << ", requires " << manaRequired << " mana";
    return ss.str();
}