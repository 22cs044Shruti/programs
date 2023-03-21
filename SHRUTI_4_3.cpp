#include<iostream>
#include<math.h>
using namespace std;
inline double Power (int p,int base=2){
    double ans;
    ans=pow(base,p);//inbuilt power function from math library

return ans;
}
int main()
{
    int n;
    cout<<"Enter the value of power:  ";
    cin>>n;//taking input from user
    cout<<"The ans is: "<<Power(n,2);//function calling
    cout<<endl<<"THIS PROGRAM IS PREAPRED BY 22CS044_SHRUTI"<<endl;
    return 0;
}
