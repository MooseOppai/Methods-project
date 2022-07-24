#include <vector>
#include <string>
#include <iostream>
using namespace std;

#ifndef INVENTORY_H
#define INVENTORY_H


#pragma once

class inventory
{
private:
    int Date;
    int Price;
    int Stock;
    int ID;
    stirng Name;

protected:

public:
    inventory();
    
    int inventory::getDate(){
        return Date;
    }
    int inventory::getPrice(){
        return Price;
    }
    int inventory::getStock(){
        return Stock;
    }
    int inventory::getID(){
        return ID;
    }
    string inventory::getName(){
        return Name;
    }

    void inventory::setDate(int date){
        Date = date;
    }
    void inventory::SetID(int id){
        ID = id;
    }
    void inventory::setPrice(int price){
        Price = price
    }
    void inventory::setName(string name){
        Name = name;
    }
    void inventory::setStock(int stock){
        Stock = stock;

    }



};

#endif