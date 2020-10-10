#include <sample1.h>

int main(){
    int n;
    int choose;
    int again = 1;
    while(again == 1){
        printf("\n\t\tWelcome to Surface Et Volume!!\n\n\n");
        printf("\t\t\tHere is your menu\n\n");
        printf("\t\t\t3D SHAPES\n\n");
        printf("\t\t\t  1. Sphere\n");
        printf("\t\t\t  2. Cone\n");
        printf("\t\t\t  3. Cylinder\n");
        printf("\t\t\t  4. Cube\n\n");
        printf("\t\t\t2D SHAPES\n\n");
        printf("\t\t\t  5. Circle\n");
        printf("\t\t\t  6. Square\n");
        printf("\t\t\t  7. Rectangle\n");
        printf("\t\t\t  8. Triangle\n\n");
        printf("\t\t\tEnter your option\t");
        scanf("%d",&n);
        system("CLS");
    switch(n){
    case 1:                     //sphere
        system("CLS");
        float v, a, r;          //volume, area, radius
        printf("Enter radius of sphere: ");
        scanf("%f", &r);
        v = (4*3.14*r*r*r)/3;
        a = 4*3.14*r*r;
        printf("\n\nArea of Sphere: %f\nVolume of Sphere: %f\n\n\n\n" ,a ,v);
        break;
    case 2:                     //cone
        system("CLS");
        float vo, ra, ar, h, l; //volume, radius, area, height, slantheight
        printf("Enter radius of cone: ");
        scanf("%f", &ra);
        printf("\nEnter height of cone: ");
        scanf("%f", &h);
        printf("\nEnter slant height of cone: ");
        scanf("%f", &l);
        vo = (3.14*ra*ra*h)/3;
        ar = 3.14*ra*l+3.14*ra*ra;
        printf("\n\nArea of Cone: %f\nVolume of Cone: %f\n\n\n\n" ,ar, vo);
        break;
    case 3:                         //cylinder
        system("CLS");
        float rad, vol, are, he;    //radius, volume, area, height
        printf("Enter radius of cylinder: ");
        scanf("%f" ,&rad);
        printf("\nEnter height of cylinder: ");
        scanf("%f" ,&he);
        vol = 3.14*rad*rad*he;
        are = 2*3.14*rad*he+2*3.14*rad*rad;
        printf("\n\nArea of Cylinder: %f\nVolume of Cylinder: %f\n\n\n\n",are, vol);
        break;
    case 4:                         //cube
        system("CLS");
        float edge,volu,area;       //edge, volume, area
        printf("Enter edge of cube: ");
        scanf("%f", &edge);
        volu = edge*edge*edge;
        area = 6*edge*edge;
        printf("\n\nArea of Cube: %f\nVolume of Cube: %f\n\n\n\n", area, volu);
        break;
    case 5:                     //circle
        system("CLS");
        float radi;             //radius
        printf("Enter the radius of circle: ");
        scanf("%f", &radi);
        printf("The area of circle is %f\n\n",circle(radi));
        break;
    case 6:                     //square
        system("CLS");
        float si;               //side
        printf("Enter side of square: ");
        scanf("%f", &si);
        printf("The area of square is %f\n\n",square(si));
        break;
    case 7:                                 //rectangle
        system("CLS");
        printf("Enter the length of rectangle: ");
        float length,width,arearec;         //length, width, area of rectangle
        scanf("%f", &length);
        printf("\nEnter the width of rectangle: ");
        scanf("%f", &width);
        arearec = length*width;
        printf("\n\nArea of Rectangle: %f\n\n\n\n", arearec);
        break;
    case 8:                                 //triangle
        system("CLS");
        printf("Enter the base of triangle: ");
        float base,hei,areatri;             //base, height, area of triangle
        scanf("%f", &base);
        printf("\nEnter the height of triangle: ");
        scanf("%f", &hei);
        areatri = (base*hei)/2;
        printf("\n\nArea of Triangle: %f\n\n\n\n", areatri);
        break;

    default:                                //default
        printf("Error!!\n");
        printf("Please choose the correct option!\n");
        break;
    }
    printf("\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("\t\tWould you like to do another calculations:\n\n");
    printf("\t\t\t< 1 > Yes\n");
    printf("\t\t\t< 2 > No\n\n");
    printf("\t\tSelect your option: ");
    scanf("\t%d", &choose);
        system("CLS");
        if (choose == 2) {
            printf("\n\n\n\n\t\t\t\t-----THANKYOU FOR USING SURFACE ET VOLUME!!!-----\n\n\n\n");
            printf("\n\n\n\n\t\t\t\t\t-----HAVE A NICE DAY!!!-----\n\n\n\n");
            break;
        }
    }
    return 0;
}
