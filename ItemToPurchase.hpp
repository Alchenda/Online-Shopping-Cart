//
//  ItemToPurchase.hpp
//  Online Shopping Cart pt2
//
//  Created by Danny Webb-McClain on 9/30/21.
//

#ifndef ItemToPurchase_hpp
#define ItemToPurchase_hpp

#include <stdio.h>
#include <string>

using namespace std;

/* Type your code here */
class ItemToPurchase{
public:
    //default constructor
    ItemToPurchase();
    //paramterzied constructor
    ItemToPurchase(string name, string description, int price, int quantity);
    //Set the name of the item
    void SetName(string nameSet);
    //Set the price of the item
    void SetPrice(int priceSet);
    //Set the quantity of the item
    void SetQuantity(int qSet);
    //Set the description of the item
    void SetDescription(string description);
    //Get the name of the item
    string GetName();
    //Get the price of the item
    int GetPrice();
    //Get the Quantity of the item
    int GetQuantity();
    //Get the description of the item
    string GetDescription();
    //Print item cost
    void PrintItemCost();
    //Print item description
    void PrintItemDescription();
    
private:
    //item name
    string itemName;
    //item price
    int itemPrice;
    //item quantity
    int itemQuantity;
    //item description
    string itemDescription;
};

#endif /* ItemToPurchase_hpp */
