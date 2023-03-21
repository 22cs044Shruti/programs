#include<iostream>
using namespace std;
void divide(int a,int b){

    if(b==0){
        cout<<"It is not divisible because denominator is zero"<<endl;
    }
    else if((a%b)==0){
        cout<<a<<"is divisible by "<<b<<endl;
        }
    else{
       cout<<a<<" is not divisible by "<<b<<endl;
       }
}
void divide(int c){
    int prime=0;
    for(int i=1;i<=c;i++)
    {
       if(c%i==0)
        prime++;
    }
    if(prime==2)
        cout<<c<<" is PRIME "<<endl;
        else
        cout<<c<<" is not PRIME "<<endl;

}
void divide(float d,float e,float f){
    float average;
    average=(d+e+f)/3;
    cout<<"Average of "<<d<<" "<<e<<" and "<<f<<" is "<<average<<endl;
}

int main(){
    divide(2,4);
     cout<<"******------******------******"<<endl;
    divide(4);
    cout<<"*******------******------******"<<endl;
    divide(2.5,8.5,63.54);
    cout<<"*******------******------******"<<endl;
    cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
    return 0;
}
