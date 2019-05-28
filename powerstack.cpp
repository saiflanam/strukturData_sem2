#include<iostream>
using namespace std;

struct number
{
    int angka;
};

struct stackNumber
{
    number data[1000];
    int top;
};

void createStack(stackNumber &S)
{
    S.top = -1;
}

bool isEmpty(stackNumber S)
{
    if(S.top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(stackNumber &S, number n)
{
    S.top++;
    S.data[S.top] = n;
    cout << "[ ";
    for(int i=0; i<S.top; i++)
    {
        cout << S.data[i].angka <<endl;
    }
    cout << "]";
}

void pop(stackNumber &S, number &x)
{
    if(S.top =-1)
    {
        cout<<"ERROR: STACK KOSONG"<<endl;
    }
    else
    {
        x = S.data[S.top];
        S.top--;
        cout << "[ ";
        for(int i=0; i<S.top; i++)
        {
            cout<< S.data[i].angka <<endl;
        }
        cout << " ] \n";
    }
}

void powpush(stackNumber &S, number b, number n)
{
    for(int i=0; i<b.angka; i++)
    {
        S.top++;
        S.data[S.top] = n;
    }
    cout << "[ ";
    for(int i=0; i<S.top; i++)
    {
        cout << S.data[i].angka <<endl;
    }
    cout << " ] \n";
}

void powpop(stackNumber &S, number b, number &x)
{
    for(int i=0; i<b.angka; i++)
    {
        if(S.top =-1)
        {
            cout<<"ERROR: STACK KOSONG"<<endl;
        }
        else
        {
            x = S.data[S.top];
            S.top--;
            cout << "[ ";
            for(int i=0; i<S.top; i++)
            {
                cout<< S.data[i].angka <<endl;
            }
            cout << " ] \n";
        }
    }
}

int main()
{
    int n;
    number x,y,z;
    string command;
    stackNumber S1;
    createStack(S1);

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> command;
        if(command =="PUSH")
        {
            cin >> x.angka;
            push(S1,x);
        }
        else if(command=="POP")
        {
            pop(S1,z);
        }else if(command=="POWPUSH"){
            cin >> x.angka >> y.angka;
            powpush(S1,y,x);
        }else if(command=="POWPOP"){
            cin >> y.angka;
            powpop(S1,y,z);
        }
    }
}
