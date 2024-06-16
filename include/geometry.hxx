
#ifndef DEFINE_GEOMETRY
#define DEFINE_GEOMETRY

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <memory>

#ifndef DEF_PI
#define DEF_PI
#define PI 3.14159265359;
#endif

using namespace std;

using SharedShapePtr = shared_ptr<GEOMETRY::Shape>;

namespace GEOMETRY {
    class ShapeManager {
        public:
            static ShapeManager *getInstance();
            ShapeManager(const ShapeManager& obj) = delete;
            void operator=(ShapeManager const&)  = delete;
            void addShape(SharedShapePtr shapePtr);
            void editShape(size_t index, SharedShapePtr shapePtr);
            Shape *getShapeByIndex(size_t index);
            void deleteShape(size_t index);
            void area();
        private:
            ShapeManager();
            static ShapeManager *instance;
            std::vector<SharedShapePtr> shapeList;

    };
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