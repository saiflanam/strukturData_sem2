#include<iostream>
using namespace std;

int jumlah(int x, int y, int z){
    int tambah;
    tambah = x+y+z;
    return tambah;
}

int main(){

int a1, a2, a3;

cin>>a1>>a2>>a3;

int hasil = jumlah(a1, a2, a3);

cout << hasil << endl;

return 0;

}

