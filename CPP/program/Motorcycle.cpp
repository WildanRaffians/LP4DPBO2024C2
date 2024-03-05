// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"


// Deklarasi namespace
using namespace std;


class Motorcycle : public Vehicle{
private:
    string jenisMotor;
    int kapasitasTangki;
    string tipeRem;
    
public:
    // Constructor
    Motorcycle()
    {
    }
    
    // Constructor dengan parameter lengkap
    Motorcycle(string jenisMotor, int kapasitasTangki, string tipeRem, string platNomor, string nama, string merk, int tahunProduksi, string warna, string jenisTransmisi) : Vehicle(platNomor, nama, merk, tahunProduksi, warna, jenisTransmisi){
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
        this->tipeRem = tipeRem;
    }


    // Getter untuk mengambil nilai atribut jenisMotor
    string getJenisMotor() {
        return jenisMotor;
    }

    // Setter untuk mengatur nilai atribut jenisMotor
    void setJenisMotor(string jenisMotor) {
        this->jenisMotor = jenisMotor;
    }

    // Getter untuk mengambil nilai atribut tipeRem
    string getTipeRem() {
        return tipeRem;
    }

    // Setter untuk mengatur nilai atribut tipeRem
    void setTipeRem(string tipeRem) {
        this->tipeRem = tipeRem;
    }

    // Getter untuk mengambil nilai atribut kapasitasTangki
    int getKapasitasTangki() {
        return kapasitasTangki;
    }

    // Setter untuk mengatur nilai atribut kapasitasTangki
    void setKapasitasTangki(int kapasitasTangki) {
        this->kapasitasTangki = kapasitasTangki;
    }
    
    // Destructor
    ~Motorcycle()
    {

    }
};
