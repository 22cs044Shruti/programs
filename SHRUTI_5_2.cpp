#include<iostream>
#include<iomanip>
using namespace std;
class Batsman{
private:
    char batsman_name[20];
    int bcode;
    int innings,not_out,runs;
    float batting_avg;
   inline float calcavg ();

public:
    void get_data();
    void put_data();


};

void Batsman:: get_data(){
cout<<"Enter the Name of Batsman: ";
cin>>batsman_name;
cout<<"Enter the batsman code in 4 digit: ";
cin>>bcode;
cout<<"Enter the innings: ";
cin>>innings;
cout<<"Enter Not-out timing: ";
cin>>not_out;
cout<<"Enter the total runs: ";
cin>>runs;
}

void Batsman:: put_data ()
{
    float ans;
    cout<<"Name: "<<batsman_name<<endl
    <<"Bcode: "<<bcode<<endl
    <<"Total innings: "<<innings<<endl
    <<"Enter not_out timings: "<<not_out<<endl
    <<"Enter total runs: "<<runs<<endl;
    ans=Batsman::calcavg();
    cout<<"Batting average: "<<ans;
}

inline float Batsman:: calcavg(){
    batting_avg=runs/(innings-not_out);
}

int main(){
    class Batsman s;
s.get_data();
s.put_data();
cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;
}
