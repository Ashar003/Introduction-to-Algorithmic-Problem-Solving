//Akash Sharma CS111
#include <iostream>
using namespace std;
 	double avg (int a, int b, int c){
        return ((a+b+c)/3.0);
}
    int min (int a, int b, int c){
		if (a<b && a<c) return a;
			else if(b<a && b<c) return b;
		else return c;
}
int main(){
    cout<< avg(3,5,6)<<endl;
    cout<< avg(1,7,5)<<endl;
    cout<< avg(14,78,111)<<endl;
    cout<< min(3,5,6)<<endl;
    cout<< min(1,7,5)<<endl;
    cout<< min(14,78,111)<<endl;

return 0;
}
 
