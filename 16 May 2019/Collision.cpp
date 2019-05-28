#include<iostream>
using namespace std;

int buffer=12;
int data[12];
int countCollision = 0;


int getIndex(int id){
    return id % buffer;
}

void penempatan(int id){
    int index = getIndex(id);
    if(data[index]==0){
        data[index] = id;
    }else{
        countCollision++;
        while(data[index]!=0){
            index++;
        }
        data[index] = id;
    }

}

void show(){
    for(int i=0;i<buffer;i++){
        cout << i << " " << data[i] << endl;
    }
}

int main(){
    int n, input;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        penempatan(input);
    }

    cout << countCollision << endl;
    show();
}
