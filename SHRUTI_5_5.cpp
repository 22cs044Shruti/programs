#include<iostream>
//#include<string.h>
using namespace std;
class Gate{
public:
    int Rg_Number;
    string Name_Student;
    char Exam_center;
    static int ECV_Cnt,ECS_Cnt,ECA_Cnt;

    void get_data(){
    cout<<"Enter Registration Number: ";
    cin>>Rg_Number;
    cout<<"Enter Student's name: ";
    cin>>Name_Student;
    cout<<"Enter Initials of City (V,S,A): ";
    cin>>Exam_center;

    if(Exam_center=='V'){
        ECV_Cnt++;
    }
    else if(Exam_center=='S'){
        ECS_Cnt++;
    }
    else if(Exam_center=='A'){
        ECA_Cnt++;
    }
    else{
        cout<<"Please enter a valid Center"<<endl;
    }
}
    void put_data(){
     cout<<endl<<"Registration Number: "<<Rg_Number<<endl;
     cout<<"Name:"<<Name_Student<<endl;
    }

   static void get_count(){
    cout<<endl<<"Total available registration at center:"<<endl
         <<"VADODARA: "<<ECV_Cnt<<endl
         <<"SURAT: "<<ECS_Cnt<<endl
         <<"AHMEDABAD: "<<ECA_Cnt<<endl;
    }
};

int Gate::ECV_Cnt=0;
int Gate::ECS_Cnt=0;
int Gate::ECA_Cnt=0;

int main(){
    Gate G[5];
    for(int i=0;i<5;i++){
        G[i].get_data();
    }
    for(int i=0;i<5;i++){
        G[i].put_data();
    }
    Gate::get_count();

return 0;
}
