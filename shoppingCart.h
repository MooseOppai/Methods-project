#pragma once

#include <vector>
#include <string>
#include <iostream>

using namespace std;

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

class shoppingCart {

private:
    int cartID;
    int* productID;
    string productName;
    double sum;

public:
    shoppingCart();

    void shoppingCart::addItem(int productID) {
        productID++;
    }

    void shoppingCart::removeItem(int productID) {
        productID--;
    }

    void shoppingCart::viewCartDetails() {

    }

    int shoppingCart::itemQuantity() {

    }

    double shoppingCart::total() {

    }



};

#endif

