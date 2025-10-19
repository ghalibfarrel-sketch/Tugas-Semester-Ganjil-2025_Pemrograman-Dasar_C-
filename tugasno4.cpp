/*Buatlah program C++ untuk mencetak perubahan posisi benda persatuan waktu (misal per 3
detik) dari atas tanah, benda dilempar ke atas lalu jatuh ke tanah. Hasil cetakannya terdiri
dari tiga kolom : iterasi, waktu, posisi benda*/
#include<iostream>
using namespace std;
int main(){
    double jarak0, jarak1;//jarak0=jarak sebelumnya, jarak1=benda pada waktu tertentu
    double kecepatan0, kecepatan1;//kecepatan0=kecepatan awal benda saat dilempar, kecepatan1=kecepatan pada waktu tertentu
    cout<<"masukkan kecepatan awal: ";
    cin>>kecepatan0;
    const double percepatan=9.8;
    double waktu=0;
    int iterasi=0;
    cout<<"masukkan ketinggian awal: ";
    cin>>jarak0;
    cout<<"iterasi\twaktu(s)\tjarak(m)"<<endl; 
    if(jarak0==0){
        cout<<iterasi<<"\t"<<waktu<<"\t\t"<<jarak0<<"\n";
        iterasi++;
        waktu+=2;
    }
    do{
        jarak1=jarak0+kecepatan0*waktu-0.5*percepatan*waktu*waktu;
        if(jarak1<=0){
            jarak1=0;
        }
        cout<<iterasi<<"\t"<<waktu<<"\t\t"<<jarak1<<"\n";
        waktu+=2;
        iterasi++;
        

    }while(jarak1>0);
    return 0;
}