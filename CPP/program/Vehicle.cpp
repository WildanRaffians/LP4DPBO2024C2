// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>


// Deklarasi namespace
using namespace std;


class Vehicle {
private:
    string platNomor;
    string nama;
    string merk;
    int tahunProduksi;
    string warna;
    string jenisTransmisi;
public:
    // Constructor
    Vehicle()
    {
    }
    
    // Constructor dengan parameter lengkap
    Vehicle(string platNomor, string nama, string merk, int tahunProduksi, string warna, string jenisTransmisi) {
        this->platNomor = platNomor;
        this->nama = nama;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
        this->jenisTransmisi = jenisTransmisi;
    }


    // Getter untuk mengambil nilai atribut platNomor
    string getPlatNomor() {
        return platNomor;
    }

    // Setter untuk mengatur nilai atribut platNomor
    void setPlatNomor(string platNomor) {
        this->platNomor = platNomor;
    }
    
    string getNama() {
        return nama;
    }

    // Setter untuk mengatur nilai atribut nama
    void setNama(string nama) {
        this->nama = nama;
    }

    // Getter untuk mengambil nilai atribut merk
    string getMerk() {
        return merk;
    }

    // Setter untuk mengatur nilai atribut merk
    void setMerk(string merk) {
        this->merk = merk;
    }

    // Getter untuk mengambil nilai atribut tahunProduksi
    int getTahunProduksi() {
        return tahunProduksi;
    }

    // Setter untuk mengatur nilai atribut tahunProduksi
    void setTahunProduksi(int tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    // Getter untuk mengambil nilai atribut warna
    string getWarna() {
        return warna;
    }

    // Setter untuk mengatur nilai atribut warna
    void setWarna(string warna) {
        this->warna = warna;
    }
    
    string getJenisTransmisi() {
        return jenisTransmisi;
    }

    // Setter untuk mengatur nilai atribut jenisTransmisi
    void setJenisTransmisi(string jenisTransmisi) {
        this->jenisTransmisi = jenisTransmisi;
    }

    // Destructor
    ~Vehicle()
    {


    }
};
