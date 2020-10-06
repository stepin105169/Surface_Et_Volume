#include <sample1.h>

int main()
{
    int n;
    int choose;
    int again = 1;
    while(again == 1){
        printf("\t\tTo get the area and volume of solid shapes\n\n\n");
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
        float r;
        printf("Enter the radius of sphere: ");
        scanf("%f", &r);
        printf("The area of sphere is %f\n\n",sphere(r));
        break;
    case 2:                     //cone
        system("CLS");
        float ra, slant;
        printf("Enter radius of cone: ");
        scanf("%f", &ra);
        printf("\nEnter the slant height of cone: ");
        scanf("%f", &slant);
        printf("The area of cone is %f\n\n",cone(ra,slant));
        break;


    default:
        printf("Error\n");
        break;
    }
    printf("\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("\t\tWould you like to do another calculations:\n\n");
    printf("\t\t\t< 1 > Yes\n");
    printf("\t\t\t< 2 > No\n");
    printf("Select your option: ");
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
