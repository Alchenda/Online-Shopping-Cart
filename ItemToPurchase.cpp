//
//  ItemToPurchase.cpp
//  Online Shopping Cart pt2
//
//  Created by Danny Webb-McClain on 9/30/21.
//

#include "ItemToPurchase.hpp"
#include <iostream>

/* Type your code here */

//default constructor
ItemToPurchase::ItemToPurchase(){
    itemName = "none";
    itemDescription = "none";
    itemPrice = 0;
    itemQuantity = 0;
}

//paramterized constructor
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity){
    itemName = name;
    itemDescription = description;
    itemPrice = price;
    itemQuantity = quantity;
}
//Set name
void ItemToPurchase::SetName(string nameSet){
    itemName = nameSet;
}

//Set price
void ItemToPurchase::SetPrice(int priceSet){
    itemPrice = priceSet;
}
//set the item quantity
void ItemToPurchase::SetQuantity(int itemQ){
    itemQuantity = itemQ;
}
void ItemToPurchase::SetDescription(string description){
    itemDescription = description;
}
//get item name
string ItemToPurchase::GetName(){
    return itemName;
}
//get item price
int ItemToPurchase::GetPrice(){
    return itemPrice;
}
//get item quantity
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}
//return the item description
string ItemToPurchase::GetDescription(){
    return itemDescription;
}
//print item cost
void ItemToPurchase::PrintItemCost(){
    cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << itemQuantity * itemPrice << endl;
}
//print item description
void ItemToPurchase::PrintItemDescription(){
    cout << itemName << ": " << itemDescription << endl;
}
