#include<iostream>
using namespace std;
void divide(int a,int b){

    if(b==0){
        cout<<"It is not divisible because denominator is zero"<<endl;
    }
    else if((a%b)==0){
        cout<<"it is divisible"<<endl;
    }
    else{
        cout<<"not divisible"<<endl;
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
        cout<<"Number is PRIME"<<endl;
        else
            cout<<"Number is not PRIME"<<endl;

}
void divide(float d,float e,float f){
    float average;
    average=(d+e+f)/3;
    cout<<average<<endl;
}

int main(){
    int x,y,z;
    float A,B,C;
    cout<<endl<<"enter Numerator and denominator to check Divisibility"<<endl;
    cout<<"Numerator is: ";
    cin>>x;
    cout<<"DEnominator is: ";
    cin>>y;
    divide(x,y);
     cout<<"******------******------******-------*******-------********"<<endl;
    cout<<endl<<"enter the number to check whether the number is prime or not "<<endl;
    cin>>z;
    divide(z);
    cout<<endl<<"*******------******------******-------*******-------********"<<endl;
    cout<<endl<<"enter three numbers for average "<<endl;
    cin>>A>>B>>C;
    cout<<"Average is:";
    divide(A,B,C);
    cout<<"*******------******------******------********-------********"<<endl;
    cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
}
