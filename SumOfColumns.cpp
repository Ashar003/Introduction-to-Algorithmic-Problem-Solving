//Akash Sharma CS111
#include <iostream>
using namespace std;
int main(){
    int fours[4][4]; int sum[4]={0,0,0,0}; int large=0;
    cout<<"Please input numbers for the 4x4 array.\n";
    for(int i=0;i<4;i++){
        for(int k=0;k<4;k++){
            cin>>fours[i][k];
            sum[k]=sum[k]+fours[i][k];
        }
    }
    for (int x=0;x<4;x++){
        if(sum[x]>sum[large]){
            large=x;
        }
        cout<<"The sum of the column is " <<x+1<<" is "<<sum[x]<<".\n";
    }
    cout<<"The greatest column is "<<large+1<<".\n";
    cout<<"Largest columns: ";
    for(int y=0; y<4;y++){
        cout<<fours[y][large]<<" ";
    }
    return 0;
}
