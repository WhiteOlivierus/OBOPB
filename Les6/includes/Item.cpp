#include "includes/Item.h"

void Item::AddItem(Item *item)
{
    items.push_back(item);
}

void Item::ShowContents()
{
    std::cout << color << " " << name << std::endl;

    for (auto item : items)
        item->ShowContents();
}