#include<iostream>
using namespace std;

void cari(int a, int d[10]){
    bool z=false;
    for(int i=0;i<10;i++){
        if(a==d[i]){
            z=true;
            cout << a << " ditemukan di index ke " << i << endl;
            break;
            }
    }if(z==false){
        cout<<a << " tidak ditemukan"<< endl;
    }
}

int main(){

int a;

int data[] = {10,12,1,83,89,23,5,24,14,19};

cin >> a;

cari(a, data);

return 0;

}
