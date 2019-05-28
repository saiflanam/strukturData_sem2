#include<iostream>
using namespace std;

int buffer=12;
int data[12];
int count =0;


int getIndex(int id){
    return id % buffer;
}

int getIndexKosong(int awal){
    while(data[awal]!=0){
        awal = (awal+1) % buffer;
        /*awal++
          if(awal==buffer) awal=0;*/
    }
    return awal;
}

void penempatan(int id){
    if(count < buffer){
        int index = getIndex(id);
    }
        if(data[index]==0){
            data[index] = id;
            count++;
        }else{
            index = getIndexKosong(index);
            data[index] = id;
            count++;
        }

}


void show(){
    for(int i=0;i<buffer;i++){
        cout << i << " " << data[i] << endl;
    }
}

int main(){
    int n,input;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        penempatan(input);
    }
    show();
}
