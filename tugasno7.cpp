/*Buatlah program menggunakan fungsi fungsi pemrosesan string pada library string C++*/
//mini Word
#include<iostream>
#include<string>
#include<limits>
using namespace std;
int main(){
    string kalimat;
    cout<<"Masukkan kalimat Anda : ";
    getline(cin, kalimat);

    cout<<"Informasi kalimat Anda : \n";
    int jumlah_karakter=kalimat.length(); //dekalrasi untuk karakter
    int jumlah_kata=1; //deklarasi untuk kata
    //informasi karakter
    for(int i=0; i<jumlah_karakter; i++){
        if(kalimat[i]==' '){
            jumlah_kata++;
        }
    }cout<<"Jumlah kata yang Anda masukkan adalah "<<jumlah_kata<<endl;
    //informasi kata
    cout<<"Jumalah kata yang Anda input adalah "<<jumlah_karakter<<endl;
    cout<<endl;

    cout<<"Apakah Anda ingin mengubah suatu kata/frasa? (ketik 1=ya atau 0=tidak)"<<endl;
    int a;
    cin>>a;
    if(a==1){
        cin.get();//penghilang buffer karena hanya bisa sampai percabangan tingkat pertama
        string kata;
        cout<<"Masukkan kata/frasa yang ingin diubah : ";
        getline(cin, kata);
        int jml_karakter=kata.length();
        int indeks_kataUbah=kalimat.find(kata);
        string pengubah;
        if(indeks_kataUbah>-1){
            cout<<"Masukkan output kata/frasa yang diinginkan : ";
            getline(cin, pengubah);
            kalimat.replace(indeks_kataUbah, jumlah_kata, pengubah);
            cout<<"Kalimat menjadi\n"<<kalimat;    
        }else{
            cout<<"Kata/frasa tidak tersedia";
        }
    }else if(a==0){
        cout<<"=====Terimakasih telah menggunakan layanan Mini Word=====";
    }else{
        cout<<"Data tidak valid";
    } 
    cout<<endl;
    cout<<"\n=====Terimakasih telah menggunakan layanan Mini Word=====";

    cin.get();
    return 0;
}