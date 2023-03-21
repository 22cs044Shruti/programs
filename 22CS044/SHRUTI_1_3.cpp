#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a,b,*p,*q,sum;
    p=&a;//using a concept of pointerS
    q=&b;
    cout<<"Enter the value of A ";
    cin>>*p;//get value from the user
    cout<<"Enter the value of B ";
    cin>>*q;

    sum=*p+*q;
    cout<<"The summation of A and B  with scientific is: "
        <<scientific<<sum<<endl// scientific-->scientific floating point notation
        <<"The summation of A and B  with fixed is: "
        <<fixed<<sum<<endl// using manipulator fixed
        <<"The summation of A and B  with setprecision is: "
        <<setprecision(2)<<sum<<endl;// setpricision-->the pricision is fixed to 2
    cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI";
return 0;
}
