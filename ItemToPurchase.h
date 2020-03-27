//
// Created by Jef DeWitt on 3/26/20.
//

#ifndef SHOPPING_CART_ITEMTOPURCHASE_H
#define SHOPPING_CART_ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    void SetName(string newName);
    string GetName();
    void SetPrice(int newPrice);
    int GetPrice();
    void SetQuantity(int newQuantity);
    int GetQuantity();
private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif //SHOPPING_CART_ITEMTOPURCHASE_H
