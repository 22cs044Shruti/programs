#include<iostream>
using namespace std;
class Number{
int num;
public:
    void get_data(){
    cout<<"Enter a Number:";
    cin>>num;
    }

    void put_data(){
    cout<<"NUmber = "<<num<<endl;
    }

    Number operator++(int){
        Number N2;
       N2.num = num++;
//        cout<<"num in post"<<N2.num<<endl;
       return N2;
    }
    Number operator++(){
        Number N2;


       N2.num = ++num;
//       cout<<"num in pre"<<N2.num<<endl;
       return N2;
    }


    Number operator-(){
       Number N3;
       N3.num = -N3.num;
       return N3;
     }
};

int main(){
 Number N1,N2,N3;
 N2.get_data();
 N1=N2++;
 N1.put_data();
  N2.put_data();
// N1.get_data();
 N3=++N1;
 N3.put_data();
// N3.get_data();
 N3=-N3;
 N3.put_data();
 return 0;

}
