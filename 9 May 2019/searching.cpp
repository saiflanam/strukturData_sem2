#include<iostream>
using namespace std;

int n;
int arr[100];

bool isLinearSearching(int x){
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            return true;
        }
    }
    return false;
}

int getIndexLinearSearching(int x){
    for(int i=0;i<n;i++){
        if(x == arr[i]){
            return i;
        }
    }
    return -1;
}

void insertionSort(){
    for(int i=0;i<n;i++){
        int key=arr[i], j = i -1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int getIndexBinarySearch(int x){
    int awal = 0;
    int akhir = n;
    int mid;

    while(awal <= akhir){
        mid = (awal+akhir)/2;
        if(arr[mid] == x){
            return mid;
        }else if(arr[mid] < x){
            awal = mid + 1;
        }else if(arr[mid] > x){
            akhir = mid - 1;
        }
    }
}

int getIndexBinarySearch(int awal, int akhir, int cari){
    if(awal <= akhir){
        int mid = (awal+akhir) / 2;
        if(arr[mid]==cari) return mid;
        else if(arr[mid]<cari){
            awal = mid+1;
            return getIndexBinarySearch(awal, akhir, cari);
        }else if(arr[mid]>cari){
            akhir = mid-1;
            return getIndexBinarySearch(awal, akhir, cari);
        }
    }

    else if(awal > akhir){
        return -1;
    }
}
int binarySearch(int l, int r, int x){
    if(r>=1){
        int mid = 1+(r-1)/2;
    }
}


int main(){
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int x;
    cin >> x;
    //cout << isLinearSearching(x) << endl;
    //cout << getIndexLinearSearching(x) << endl;
    insertionSort();
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << getIndexBinarySearch(x) << endl;
    return 0;
}
