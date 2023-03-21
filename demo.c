#include<stdio.h>

struct Rectangle{
float width;
float height;
};
float Area(float a,float b);
void Value(float x,float y)
{
    float r;
    printf("Enter Width and Height of the Rectangle\n");
    printf("Width: ");
    scanf("%f",&x);
    printf("Height: ");
    scanf("%f",&y);
    Area(x,y);


}
float  Area(float a,float b){
printf("Area of the Rectangle is: %f",a * b);
}

int main()
{
struct Rectangle S;
Value(struct Rectangle );
return 0;
}
