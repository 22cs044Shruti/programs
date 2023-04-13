#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>X;
	    if(X%3!=0){
            if(X%3==1){
                cout<<(X%3)+1<<endl;
            }
            else if((X%3)==2){
                cout<<(X%3)-1<<endl;
            }
	    }
	    else{
            cout<<0<<endl;
	    }
	}
	return 0;
}
