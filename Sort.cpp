//Akash Sharma, CS111
#include <iostream>
using namespace std;
		void print(int x[], int cap) {
		for(int i = 0; i < cap; i++) {
		cout << x[i] << " ";
}
		cout << endl;
}
	void sort(int x[], int cap) {
		int temp;
		for(int b=0;b<cap;b++){
			for(int a=0; a<cap; a++){
				if(x[b]>x[a]){
				temp=x[b];
				x[b]=x[a];
				x[a]=temp;
		}
		
	}
}
}
int main() {
	int x[5] = {5, 9, 1, 3, 7};
	print(x, 5); //prints 5 9 1 3 7
	sort(x, 5);
	print(x, 5); //prints 9 7 5 3 1
return 0;
}
