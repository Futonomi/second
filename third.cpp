#include <iostream>
using namespace std;

int hitungvolume(int panjang,int lebar,int tinggi);
int hitungluaspermukaan (int panjang,int lebar,int tinggi);
int main() {

    int panjang = 10;
    int lebar = 10;
    int tinggi = 10;

    cout<<"panjang "<<panjang<<endl;
    cout<<"lebar "<<lebar<<endl;
    cout<<"tinggi "<<tinggi<<endl;

    int volume = hitungvolume(panjang,lebar,tinggi);
    cout<<"volumenya adalah "<<volume<<endl;
    
    int luaspermukaan = hitungluaspermukaan(panjang,lebar,tinggi);
    cout<<"luas permukaan adalah "<<luaspermukaan<<endl;
    return 0;//?
}
int hitungluaspermukaan (int panjang,int lebar,int tinggi){
    int hitungluaspermukaan = 2 * ((panjang*lebar)+(panjang*tinggi)+(lebar*tinggi));
    return hitungluaspermukaan ;
}


int hitungvolume(int panjang,int lebar,int tinggi){
    int hitungvolume = (panjang*lebar*tinggi);
    return hitungvolume ;
}
// hasil namafunction(isi perintah){
//     yang dilakukan function
// }

// tipedata namavariabel = isivariabel

//Tipe Data
//int, char, double, bool, float
// int -> Bilangan Bulat 
//float -> Bilangan Desimal