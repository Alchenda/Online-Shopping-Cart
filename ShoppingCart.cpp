//
//  ShoppingCart.cpp
//  Online Shopping Cart pt2
//
//  Created by Danny Webb-McClain on 9/30/21.
//

#include "ShoppingCart.hpp"
#include <iostream>
#include <string>
#include "ItemToPurchase.hpp"
#include <vector>
//default constructor
ShoppingCart::ShoppingCart(){
    customerName = "none";
    currentDate = "January 1, 2016";
}
//paramterized constructor
ShoppingCart::ShoppingCart(string name, string date){
    customerName = name;
    currentDate = date;
}
//get customer name
string ShoppingCart::GetCustomerName(){
    return customerName;
}
//get current date
string ShoppingCart::GetDate(){
    return currentDate;
}
//add item to cart
void ShoppingCart::AddItem(ItemToPurchase item){
    cartItems.push_back(item);
}
//remove an item from cart
void ShoppingCart::RemoveItem(ItemToPurchase item){
    int itemFlag = -1;
    for (int i = 0; i < cartItems.size(); ++i) {
        if (item.GetName() == cartItems.at(i).GetName()) {
            cartItems.erase(cartItems.begin() + i);
            itemFlag++;
        }
    }
    if (itemFlag < 0) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}
//modify an item in the cart
void ShoppingCart::ModifyItem(ItemToPurchase item){
    int itemFlag = -1;
    //new quantity
    for (int i = 0; i < cartItems.size(); ++i) {
        if (item.GetName() == cartItems.at(i).GetName()) {
            cartItems.at(i).SetQuantity(item.GetQuantity());
            itemFlag++;
        }
    }
    if (itemFlag < 0) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}
//reutrn the cart size
int ShoppingCart::GetNumItemsInCart(){
    return cartItems.size();
}
//return the cost of the cart
int ShoppingCart::GetCostOfCart(){
    //sum of the cart
    int sum = 0;
    //get the sum of all items of the cart
    for(int i = 0; i < cartItems.size(); ++i){
        sum = sum + (cartItems.at(i).GetPrice() * cartItems.at(i).GetQuantity());
    }
    return sum;
}
//print the total of the cart
void ShoppingCart::PrintTotal(){
    int sum = this -> GetCostOfCart();
    int numberOfItems = 0;//number of items in the cart
    if (sum == 0) {
        cout << customerName << "'s Shopping Cart - " << currentDate << endl;
        cout << "Number of Items: " << cartItems.size() << endl;
        cout << endl;
        cout << "SHOPPING CART IS EMPTY" << endl;
        cout << endl;
        cout << "Total: $" << sum;
        cout << endl;
    } else {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
        for (int i = 0; i < cartItems.size(); ++i) {
            numberOfItems = numberOfItems + (cartItems.at(i).GetQuantity());
        }
    cout << "Number of Items: " << numberOfItems << endl;
    cout << endl;
        for (int i = 0; i < cartItems.size(); ++i) {
            cartItems.at(i).PrintItemCost();
        }
        cout << endl;
        cout << "Total: $" << sum;
        cout << endl;
    }
}
//print description of the cart's items
void ShoppingCart::PrintDescriptions(){
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl;
    cout << "Item Descriptions" << endl;
        for (int i = 0; i < cartItems.size(); ++i) {
            cartItems.at(i).PrintItemDescription();
        }
}
