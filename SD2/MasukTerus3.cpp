#include<iostream>
using namespace std;

int main(){
	int x,angka;
	int data[100];
	bool input=true;
	
	while(input==true){
		cin>>angka;
		if(angka>0){
			for(int i=1;angka>0;i++){
			data[i]=angka;
			}
		}else {
			break;
		}
		
	}
	cin>>x;
	cout<<data[x]<<endl;
	
	
}
