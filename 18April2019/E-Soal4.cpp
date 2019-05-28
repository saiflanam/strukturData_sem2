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

bool search(node *r, int x){
    if(r==NULL){
        return false;
    }else if(r->angka == x){
        return true;
    }else{
        return(search(r->left,x) || search(r->right,x));
    }
}

//showInOrder showPostOrder getTinggi getSum getCountNode getCountLeaf

int main(){
    tree t;
    int n,x,nyari;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        insert(t.root, x);
    }
    cin >> nyari;
    if(search(t.root, nyari)==true){
        cout << "YA" << endl;
    }else{
        cout << "TIDAK" << endl;
    }


    return 0;
}

