#include<iostream>
using namespace std;

struct node{
    string name;
    int angka;
    node *left;
    node *right;
};

struct tree{
    node *root = NULL;
};

void insert(node *&r, string n, int b){
    if(r == NULL){
        node *baru = new node;
        baru->name   = n;
        baru->angka  = b;
        baru->left   = NULL;
        baru->right  = NULL;
        r = baru;
    }
    else{
        if(b < r->angka){
            insert(r->right, n, b);
        }else if(b > r->angka){
            insert(r->left, n, b);
        }else if(b == r->angka){
            insert(r->left, n, b);
        }
    }
}

void showInOrder(node *r){
    if(r!=NULL){
        showInOrder(r->left); //kiri
        cout << r->name << endl; //cetak
        showInOrder(r->right); //kanan
    }
}

int main(){
    tree t;
    int n,x;
    string nama;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> nama >> x;
        insert(t.root, nama, x);
    }
    showInOrder(t.root);

    return 0;
}
