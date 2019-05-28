#include<iostream>
using namespace std;

struct node{
    int angka;
    node *left;
    node *right;
};

struct tree{
    node *root = NULL;
};

void insert(node *&r, int b){
    if(r == NULL){
        node *baru = new node;
        baru->angka  = b;
        baru->left   = NULL;
        baru->right  = NULL;
        r = baru;
    }
    else{
        if(b < r->angka){
            insert(r->left, b);
        }else if(b > r->angka){
            insert(r->right, b);
        }
    }
}

void showInOrder(node *r){
    if(r!=NULL){
        showInOrder(r->left); //kiri
        cout << r->angka << endl; //cetak
        showInOrder(r->right); //kanan
    }
}

int main(){
    tree t;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        insert(t.root, x);
    }
    showInOrder(t.root);


    return 0;
}


