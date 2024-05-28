#include <iostream>
#include "menuItem.hxx"
#include "geometry.hxx"
#include <vector>

using namespace GEOMETRY;
using namespace HOTEL::MENU;

int main() {

    // Item* item = createMenuItem();
    // item->print();
    // item->edit();
    // item->print();
    // delete item;

    float d, b;
    cin >> d;
    cin >> b;
    Shape* shape = new Circle(d);
    shape->area();
    shape->print();

    shape = new Rectangle(d, b);
    shape->area();
    shape->print();

    shape = new Square(d);
    shape->area();
    shape->print();

    return 0;
}