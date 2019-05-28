#include<iostream>
using namespace std;

int stackAngka[1000], top=-1;

void push(int x){
    top++;
    stackAngka[top]=x;
}

void showAll(){
	 for (int i=top; i>=0; i--){
        cout << stackAngka[i] <<endl;
    }
	
}

int main(){
	int input,nilai;
	int data[100];
	
	cin>>input;
	for(int i=0;i<input;i++){
		cin>>nilai;
		if(nilai>=0 && nilai<=100){
			push(nilai);
		}
		
	}
	
	showAll();
	
}
