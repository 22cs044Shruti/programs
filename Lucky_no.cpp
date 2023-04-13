#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,x=0;
	char a[1000000000];
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>a;
	    for(int i=0;i<sizeof(a);i++){
	    if(a[i]==7)
	    {
	        x++;
	        if(x>=1)
	        {
	          cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	          }
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	    }

	}
	return 0;
}
