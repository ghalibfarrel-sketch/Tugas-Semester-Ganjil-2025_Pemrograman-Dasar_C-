/*Buatlah program C++ untuk membuat deret angka berikut ini, dengan memanfaatkan array
1 dimensi :
3 5 7 9 11 13 15 17 19 21 23
*/
#include <iostream>
using namespace std;

int main(){
    int array[]={3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    for(int i=0; i<sizeof(array)/sizeof(*array); i++){
        cout<<array[i]<<" ";
    }
}
