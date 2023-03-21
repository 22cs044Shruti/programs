#include<iostream>
using namespace std;
struct College_Details{
char college_name[10];
char college_code[10];
char department[5];
int intake;
}C;//structure variable

int main(){
    cout<<"++++++++Enter the College Information++++++++"<<endl;
    cout<<endl<<"Name of the College: ";
    cin>>C.college_name;//using dot operator
    cout<<"College Code: ";
    cin>>C.college_code;//getting input from the user
    cout<<"Department: ";
    cin>>C.department;
    cout<<"Department Intake: ";
    cin>>C.intake;
    //printing the data
    cout<<endl<<"+++++++++++++College Information++++++++++++"<<endl<<endl;
    cout<<"Name of the College: "<<C.college_name<<endl
        <<"College University Code: "<<C.college_code<<endl
        <<"Name of the department: "<<C.department<<endl
        <<"The department of CSE has In-take: "<<C.intake<<endl
        <<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;}
