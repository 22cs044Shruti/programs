#include<iostream>
using namespace std;
class swap{
    public:
void get_number(){//member function
int a,b;//data member
cout<<"Numbers before Swapping"<<endl;
cout<<"Enter 1st Number: ";
cin>>a;//getting input from the user
cout<<"Enter 2nd Number: ";
cin>>b;

cout<<endl<<"Numbers after Swapping"<<endl;
//let's take a=4 and b=2
a=a*b;//a=4/2=2
b=a/b;//b=2*2=4
a=a/b;//a=4/2=2
cout<<a<<" "<<b<<" "<<endl;
}
}n;

int main(){
n.swap::get_number();
cout<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;
}
