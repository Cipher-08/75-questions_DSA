#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(((a+b) <= c) or ((b+c) <= a) or ((c+a)<=b)){
	    cout<<"NO"<<endl;
	}
    else{
        cout<<"YES"<<endl;
    }
	return 0;
}
