/*Buatlah program menggunakan fungsi fungsi pemrosesan string pada library string C*/
#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
int main(){
    char password[]= "kopi1";
    char pass[6];
    char karakter;
    char karakterBaru;
    int a;
    cout<<"Selamat datang anggota membership kopi\n";
    cout<<"Hint password "<<strlen(password)<<" karakter"<<endl;
    cout<<"Masukkan password : ";
    cin>>pass;
    if(strcmp(password, pass)==0){  //karena pada cstring jika kondisi benar akan bernilai 0
        cout<<"Yey password benar\n";
        cout<<"Apakah mau ganti password? ketik 1=ya atau 0=tidak\n";
        cin>>a;

        if(a==1){
            cout<<"Karakter apa yang ingin Anda ganti? ";
            cin>>karakter;
            char *lokasi = strchr(password, karakter);
            cin.get(); 
            
            if (lokasi != NULL) { // Jika karakter ditemukan
                cout<<"Karakter baru untuk mengganti '"<<karakter<<"' adalah? ";
                cin>>karakterBaru;
                *lokasi=karakterBaru;//karakter lama diganti karakter baru
                cout<<"Password berhasil diubah!\n";
                cout<<"Password baru Anda adalah: "<<password<<endl;
                cin.get(); 
            } else {
                cout<<"Karakter '"<<karakter<<"' tidak ditemukan dalam password."<<endl;
            }
            cout << "\n\nTekan ENTER untuk keluar.";

        }else if(a==0){
            cout<<"Selamat menikmati";
        }else{
            cout<<"Data tidak valid";
        }

    }else{
        cout<<"password salah";
    }
    cin.get();
}