#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array =";
    cin>>n;//getting size of an array from user
    int *array=new int(n);
    cout<<"Enter the elements of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];//get elements from user
    }
    cout<<"Add 2 to each elements of an array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<array[i]+2;//2+2=4,5+2=4,....
        cout<<" ";
    }
    cout<<endl<<"THIS PROGRAM IS PREPARED BY 22CS044_SHRUTI"<<endl;
return 0;
}
