#include <iostream>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

int main() {

   ItemToPurchase itemOne;
   ItemToPurchase itemTwo;
   unsigned int i;
   unsigned int j;
   char input[100];

   vector<string> userPrompt = {"Enter the item name:", "Enter the item price:", "Enter the item quantity:"};
   vector<vector<string>> userPrompts = {userPrompt, userPrompt};
   vector<string> itemInfo;

   for (i=0; i<userPrompts.size(); ++i) {
       cout << "Item " << i+1 << endl;
       vector<string>promptGroup = userPrompts.at(i);
       for (j = 0; j < userPrompt.size(); ++j) {
           string prompt = promptGroup.at(j);
           cout << prompt << endl;
           cin.getline(input, sizeof(input));
           itemInfo.push_back(input);
       }
       cout << endl;
   }

   // item one
   itemOne.SetName(itemInfo.at(0));
   itemOne.SetPrice(stoi(itemInfo.at(1)));
   itemOne.SetQuantity(stoi(itemInfo.at(2)));

    // item two
    itemTwo.SetName(itemInfo.at(3));
    itemTwo.SetPrice(stoi(itemInfo.at(4)));
    itemTwo.SetQuantity(stoi(itemInfo.at(5)));

    // Spit out text to user
   cout << "TOTAL COST" << endl;

   cout << itemOne.GetName() <<
   " " << itemOne.GetQuantity() <<
   " @ $" << itemOne.GetPrice() <<
   " = $"<< itemOne.GetPrice() * itemOne.GetQuantity() <<
   endl;

   cout << itemTwo.GetName() <<
   " " << itemTwo.GetQuantity() <<
   " @ $" << itemTwo.GetPrice() <<
   " = $"<< itemTwo.GetPrice() * itemTwo.GetQuantity() <<
   endl;

   cout << endl;
   cout << "Total: $" <<
   (itemOne.GetPrice() * itemOne.GetQuantity()) +
   (itemTwo.GetPrice() * itemTwo.GetQuantity()) <<
   endl;

   return 0;
}
