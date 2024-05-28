#include <iostream>
#include "menuItem.hxx"

using namespace std;

namespace HOTEL {
    namespace MENU {
        void Item::print() {
            cout    << "Name: " << name
                    << " | Description: " << description
                    << " | price: " << price
                    << " | unit: " << unit << endl;
        }

        void Item::edit() {
            cout << "Edit Customer: ";
            cout << endl << "Name: (" << name << ")";
            cin >> name;
            cout << "Description: (" << description << ")";
            cin >> description;
            cout << "Price: (" << price << ")";
            cin >> price;
            cout << "Unit: (" << unit << ")";
            cin >> unit;
            cin.clear();
        }
        Item* createMenuItem() {
            Item* menu = new Item;
            return menu;
        }
    }
}
