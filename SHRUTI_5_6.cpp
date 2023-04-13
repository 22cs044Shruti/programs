#include<iostream>
using namespace std;
class date{
int dd,mm,yyyy;
public:
    void get_date(){
    cout<<"enter date:";
    cin>>dd;
    cout<<"enter month:";
    cin>>mm;
    cout<<"enter year:";
    cin>>yyyy;
    }

    void put_date(){
    cout<<"DATE:"<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
    }

    friend void swap_date(date &,date &);
};
 void swap_date(date &s1,date &s2){
 date temp;
 temp=s1;
 s1=s2;
 s2=temp;
 }

 int main(){
 date d1,d2;
 d1.get_date();
 d2.get_date();
 cout<<"---Before Swapping---"<<endl;
 d1.put_date();
 d2.put_date();
 swap_date(d1,d2);
 cout<<"---After Swapping---"<<endl;
 d1.put_date();
 d2.put_date();
 }

