#include<iostream>
using namespace std;
class student{
public:
    int roll_no;
    char name[15];
    int Class;
    char division;

    void read (){//get the input from the user
    cout<<"Enter the Roll No. of Student:";
    cin>>roll_no;
    cout<<"Enter the name of the student:";
    cin>>name;
    cout<<"Class: ";
    cin>>Class;
    cout<<"Division: ";
    cin>>division;
    }
    void display (){//to display the data
        cout<<"************************************"<<endl;
        cout<<"Roll No. : "<<roll_no<<endl
            <<"Name: "<<name<<endl
            <<"Class: "<<Class<<endl
            <<"Division: "<<division<<endl;
        cout<<"************************************"<<endl;
    }

}s[5];//5 objects

int main(){
    for(int i;i<=5;i++)
    {
     s[i].student::read();//scope resolution to tell the scope of the function
     s[i].student::display();
    }
    cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;

return 0;
}
