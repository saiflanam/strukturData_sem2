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
        cout << r->angka; //cetak
        showPreOrder(r->left); //kiri
        showPreOrder(r->right); //kanan
    }
}

void showInOrder(node *r){
    if(r!=NULL){
        showInOrder(r->left); //kiri
        cout << r->angka << endl; //cetak
        showInOrder(r->right); //kanan
    }
}

void showPostOrder(node *r){
    if(r!=NULL){
        showPostOrder(r->left); //kiri
        showPostOrder(r->right); //kanan
        cout << r->angka << endl; //cetak
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

int getCountEven(node *r){
    if(r==NULL){
        return 0;
    }else{
        if(r->angka%2==0){
            return 1 + getCountEven(r->left) + getCountEven(r->right);
        }else{
            return getCountEven(r->left) + getCountEven(r->right);
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

int getCountLeaf(node *r){
    if(r==NULL){
        return 0;
    }else if(r->left==NULL&&r->right==NULL){
        return 1;
    }else{
        return getCountLeaf(r->left) + getCountLeaf(r->right);
    }
}

//getSum

int main(){
    tree t;
    insert(t.root, 8);
    insert(t.root, 4);
    insert(t.root, 5);
    cout << getCountNode(t.root);


    return 0;
}
