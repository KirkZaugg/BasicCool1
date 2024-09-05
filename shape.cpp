#include "shape.h"

shape::shape(double inWidth, double inHeight) {
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

double shape::getWidth() {
    return width;
}

double shape::getHeight() {
    return height;
}

void shape::setDimensions(double w, double h) {
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

double shape::getArea() {
    return width * height;
}