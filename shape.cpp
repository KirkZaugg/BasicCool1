#include "shape.h"

Shape::Shape(double inWidth, double inHeight) {
    if(inWidth > 0) {
        width = inWidth;
    } else {
        width = 1;
    }
    if(inHeight > 0) {
        height = inHeight;
    } else {
        height = 1;
    }
}

double Shape::getWidth() {
    return width;
}

double Shape::getHeight() {
    return height;
}

void Shape::setDimensions(double w, double h) {
    if(w > 0) {
        width = w;
    } else {
        width = 1;
    }
    if(h > 0) {
        height = h;
    } else {
        height = 1;
    }
}

double Shape::getArea() {
    return width * height;
}