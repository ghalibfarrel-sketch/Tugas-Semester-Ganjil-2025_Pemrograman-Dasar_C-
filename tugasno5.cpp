/*Buatlah program C++ untuk membuat matriks piramida berikut ini, dengan memanfaatkan
array 2 dimensi :
       *
     * * *
   * * * * *
 * * * * * * * 
 */
#include<iostream>
using namespace std;
int main(){
    char array[4][13];
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            array[i][j]=' ';
        }
    }
    for(int i=0; i<4; i++){
        int JumalahStars=2*i+1;
        int kolom=12/2-i*2; //12 adalah indeks kolom, i adalah indeks baris
        for(int j=0; j<JumalahStars; j++){
            array[i][kolom+j*2]='*';
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<13; j++){
            cout<<array[i][j];
        }cout<<endl;
    } return 0;
}