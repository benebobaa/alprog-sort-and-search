#include <iostream>
using namespace std;

int main(){
    int target;
    int data[10]= {11,22,33,44,55,66,77,88,99,100};
    int low, mid, high, ditemukan = 0;
    
    cout<<"Data Array\n";
    for(int x : data){
        cout<<x<<" ";
    }
    
    cout<<"Masukkan Angka yang Ingin dicari: ";
    cin>> target;
    
    low = 0;
    high = 9;
    while(low<=high){
        mid = (low+high)/2;
        if(target == data[mid]){
            ditemukan = 1;
            cout<<"Nilai yang dicari terdapat pada data ke "<<mid+1;
            break;
        }else if(target>data[mid]){
            low=mid+1;
        }else if(target<data[mid]){
            high=mid-1;
        }
    }
    if(ditemukan == 0){
        cout<<"Nilai yang dicari tidak ditemukan ";
    }
}
