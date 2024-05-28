
#ifndef HOTEL_MENU_CUSTOMER
#define HOTEL_MENU_CUSTOMER
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

namespace HOTEL {
    namespace MENU {
        const short ZIP_SIZE = 5;
        struct Item {
            int index;
            std::string name;
            std::string description;
            float price;
            std::string unit;
            void print();
            void edit();
        };
        Item *createMenuItem();
    }
}

#endif
