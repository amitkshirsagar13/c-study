#include <iostream>
#include <math.h>
#include "geometry.hxx"

namespace GEOMETRY {
    Shape::Shape(){
        this->areaValue = 0;
    };
    Shape::Shape(std::string type) : Shape() {
        this->type = type;
    };
    float Shape::getArea() {
        return this->areaValue;
    };
    void Shape::setArea(float area) {
        this->areaValue = area;
    }
    void Shape::print(){
        std::cout << "Area (" << this->type << "): " << getArea() << std::endl;
    };

    // Circle
    Circle::Circle(float d): Shape("Circle") {
        this->d = d;
    }
    void Circle::area() {
        float area = d*PI;
        setArea(area);
    };

    // Rectangle
    Rectangle::Rectangle(float a, float b): Shape( (a == b) ? "Square" : "Rectangle") {
        this->a = a;
        this->b = b;
    }
    void Rectangle::area() {
        setArea(a*b);
    }

    // Square
    Square::Square(float a): Rectangle(a, a) {
    }
}