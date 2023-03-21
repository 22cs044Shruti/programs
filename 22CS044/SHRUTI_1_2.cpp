#include<iostream>
#include<iomanip>//for manipulators
using namespace std;
int main(){
for(int i=1;i<=4;i++)//loop for row
{
    for(int j=1;j<=4;j++)//loop for column
    {
        cout<<setw(3)<<left<<i*j;//1*1=1,1*2=2,..
    }//setw-->to set width of column
    cout<<endl;
}
cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;
}
