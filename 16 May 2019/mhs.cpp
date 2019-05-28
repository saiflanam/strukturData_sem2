#include<iostream>
using namespace std;

struct mhs{
    int nim;
    string nama;
    mhs *next;
};
struct awalMhs{
    mhs *head;
};

mhs data[12];
int buffer = 12;

int gettIndex(mhs m){
    return m.nim%buffer;
}

int getIndexKosong(int awal){
    while(data[awal].nim!=0){
        awal = (awal+1) % buffer;
    }
    return awal;
}

void penempatan(mhs m){
       int index = getIndex(m);
       enqueue(data[index], m);
}

//int search()

int main(){
    int n;
    mhs input;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> input.nim >> input.nama;
        penempatan(input);
    }

    show();
}
