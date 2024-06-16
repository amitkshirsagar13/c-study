#include <iostream>
#include <math.h>
#include "geometry.hxx"

namespace GEOMETRY {
    ShapeManager::ShapeManager(){}
    ShapeManager* ShapeManager::getInstance() {
        if (instance == nullptr) {
            instance = new ShapeManager();
        }

        return instance;
    }
    void ShapeManager::addShape(SharedShapePtr shapePtr){
        shapeList.push_back(shapePtr);
    };
    void ShapeManager::editShape(size_t index, SharedShapePtr newShape){
        if (index < shapeList.size()) {
            shapeList[index] = newShape;
        } else {
            std::cerr << "Index out of range.\n";
        }
    };
    Shape* ShapeManager::getShapeByIndex(size_t index){
        if (index < shapeList.size()) {
            return shapeList[index];
        } else {
            std::cerr << "Index out of range.\n";
        }

        return nullptr;
    };
    void ShapeManager::deleteShape(size_t index){
        if (index < shapeList.size()) {
            shapeList.erase(shapeList.begin() + index);
        } else {
            std::cerr << "Index out of range.\n";
        }
    };
    void ShapeManager::area(){
        for (const auto& shape : shapeList) {
            shape->area();
        }
    };

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