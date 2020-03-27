//
// Created by Jef DeWitt on 3/26/20.
//
#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

string itemName;
int itemPrice;
int itemQuantity;

ItemToPurchase::ItemToPurchase() {
    this->itemName = "none";
    this->itemPrice = 0;
    this->itemQuantity = 0;
}

void ItemToPurchase::SetName(string newName) {this->itemName = newName;}
string ItemToPurchase::GetName() {return itemName;}

void ItemToPurchase::SetPrice(int newPrice) {itemPrice = newPrice;}
int ItemToPurchase::GetPrice() {return itemPrice;}

void ItemToPurchase::SetQuantity(int newQuantity) {this->itemQuantity = newQuantity;}
int ItemToPurchase::GetQuantity() {return itemQuantity;}

