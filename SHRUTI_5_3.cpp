#include<iostream>
using namespace std;
class currency {
public:

int rupee,paisa;

void enter();
void show();
void update();
void add (currency c1,currency c2);
currency sum(currency c2);


};

void currency:: enter(){
cout<<"How many rupees do yo want: ";
cin>>rupee;
cout<<"How many paisa do you want: ";
cin>>paisa;
}

void currency:: show(){
    cout<<"Rupees: "<<rupee;
    cout<<"Paisa: "<<paisa;
}

void currency:: update(){
if(paisa>=100)
{
    while(paisa>=100)
    {
        paisa=paisa-100;
        rupee=rupee+1;
    }
}
}

void  currency:: add (currency c1,currency c2){
c1.rupee = c1.rupee + c2.rupee;
c1.paisa = c1.paisa + c2.paisa;
c1.update();
cout<<endl;
c1.show();
}

currency currency:: sum (currency c2){
currency c3;
c3.rupee=rupee + c2.rupee;
c3.paisa= paisa + c2.paisa;
c3.update();
return c3;
}

int main(){
    currency  c1,c2,c3;
    c1.enter();
    c1.show();
    cout<<endl;
    c2.enter();
    c2.show();

c3.add(c1,c2);
c3=c1.sum(c2);
cout<<endl;
c3.show();
    return 0;
}

