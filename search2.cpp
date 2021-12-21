// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Hello world!\n";
    
    int data[10]={21,37,33,45,65,21,23,45,21,23};
    int cari,ditemukan = 0, hasilcari[10];
    
    cout<<"data array"<<endl;
    for(int x : data){
        cout<<x<<" ";
    }
    
    cout<<"\nCari data";
    cin>>cari;
    
    for(int i=0 ;i<10 ; i++){
        if(data[i] == cari){
            ditemukan++;
            hasilcari[ditemukan] = i;
        }
    }
    if(ditemukan == 0){
        cout<<"Nilai yang dicari tidak ditemukan";
    }else{
        cout<<"Nilai yang dicari terdapat pada data ke "<<endl;
        for(int i = 1; i<=ditemukan; i++){
            cout<<hasilcari[i]+1<<" ";
        }
    }

    return 0;
}
