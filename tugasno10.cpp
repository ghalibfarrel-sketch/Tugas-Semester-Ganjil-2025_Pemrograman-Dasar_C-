/*Ulangi nomor 9 tetapi struct diganti union*/
#include<iostream>
#include<cstring>

using namespace std;
union petugasPLN
{
    char nama[32];
    char alamat[32];
    int umur;
    float tinggiBadan;
    double riwayatIPK;
};

int main(){
    union petugasPLN petugas1;
    strcpy(petugas1.nama, "Budi");
    strcpy(petugas1.alamat, "Jogja");
    petugas1.umur=20;
    petugas1.tinggiBadan=175.5f;
    petugas1.riwayatIPK=3.35;

    cout<<"\nBeriku informasi seorang Petugas PlN\n";
    cout<<"Nama\t\t:"<<petugas1.nama<<endl;
    cout<<"Alamat\t\t:"<<petugas1.alamat<<endl;
    cout<<"Umur\t\t:"<<petugas1.umur<<endl;
    cout<<"Tinggi Badan\t:"<<petugas1.tinggiBadan<<endl;
    cout<<"Riwayat IPK\t:"<<petugas1.riwayatIPK<<endl;
    cout<<endl;
    cout<<"Berikut ukurannya\n";
    cout<<"Ukuran struct petugasPLN adalah\t\t"<<sizeof(petugasPLN)<<" byte\n";
    cout<<"Ukuran member nama adalah\t\t"<<sizeof(petugas1.nama)<<" byte\n";
    cout<<"Ukuran member alamat adalah\t\t"<<sizeof(petugas1.alamat)<<" byte\n";
    cout<<"Ukuran member umur adalah\t\t"<<sizeof(petugas1.umur)<<" byte\n";
    cout<<"Ukuran member tinggiBadan adalah\t"<<sizeof(petugas1.tinggiBadan)<<" byte\n";
    cout<<"Ukuran member riwayatIPK adalah\t\t"<<sizeof(petugas1.riwayatIPK)<<" byte\n";
}