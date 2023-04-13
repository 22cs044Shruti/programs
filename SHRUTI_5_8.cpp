#include<iostream>
using namespace std;
class Parent;
class Child{
private:
    string Name_of_child;
    string gender;
public:
    void get_data(){
    cout<<"Enter the Name of your child: ";
    cin>>Name_of_child;
    cout<<"Gender of your child: ";
    cin>>gender;
    }

    void print_data(){
    cout<<"NAME: "<<Name_of_child<<endl;
    cout<<"GENDER: "<<gender<<endl;
    }

    friend  class Parent;
};

class Parent{
public:
    void Read_Child_data(Child &C){
    C.get_data();
    }

    void Display_Child_data(Child &S){
    S.print_data();
    }
};

int main(){
    Child C1;
    Parent P;

    P.Read_Child_data(C1);
    cout<<"++++----++++----++++----++++----++++"<<endl;
    P.Display_Child_data(C1);

return 0;
}

