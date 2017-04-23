//CS111-Sharma,Akash-assignment03
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Please enter a value to see if it is divisible by 2,3, or 5\n";
	cin>>n;
	
	if ((n%2)==0){
		cout<<n<<" is divisible by 2.\n";
	}else{ 
		cout<<n<<" isn't divisible by 2.\n";
	}
	if ((n%3)==0){
		cout<<n<<" is divisible by 3.\n";
	}else{ 
		cout<<n<<" isn't divisible by 3.\n";
	}
	if ((n%5)==0){
		cout<<n<<" is divisible by 5.\n";
	}else{ 
		cout<<n<<" isn't divisible by 5.\n";
	}

	return 0; 
}
