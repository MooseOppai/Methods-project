#include "inventory.hpp"

inventory::inventory()
{
    Date = 0;
    Price = 0;
    Stock = 0;
    ID = 0;
    Name = "";

}

inventory::~inventory()
{


}

int getDate(int Date);
int getPrice(int Price);
int getStock(int Stock);
int getID(int ID);
string getName(string Name);

void setDate();
void SetID();
void setPrice();
void setName();
void setStock();