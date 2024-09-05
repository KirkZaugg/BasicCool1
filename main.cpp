#include<iostream>
#include "shape.h"

using namespace std;

int main() {
    shape box = shape(4,4);
    cout << box.getHeight()<< endl;
    cout << box.getWidth() << endl;
    
    return 0;
}
