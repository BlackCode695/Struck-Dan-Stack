#include <iostream>
#include <conio.h>
using namespace std;

int main(){
struct mahasiswa{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

mahasiswa Hafiz;

Hafiz.nim="c030324005";
Hafiz.nama="Hafiz";
Hafiz.alamat="jl Gunung sari";
Hafiz.ipk=3.5;

cout << Hafiz.nim<<"\n";
cout << Hafiz.nama<<"\n";
cout << Hafiz.alamat<<"\n";
cout << Hafiz.ipk<<"\n";
}