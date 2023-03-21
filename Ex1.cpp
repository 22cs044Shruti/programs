#include<iostream>
using namespace std;

int main(){
    int n;
    int A[100];
    cout<<"Enter the size of an array: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<=n;i++)
    {
        A[i]=A[n-i-1];
        cout<<A[i];
    }

return 0;
}
