#include <iostream>
using namespace std;

void hitungLuasPermukaan(int panjang, int lebar, int tinggi);//atas bawah sama
void hitungVolume(int panjang, int lebar, int tinggi);//atas bawah sama

int main() {
    int panjang = 40;//untuk angja kedua hitungan
    int lebar = 30;//untuk angja kedua hitungan
    int tinggi = 40;//untuk angja kedua hitungan

    // hitungLuasPermukaan(panjang, lebar, tinggi);//atas bawah sama
    // hitungVolume(panjang, lebar, tinggi);//atas bawah sama
    databalok(panjang, lebar, tinggi)

    return 0;//?
}
void databalok(int panjang,int lebar,int tinggi){
    hitungLuasPermukaan(int panjang, int lebar, int tinggi)
}




//Hasil:

//Panjang: 80
//Lebar: 40
//Tinggi: 20
//volume: 80000
//luas permukaan; 10000



void hitungLuasPermukaan(int panjang, int lebar, int tinggi) {//luas permukaan
    int luaspermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    cout<<luaspermukaan<<endl;
}

void hitungVolume(int panjang, int lebar, int tinggi) {//volume
    int volume = panjang * lebar * tinggi;
    cout<<volume<<endl;
}
 

//int, char, double, bool, float
// int -> Bilangan Bulat 
//float -> Bilangan Desimal
//087883067863