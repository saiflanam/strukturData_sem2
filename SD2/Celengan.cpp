#include<iostream>
using namespace std;

int stackAngka[100], top=-1;

bool isEmpty(){
    if (top==-1){ 
        return true;
    } else return false;
}

void push(int x){
    top++;
    stackAngka[top]=x;
   
}

void pop(){
    if (isEmpty()){
        cout << "ERROR: STACK KOSONG\n";
    } else {
        top--;
        
    }
}

void dequeue(int &S){			
	if(isEmpty()){
		cout<<"Maaf Kosong"<<endl;
	}else{
		for(int i= 0;i<=S.top+1;i++){
			S.data[i]=S.data[i+1];
		}
		S.top--;
	}
}

void showAll(stackAngka S){
	for(int i=S.top ;i>=0;i--){
		cout<<S.data[i]<<endl;
	}
	cout<<endl;
}


int main(){
	int perintah;
	int a,b;
	
	cin>>perintah;
	for(int i=0;i<perintah;i++){
		cin>>a;
		if(a==0){			//push
			cin>>b;
			push(b);		
		}else if(a==1){		//enqueue
			cin>>b;
			enqueue(b);
		}else if(a==2){		//dequeue
			cin>>b;
		}else if(a==3){		//pop
			cin>>b;
		}
	}
	
	showAll(stackAngka S);
	
}
