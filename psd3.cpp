#include<iostream>
using namespace std;

int main(){
    int x,i,j,k,l;
    cin >> x;
    for(i=1;i<=x-3;i++){
        for(j=1;j<=x-3;j++){
            for(k=1;k<=x-3;k++){
                for(l=1;l<=x-3;l++){
                    if(i+j+k+l==x){
                    cout << i << " " << j << " " << k << " " << l << endl;
                    }
                }
            }
        }
    }



}
