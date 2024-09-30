/*write a C program to accept three dimenstions length ,breadth and height of cuboid
 and printf surface area (surface area=2(lb+lh+bh)) */
 #include<stdio.h>
 int main()
 {
    float length;
    float breadth;
    float height;
    float surface_area;
    printf("Enter the length of cuboid:");
    scanf("%f",&length);
    printf("Enter the breadth of cuboid:");
    scanf("%f",&breadth);
    printf("Enter the height of cuboid:");
    scanf("%f",&height);

    surface_area=2*( length*breadth + length*height + breadth*height );

    printf("Surface area of cuboid is %0.2f",surface_area);
    return 0; 
 }