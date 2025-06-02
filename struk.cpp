#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main(int argc, char const *argv[])
{
    Mahasiswa hafiz;
    hafiz.nim = "C030324005";
    hafiz.nama = "Hafiz";
    hafiz.alamat = "Jl.Gunung sari";
    hafiz.ipk = 3,5;
    Mahasiswa Hafiz;
    Mahasiswa *ptrHafiz = &Hafiz;

    cout << "Nama: " << hafiz.nama << endl;
    cout << "Alamat: " << hafiz.alamat << endl;
    cout << "NIM: " << hafiz.nim << endl;
    cout << "IPK: " << hafiz.ipk << endl;

    cout << "Masukkan NIM: ";
    cin >> ptrHafiz->nim;
    system("cls");

    cout << "Masukkan Nama: ";
    cin >> ptrHafiz->nama;
    system("cls");

    cout << "Masukkan Alamat: ";
    cin >> ptrHafiz->alamat;
    system("cls");

    cout << "Masukkan ipk: ";
    cin >> ptrHafiz->ipk;
    system("cls");

    cout << "NIM: " << ptrHafiz->nim << endl;
    cout << "Nama: " << ptrHafiz->nama << endl;
    cout << "Alamat: " << ptrHafiz->alamat << endl;
    cout << "IPK: " << ptrHafiz->ipk << endl;
    return 0;
}