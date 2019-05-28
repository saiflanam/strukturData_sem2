#include <iostream>
using namespace std;

struct stackRak{
	int data[100];
	int top;
};

void showAll(stackRak S){
	for(int i=S.top ;i>=0;i--){
		cout<<S.data[i].nomor<<" "<<S.data[i].judul<<endl;
	}
	cout<<endl;
}

void push(stackRak &S){
		S.top++;
		S.data[S.top] = b;
		showAll(S);
	}


void pop(stackRak &S, buku &x){
	if(S.top<=-1){
		cout<<"ERROR: STACK KOSONG"<<endl;
	}else{
		x = S.data[S.top];
		S.top--;
		showAll(S);
	}
}

int main(){
	int perintah;
	
	cin>>perintah;
	
	for(int i=perintah;i>0;i--){
		
	}
}
