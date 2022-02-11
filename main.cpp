//
//  main.cpp
//  Online Shopping Cart pt2
//
//  Created by Danny Webb-McClain on 9/30/21.
//

#include <iostream>
#include "ItemToPurchase.hpp"
#include "ShoppingCart.hpp"
#include <string>

//print slection menu and perform functionality on user input
void printMenu(ShoppingCart cart1){
    char userDecision = ' '; //user menu selection
    string itemName; //name of item
    string itemDescription; //item description
    int itemPrice; //price of the item
    int itemQ; //item quantity
    while(userDecision != 'q'){
        //ItemToPurchase item1;
        cout << "MENU" << endl;
        cout << "a - Add item to cart" << endl;
        cout << "d - Remove item from cart" << endl;
        cout << "c - Change item quantity" << endl;
        cout << "i - Output items' descriptions" << endl;
        cout << "o - Output shopping cart" << endl;
        cout << "q - Quit" << endl;
        cout << endl;
        //cout << "Choose an option:" << endl;
        userDecision = ' ';
        while (userDecision != 'o' && userDecision != 'i' && userDecision != 'c' && userDecision != 'd' && userDecision != 'a' && userDecision != 'q') {
            cout << "Choose an option: " << endl;
            //cin.ignore();
            cin >> userDecision;
        }
        //cin >> userDecision;
        switch (userDecision) { //perform action based on user decision
            case 'a':{
                cout << "ADD ITEM TO CART" << endl;
                cin.ignore();
                cout << "Enter the item name:" << endl;
                getline(cin, itemName);
                cout << "Enter the item description:" << endl;
                getline(cin, itemDescription);
                cout << "Enter the item price:" << endl;
                cin >> itemPrice;
                cout << "Enter the item quantity:" << endl;
                cin >> itemQ;
                ItemToPurchase item1(itemName, itemDescription, itemPrice, itemQ);
                cart1.AddItem(item1);
                cout << endl;
                break;
            }
            case 'd':{
                cout << "REMOVE ITEM FROM CART" << endl;
                cout << "Enter name of item to remove:" << endl;
                cin.ignore();
                getline(cin, itemName);
                ItemToPurchase item1;
                item1.SetName(itemName);
                cart1.RemoveItem(item1);
                cout << endl;
                break;
            }
            case 'c':{
                ItemToPurchase item1;
                cout << "CHANGE ITEM QUANTITY" << endl;
                cout << "Enter the item name:" << endl;
                cin.ignore();
                getline(cin, itemName);
                cout << endl;
                cout << "Enter the new quantity:" << endl;
                cin >> itemQ;
                item1.SetName(itemName);
                item1.SetQuantity(itemQ);
                cart1.ModifyItem(item1);
                break;
            }
            case 'i':{
                cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
                cart1.PrintDescriptions();
                break;
            }
            case 'o':{
                cout << "OUTPUT SHOPPING CART" << endl;
                cout << endl;
                cart1.PrintTotal();
                break;
            }
            case 'q':{
                break;
            }
            default:
                
                break;
        }
    }
}

int main(int argc, const char * argv[]) {
    string customerName; //customer name
    string todayDate; //today's date
    cout << "Enter customer's name: " << endl;
    getline(cin, customerName);
    cout << "Enter today's date: " << endl;
    getline(cin, todayDate);
    
    ShoppingCart cart1 = ShoppingCart(customerName, todayDate);
    cout << endl;
    cout << "Customer name: " << cart1.GetCustomerName() << endl;
    cout << "Today's date: " << cart1.GetDate() << endl;
    printMenu(cart1);
    return 0;
}
