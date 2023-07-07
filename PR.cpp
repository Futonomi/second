#include <iostream>
using namespace std;

int hitungV(int jari,int tinggi,int phi);
int hitungLP(int jari,int tinggi,int phi);
   int main() {

    int jari = 7;
    int tinggi = 10;
    float phi= 3.14;

    cout<<"Jari Jari "<<jari<<endl;
    cout<<"Tinggi "<<tinggi<<endl;
    cout<<"Phi "<<phi<<endl;

    int volume = hitungV(jari,tinggi,phi);
    cout<<"Volume "<<volume<<endl;

    int LuasPermukaan = hitungLP(jari,tinggi,phi);
    cout<<"Luas Permukaan "<<LuasPermukaan<<endl;
   } 

   int hitungV(int jari,int tinggi,int phi){
    float hitungV = (phi * jari * jari * tinggi);
    return hitungV;
   }

   int hitungLP(int jari,int tinggi,int phi){
    float hitungLP = (2 * phi * jari * (jari * tinggi));
    return hitungLP;
   }