/*Buatlah program C++ untuk membuat deret angka berikut ini, dengan memanfaatkan array
1 dimensi : 3 2 1 0 -1 -2 -3*/
#include<iostream>
using namespace std;
int main(){
    int deret[]={3, 2, 1, 0, -1, -2, -3};
    int index;
    index=sizeof(deret)/sizeof(*deret);
    for(int i=0; i<index; i++){
        cout<<deret[i]<<" ";
    }
}