#include<iostream>
using namespace std;

int stackBuku[100], top=-1;

struct buku{
	string kode;
	string judul;
};

struct stackRak{
	buku data[8];
	int top;
};

void createStack(stackRak &S){
	S.top = -1;
}

void push(stackRak &S, buku b){
		S.top++;
		S.data[S.top] = b;
}

void pop(stackRak &S, buku &x){
	x = S.data[S.top];
	S.top--;
	
}

void showAll(stackRak S){
	for(int i=S.top ;i>=0;i--){
		cout<<S.data[i].kode<<" "<<S.data[i].judul<<endl;
	}
	cout<<endl;
}

int main(){
	int input;
	char aksi;
	int data[100];
	stackRak S;
	buku b;
	
	
	cin>>input;
	for(int i=0;i<input;i++){
		cin>>aksi;
		
		if(aksi=='T'){
			cin>>S.data[i].kode>>S.data[i].judul;
			push(S,b);
		}else if(aksi=='A'){
			pop(S,b);
		}
		
	}
	
	showAll(S);
	
}



