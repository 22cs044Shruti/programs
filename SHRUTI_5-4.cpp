#include<iostream>
using namespace std;
class Dist {
public:
    int feet;
    float inches;
    float scale_factor;
    void scale(){

        feet=feet*scale_factor;
        inches=inches*scale_factor;

        if(inches>=12){
            while(inches>=12){
        inches=inches-12;
        feet=feet+1;
        }
    }


    cout<<"Distance is: "<<feet<<"'"<<inches<<"\""<<endl;

    }

    void display(){

    cout<<"Distance in feet: ";
    cin>>feet;
    cout<<"Distance in inches: ";
    cin>>inches;
    cout<<"What is the scale factor?? ";
    cin>>scale_factor;
    scale();
    }

};
int main(){
    Dist D1,&D2=D1;
    D1.display();
    D2.display();
}

