#include <stdio.h>
void main()

{
    
    float radius,height,surface_area,volume;
    printf("Enter radius of a cylinder : \n");
    scanf("%f",& radius);

    printf("Enter height of a cylinder : \n");
    scanf("%f",& height);

    surface_area = (2*(22 / 7)*radius*radius)+(2*(22/7)*radius*height);
    volume = (22 / 7)*radius*radius*height;
    
    printf("Surface area of cylinder is: %f", surface_area);
    printf("\n Volume of cylinder is : %f", volume);
    
}