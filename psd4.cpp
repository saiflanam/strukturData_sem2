#include<iostream>
using namespace std;

int main(){
    string x,y,z;
    cin >> x >> y >> z;
    for(int i=0;i<=x.length()-1;i++){
        if(z[i]=='1'){
            x[i]=y[i];
        }
    }

    cout << x << endl;

}
