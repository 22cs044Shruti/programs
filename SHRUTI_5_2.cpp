#include<iostream>
#include<iomanip>
using namespace std;
class Batsman{
//Private Data Members
private:
    char batsman_name[20];
    int bcode;
    int innings,not_out,runs;
    float batting_avg;
    inline float calcavg ();
//Public member functions
public:
    void get_data();//To get data
    void put_data();//To print data
};
//getting details from the user
void Batsman:: get_data(){
cout << "Enter the Name of Batsman: ";
cin >> batsman_name;
cout << "Enter the batsman code in 4 digit: ";
cin >> bcode;
cout << "Enter the innings: ";
cin >> innings;
cout << "Enter Not-out inniing: ";
cin >> not_out;
cout << "Enter the total runs: ";
cin >> runs;
}
//printing the data
void Batsman:: put_data ()
{
    float ans;
    cout << "Name: " << batsman_name << endl
    << "Bcode: " << bcode << endl
    << "Total innings: " << innings << endl
    << "Enter not_out timings: " << not_out << endl
    << "Enter total runs: " << runs << endl;
    ans=Batsman::calcavg();
    cout<<"Batting average: " << ans;
}
//using inline function to improve execution time and speed
inline float Batsman:: calcavg(){
    batting_avg=runs/(innings-not_out);
}

int main(){
    //creating object of the class
    class Batsman s;
//Function call
s.get_data();
cout << "----------------------------------------" << endl;
s.put_data();
cout << endl << "THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI" << endl;
return 0;
}
