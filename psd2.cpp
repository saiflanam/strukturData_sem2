#include<iostream>
using namespace std;

main(){
    short a,b,c,d;
    string perintah;
    cin >> a >> perintah >> b;
    if(perintah=="tambah"){
        c=a+b;
        cout << c << endl;
    }else if(perintah=="kali"){
        c=a*b;
        cout << c << endl;
    }else if(perintah=="bagi"){
        c=a/b;
        d=a%b;
        cout << c << " sisa " << d << endl;
    }
}
