#include <string>
#include <vector>

class Item
{
private:
    std::string color;
    std::string name;

    std::vector<Item *> items;

public:
    Item(std::string color = "Grey", std::string name = "Item") : color(color), name(name) {}

    Item(const Item &item) : color(item.color), name(item.name), items(item.items)
    {
        for (auto &&item : items)
        {
            item = new Item(*item);
        }
    }

    Item &operator=(const Item &item)
    {
        color = item.color;
        name = item.name;
        for (auto &&item : items)
        {
            item = new Item(*item);
        }
        return *this;
    }

    ~Item()
    {
        for (auto &&item : items)
        {
            delete item;
        }
    }

    void AddItem(Item *item);

    void ShowContents();
};
