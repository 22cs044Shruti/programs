#include<iostream>

using namespace std;
class Product{
   int number,product=1,digit;
public:
    void get_number(){
    cout<<"Enter a Number: ";
    cin>>number;
    }
    void product_of_digit(){
    do{
    digit=number%10;
    product=product*digit;
    number=number/10;
    }while(number);

    cout<<"product: "<<product;
    }
};
main()
{
  Product p;
  p.get_number();
  p.product_of_digit();

}
