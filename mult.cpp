//Akash Sharma
#include <iostream>
using namespace std;
        int main(){

        for(int x=1;x<=9; x++){
                for (int j=1; j<=9; j++){
                    if(x*j<10){
			cout<<x<<"x"<<j<<"= "<<x*j<<" ";
			}
			else{
			cout<<x<<"x"<<j<<"="<<x*j<<" ";	
			}	
                    }       
		cout<<endl; 
	}  
        return 0;
}
