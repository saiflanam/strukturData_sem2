#include<iostream>
using namespace std;

main(){
    float a,b;
    cin >> a >> b;
    a=a*1000;
    for(int i=0;i<b;i++){
        a*=0.75;
    }
    cout << a << endl;


}






