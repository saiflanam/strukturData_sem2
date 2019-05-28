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

int getCountNode(node *r){
    if(r==NULL){
        return 0;
    }else{
        return 1 + getCountNode(r->left) + getCountNode(r->right);
    }
}

int getHeight(node *r){
    if(r==NULL){
        return 0;
    }else{
        return 1 + max(getHeight(r->left), getHeight(r->right));
    }
}

int getSum(node *r){
    if(r==NULL){
        return 0;
    }else if(r->left==NULL&&r->right==NULL){
        return r->angka;
    }else{
        return r->angka+getSum(r->left)+getSum(r->right);
    }
}

int main(){
    tree t;
    int n, x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        insert(t.root, x);
    }

    cout << getCountNode(t.root) << endl;
    cout << getSum(t.root) << endl;
    cout << getHeight(t.root) << endl;


    return 0;
}

