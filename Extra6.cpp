#include <iostream>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	string U;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>U;
	    N=strlen(U);
	    for(int i=0;i<N;i++){
	    if(U[i]==U[i+1]){
	        U[i+1]=U[i];
	        cout<<U[i];
	    }
      }
	}
	return 0;
}
