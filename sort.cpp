#include <iostream>
using namespace std;

int main(){
    int data[10], i ,j,tmp;
    cout<<"Program mengurutkan angka kecil ke besar"<<endl;
    for(i =0 ; i<10 ; i++){
        cout<<"Masukkan Angka ke "<<(i+1)<<" :";
        cin>>data[i];
    }
    cout<<"Data sebelum diurutkan : "<<endl;
    for(int x: data){
        cout<<x<<" ";
    }
    
    for(i = 0; i<9; i++){
        for(j= i+1; j<10; j++){
            if(data[i]>data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    cout<<"\nData setelah diurutkan "<<endl;
    for(int x : data){
        cout<<x<<" ";
    }
}
