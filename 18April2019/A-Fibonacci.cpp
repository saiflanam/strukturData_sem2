#include<iostream>
using namespace std;

int fibonacci(int kebrapa){
    if(kebrapa <= 0){
        return 0;
    }
    else if(kebrapa == 1 || kebrapa == 2){
        return 1;
    }
    else{
        return fibonacci(kebrapa-1)+ fibonacci(kebrapa-2);
    }
}

int main(){
    int urutan;
    cin >> urutan;

    cout << fibonacci(urutan) << endl;


    return 0;
}
