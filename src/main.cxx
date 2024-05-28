#include <iostream>
#include "menuItem.hxx"
#include <vector>

using namespace HOTEL::MENU;

int main() {

    Item* item = createMenuItem();
    item->print();
    item->edit();
    item->print();

    delete item;
    return 0;
}