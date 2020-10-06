#include <sample1.h>

float sphere(float radius){
    float area = 4*3.14*radius*radius;
    return area;
}

float cone(float radius, float slantheight){
    float area = 3.14*radius*slantheight+3.14*radius*radius;
    return area;
}
