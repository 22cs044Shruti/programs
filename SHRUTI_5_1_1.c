#include<stdio.h>
//creating a structure
struct Rectangle{
float width;
float height;
};
float Area(float a,float b);
//function to get Value
void Value(float x,float y)
{
    float r;
    printf("Enter Width and Height of the Rectangle\n");
    //getting width and height from user
    printf("Width: ");
    scanf("%f",&x);
    printf("Height: ");
    scanf("%f",&y);
    r=Area(x,y);//Nesting of function
    printf("%f",r);
}
//For calculating area of Rectangle
float Area(float a,float b){
printf("Area of the Rectangle is: ");
return a*b;
}

int main()
{
//creating structure variable
struct Rectangle S;
//function call to get values and then find area
Value(S.width,S.height);
printf("\nTHIS PROGRAM IS PREPARED BY 22CS044_SHRUTI");
return 0;
}
