
#ifndef DEFINE_GEOMETRY
#define DEFINE_GEOMETRY

#include <iostream>
#include <string>
#include <iomanip>

#ifndef DEF_PI
#define DEF_PI
#define PI 3.14159265359;
#endif


namespace GEOMETRY {
    class Shape {
        public:
            Shape();
            Shape(std::string type);
            virtual void area() = 0;
            void print();
            void setArea(float area);
            float getArea();
        private:
            float areaValue;
            std::string type;
    };
    class Circle : public Shape {
        public:
            using Shape::Shape;
            Circle(float d);
            virtual void area();
        private:
            float d;
    };
    class Rectangle : public Shape {
        public:
            using Shape::Shape;
            Rectangle(float a, float b);
            virtual void area();
        private:
            float a, b;
    };
    class Square : public Rectangle {
        public:
            using Rectangle::Rectangle;
            Square(float a);
        private:
            float a;
    };
}

#endif