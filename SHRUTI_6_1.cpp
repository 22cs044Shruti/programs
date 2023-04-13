#include<iostream>
using namespace std;
class time{
 int hour,Min,Sec;

 public:
     time();//Declaration for default constructor
     time(int,int,int);//Declaration for parameterized constructor
     time(time &);//Declaration for copy costructor
     ~time();

     //To get time from the user
    void get_data(){
    cout<<"Enter Hour: ";
    cin>>hour;
    cout<<"Enter Minutes: ";
    cin>>Min;
    cout<<"Enter Seconds: ";
    cin>>Sec;
 }
//To print the time
 void print_data(){
 cout<<hour<<":"<<Min<<":"<<Sec<<endl;
 }

};
//Definition of Default constructor
time::time(){
   hour=11;
   Min=30;
   Sec=55;
}
//Definition of Parameterized costructor
time::time(int h,int m,int s=44){
hour=h;
Min=m;
Sec=s;
}
//Definition of Copy constructor
time::time(time &t)
{
    hour=t.hour;
    Min=t.Min;
    Sec=t.Sec;
}

time::~time()
{

}

//main program
int main(){
//creating objects
/*t1 for invoking default constructor
  t2 for invoking parameterized constructor
  t3 for copy the data in t4 by using copy constructor*/
time t1,t2(20,2,20),t3;
cout<<"Invoking Default Constructor"<<endl;
t1.print_data();
cout<<"Invoking Parameterized Constructor"<<endl;
t2.print_data();
cout<<"Invoking copy constructor"<<endl;
time t4(t3);
t4.print_data();
return 0;
}
