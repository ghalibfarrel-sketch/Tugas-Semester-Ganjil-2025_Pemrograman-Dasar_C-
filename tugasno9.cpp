    /*Buatlah program menggunakan tipe data struct yang memiliki 4 member bertipe data
berbeda-beda, yang terdiri dari deklarasi struct, mengisi 5 data, menampilkan 5 data
tersebut, serta mencetak ukuran struct dan ukuran masing-masing data membernya.*/
#include<iostream>
#include<string>
using namespace std;
struct PetugasPLN
{
    string nama;
    string alamat;
    int umur;
    float tinggiBadan;
    double riwayatIPK;
};

int main(){
    PetugasPLN petugas1;
    petugas1.nama="Budi";
    petugas1.alamat="Jogja";
    petugas1.umur=20;
    petugas1.tinggiBadan=175.5;
    petugas1.riwayatIPK=3.35;

    cout<<"\nBeriku informasi seorang Petugas PlN\n";
    cout<<"Nama\t\t:"<<petugas1.nama<<endl;
    cout<<"Alamat\t\t:"<<petugas1.alamat<<endl;
    cout<<"Umur\t\t:"<<petugas1.umur<<endl;
    cout<<"Tinggi Badan\t:"<<petugas1.tinggiBadan<<endl;
    cout<<"Riwayat IPK\t:"<<petugas1.riwayatIPK<<endl;
    cout<<endl;
    cout<<"Berikut ukurannya\n";
    cout<<"Ukuran struct petugasPLN adalah\t\t"<<sizeof(PetugasPLN)<<" byte\n";
    cout<<"Ukuran member nama adalah\t\t"<<sizeof(petugas1.nama)<<" byte\n";
    cout<<"Ukuran member alamat adalah\t\t"<<sizeof(petugas1.alamat)<<" byte\n";
    cout<<"Ukuran member umur adalah\t\t"<<sizeof(petugas1.umur)<<" byte\n";
    cout<<"Ukuran member tinggiBadan adalah\t"<<sizeof(petugas1.tinggiBadan)<<" byte\n";
    cout<<"Ukuran member riwayatIPK adalah\t\t"<<sizeof(petugas1.riwayatIPK)<<" byte\n";
}