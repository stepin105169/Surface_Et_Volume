#include <sample1.h>

float circle(float radius){
    float area = 3.14*radius*radius;
    return area;
}

float square(float side){
    float area = side*side;
    return area;
}

float rectangle(float length, float width){
    float area = length*width;
    return area;
}

float triangle(float base, float height){
    float area = (base*height)/2;
    return area;
}
