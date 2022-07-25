#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Order {
private:
int orderID;
int customerID;
string customerName;
int productID;
double price;
int orderTime;

public:
void createOrder();
int editOrder(orderID);
}
