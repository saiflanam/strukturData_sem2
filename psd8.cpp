#include<iostream>
using namespace std;


int main(){
    double a,b;
    int i=0;
    cin >> a >> b;
    while(a>=b){
        a=a/2;
        i++;
    }
    cout << i << endl;


}
