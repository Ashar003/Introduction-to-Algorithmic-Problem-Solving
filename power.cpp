//Akash Sharma
#include <iostream>
using namespace std;
	int	power(int a, int b){
		if(b==0) return 1;
		if(b==1) return a;
			return a*power(a,b-1);
	}
int main() {
	cout<<power(5,0)<<endl;
	cout<<power(2,3)<<endl;
	cout<<power(2,10)<<endl;
	cout<<power(7,3)<<endl;
	cout<<power(7,1)<<endl;
	return 0;
}
