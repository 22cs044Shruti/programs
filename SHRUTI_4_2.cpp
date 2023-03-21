#include<iostream>
using namespace std;
class referance{
public:
int & tonLarge(int &a,int &b){
    if(a>b)//25>20
    {
        a=100;//a=100,b=20
        return a;
    }
    else{
        b=100;
        return b;
    }
}
}R;

int main()
{
    int X,Y;
    cout<<"Enter two numbers"<<endl;
    cout<<"Number 1= ";
    cin>>X;
    cout<<"Number 2= ";
    cin>>Y;//taking input from the user
    int &max_= R.referance::tonLarge(X,Y);//function calling
    cout<<"number 1 is: "<<X<<endl<<"number 2 is: "<<Y<<endl;
    cout<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;
}
