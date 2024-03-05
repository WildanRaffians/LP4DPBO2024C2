// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Parking.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"


// Deklarasi namespace
using namespace std;


class Garage : public Parking{
private:
    string tipePintu;
    string pemilik;
    
public:
    // Constructor
    Garage()
    {
    }
    
    // Constructor dengan parameter lengkap
    Garage(string tipePintu, string pemilik, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil, vector<Motorcycle> motor) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, mobil, motor){
        this->tipePintu = tipePintu;
        this->pemilik = pemilik;
    }
    // Constructor dengan parameter lengkap
    Garage(string tipePintu, string pemilik, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, mobil){
        this->tipePintu = tipePintu;
        this->pemilik = pemilik;
    }
    // Constructor dengan parameter lengkap
    Garage(string tipePintu, string pemilik, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Motorcycle> motor) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, motor){
        this->tipePintu = tipePintu;
        this->pemilik = pemilik;
    }


    // Getter untuk mengambil nilai atribut tipePintu
    string getTipePintu() {
        return tipePintu;
    }

    // Setter untuk mengatur nilai atribut tipePintu
    void setTipePintu(string tipePintu) {
        this->tipePintu = tipePintu;
    }

    // Getter untuk mengambil nilai atribut pemilik
    string getPemilik() {
        return pemilik;
    }

    // Setter untuk mengatur nilai atribut pemilik
    void setPemilik(string pemilik) {
        this->pemilik = pemilik;
    }

    
    // Destructor
    ~Garage()
    {

    }
};
