// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    
    int data[5]={21,37,33,45,65};
    int cari,ditemukan =0;
    
    cout<<"data array"<<endl;
    for(int x : data){
        cout<<x<<" ";
    }
    
    cout<<"\nCari data";
    cin>>cari;
    
    for(int i=0 ;i<5 ; i++){
        if(data[i] == cari){
            ditemukan = 1;
            cout<<"Nilai yang dicari terdapat pada data ke"<<i+1;
            break;
        }
    }
    if(ditemukan == 0){
        cout<<"Nilai yang dicari tidak ditemukan";
    }

    return 0;
}
