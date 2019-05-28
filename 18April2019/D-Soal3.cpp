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

void showPreOrder(node *r){
    if(r!=NULL){
        cout << r->angka << endl; //cetak
        showPreOrder(r->left); //kiri
        showPreOrder(r->right); //kanan
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
    showPreOrder(t.root);


    return 0;
}

