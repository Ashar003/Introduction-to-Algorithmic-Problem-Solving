//CS111-EC1-Sharma, Akash
#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Please enter a numerical grade\n";
	cin>>x;
	
	if (x<0 ||  x>100) {
		cout<<"Invalid Output\n";
	}
	if (x <= 100 && x>=90) {
		cout<<"A\n";
	}
	
	if (x <= 89 && x>=80){
		cout<<"B\n";
	}
	if (x <=79 && x>=70){
		cout<<"C\n";
	}
	if (x <=69 && x>=0) {
		cout<<"F\n";	
	}
	return 0;
}
