//
//  ShoppingCart.hpp
//  Online Shopping Cart pt2
//
//  Created by Danny Webb-McClain on 9/30/21.
//

#ifndef ShoppingCart_hpp
#define ShoppingCart_hpp

#include <stdio.h>
#include <string>
#include "ItemToPurchase.hpp"
#include <vector>

using namespace std;

class ShoppingCart{
public:
    //Deafault constructor
    ShoppingCart();
    //paramterized constructor
    ShoppingCart(string Name, string date);
    //return customer name
    string GetCustomerName();
    //return the current date
    string GetDate();
    //add an item to the cart
    void AddItem(ItemToPurchase item);
    //remove an item from the cart
    void RemoveItem(ItemToPurchase item);
    //modify an item that is currently inside of the cart
    void ModifyItem(ItemToPurchase item);
    //return the number of items currently in the cart
    int GetNumItemsInCart();
    //get cost of cart
    int GetCostOfCart();
    //prints total of the cart
    void PrintTotal();
    //print descriptions of the items in the cart
    void PrintDescriptions();
    
private:
    //customer name
    string customerName;
    //date
    string currentDate;
    //list of items in the cart
    vector <ItemToPurchase> cartItems;
    
    
};

#endif /* ShoppingCart_hpp */
