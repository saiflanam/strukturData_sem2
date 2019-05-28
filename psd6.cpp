#include<iostream>
using namespace std;

int max(int p, int q, int z){
    if(p>q&&p>z){
        return p;
    }else if(q>z&&q>p){
        return q;
    }else if(z>p&&z>q){
        return z;
    }
}


int main(){

int a1, a2, a3;

cin>>a1>>a2>>a3;

cout << max(a1, a2, a3)<< endl;

return 0;

}
