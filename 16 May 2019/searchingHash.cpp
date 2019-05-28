#include<iostream>
using namespace std;

int buffer=12;
int data[12];
int count = 0;
int cek = 0, col = 0;
int getIndex(int id){
    return id % buffer;
}

int getIndexKosong(int awal){
    while(data[awal]!=0){
        awal = (awal+1) % buffer;
        /*awal++
          if(awal==buffer) awal=0;*/
        col++;
    }
    return awal;
}

void penempatan(int id){
    if(count < buffer){
        int index = getIndex(id);
            if(data[index]==0){
                data[index] = id;
                count++;
            }else{
                index = getIndexKosong(index);
                data[index] = id;
                count++;
            }
    }
}

void show(){
    for(int i=0;i<buffer;i++){
        cout << i << " " << data[i] << endl;
    }
}

int search(int idx){
    int a, index = getIndex(idx);
    if(data[index]==idx){cek++; return index;}
    else{
        if(index==0) a = buffer -1;
        else{
            a = index-1;
        }
        while(data[index]!=idx){
            cek++;
            index++;
            if(index==buffer) index = 0;
        }
        if(data[index]==idx){
            return index;
        }else{
            return -1;
        }
    }

}
int main(){
    int n, input, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input;
        penempatan(input);
    }
    cin >> x;
    search(x);

    cout << cek << endl;
}

