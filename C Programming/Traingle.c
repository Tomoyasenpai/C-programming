#include<stdio.h>
int main()
{
    double width=35.4,height=10.2,area=0.0,perimeter=0.0;
    area=width*height;
    perimeter=2.0*(height+width);
    printf("\nThe Area of triangle whose height=%f,width=%f is: %f",height,width,area);
    printf("\nThe Perimeter of triangle whose height=%f,width=%f is: %f",height,width,perimeter);
    return 0;
}