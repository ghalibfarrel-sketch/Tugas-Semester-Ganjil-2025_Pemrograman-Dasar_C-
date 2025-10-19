#include <iostream>
using namespace std;

int main(){
    int array[]={3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    for(int i=0; i<sizeof(array)/sizeof(*array); i++){
        cout<<array[i]<<" ";
    }
}

/*int main(){
    int angka;
    int baris[angka];
    cout<<"masukkan angka";
    cin>>angka;
    for(int i=3; i<=angka; i++){
        if(i%2==1){
            cout<<baris[i]<<" ";
        }
    }

}*/