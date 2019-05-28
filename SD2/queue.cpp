//STACK PAKAI ARRAY

#include<iostream>
using namespace std;
//definisikan data
struct uang{
	int nominal;
	string warna;
};
//Definisikan STACKDATA
struct queueUang{
	uang data[8];
	int belakang;
};
//buat operasinya
void createQueue(queueUang &S){
	S.belakang = -1;
}

bool isEmpty(queueUang S){
	if(S.belakang == -1){return true;}
	else{return false;}
}

void enqueue(queueUang &S, uang u){
	S.belakang++;
	S.data[S.belakang] = u;
}

void dequeue(queueUang &S, uang &x){			// sama dengan dequeue
	if(isEmpty(S)==true){
		cout<<"Maaf Kosong"<<endl;
	}else{
		for(int i= 0;i<=S.belakang+1;i++){
			S.data[i]=S.data[i+1];
		}
		S.belakang--;
	}
}

void show(queueUang S){
	for(int i=S.belakang ;i>=0;i--){
		cout<<S.data[i].nominal<<endl;
	}
}

int main(){
	queueUang S1, S2;
	uang u100, u1000, u2000;
	uang x;
	
	u100.nominal = 100; u100.warna="silver";
	u1000.nominal = 1000; u1000.warna="silver";
	u2000.nominal = 2000; u2000.warna="abu-abu";
	
	createQueue(S1);
	createQueue(S2);
	cout<<S1.belakang<<endl;
	
	enqueue(S1, u100);
	enqueue(S1, u1000);
	enqueue(S1, u2000);
	show(S1);
	
	dequeue(S1,x);
	dequeue(S1,x);
	dequeue(S1,x);
	
	enqueue(S2,x);
	enqueue(S2,x);
	enqueue(S2,x);
	
	show(S1);
	show(S2);
	
	return 0;
	
	
}





