#include <sample1.h>

float circle(float radius){
    float area = 3.14*radius*radius;        //area of circle
    return area;
}

float square(float side){
    float area = side*side;                 //area of square
    return area;
}

float rectangle(float length, float width){
    float area = length*width;              //area of rectangle
    return area;
}

float triangle(float base, float height){
    float area = (base*height)/2;           //area of triangle
    return area;
}
