#include <iostream>
using namespace std;
//Definisikan STACKDATA
struct buku{
	int nomor;
	string judul;
};

struct stackRak{
	buku data[8];
	int top;
};
//buat operasinya
void createStack(stackRak &S){
	S.top = -1;
}

bool isEmpty(stackRak S){
	if(S.top == -1){return true;}
	else{return false;}
}

bool isFull(stackRak S){
	if(S.top == 7){return true;}
	else{return false;}
}

void push(stackRak &S, buku b){
	if(S.top>=7){
		cout<<"Maaf Rak Penuh"<<endl;
	}else{
		S.top++;
		S.data[S.top] = b;
	}
}

void pop(stackRak &S, buku &x){
	if(S.top<=-1){
		cout<<"Maaf Rak Kosong"<<endl;
	}else{
		x = S.data[S.top];
		S.top--;
	}
}

void showAll(stackRak S){
	for(int i=S.top ;i>=0;i--){
		cout<<S.data[i].nomor<<" "<<S.data[i].judul<<endl;
	}
	cout<<endl;
}

void showTop(stackRak &S){
	for(int i=S.top ;i>=0;i--){
		cout<<S.data[i].nomor<<" "<<S.data[i].judul<<endl;
		break;
	}
}

void ambilPalingBawah(stackRak &S, buku &x){
	if(isEmpty(S)==true){
		cout<<"Maaf Rak Kosong"<<endl;
	}else{
		S.top--;
		for(int i= 0;i<=S.top+1;i++){
			S.data[i]=S.data[i+1];
		}
	}
}

int main(){
	stackRak S1, S2;
	buku b10, b11, b12,b13,b14,b15;
	buku x;
	
	b10.nomor = 110; b10.judul="belajar ngoding kuy";
	b11.nomor = 111; b11.judul="cara jadi progamer";
	b12.nomor = 112; b12.judul="no title";
	b13.nomor = 113; b13.judul="belajar c++ kuy";
	b14.nomor = 114; b14.judul="cara jadi gemer";
	b15.nomor = 115; b15.judul="ngga ada judulnya";
	
	
	createStack(S1);
	createStack(S2);
	//cout<<S1.top<<endl;

	push(S1, b10);
	push(S1, b11);
	push(S1, b12);
	push(S1, b13);
	push(S1, b14);
	push(S1, b15);
	/*
	pop(S1, b10);
	pop(S1, b11);
	pop(S1, b12);
	pop(S1, b13);
	pop(S1, b14);
	pop(S1, b15);
	*/
	push(S2, b12);
	push(S2, b13);
	push(S2, b14);
	push(S2, b15);

//	showAll(S1);
//	showAll(S2);
	
//	showTop(S1);
//	showTop(S2);

	ambilPalingBawah(S1,x);
	showAll(S1);
	ambilPalingBawah(S2,x);
	showAll(S2);
	
	return 0;
	
	
}



