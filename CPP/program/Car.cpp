// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include "Vehicle.cpp"


// Deklarasi namespace
using namespace std;

class Car : public Vehicle{
private:
    string model;
    int jumlahKursi;
    int jumlahPintu;
    
public:
    // Constructor
    Car()
    {
    }
    
    // Constructor dengan parameter lengkap
    Car(string model, int jumlahKursi, int jumlahPintu, string platNomor, string nama, string merk, int tahunProduksi, string warna, string jenisTransmisi) : Vehicle(platNomor, nama, merk, tahunProduksi, warna, jenisTransmisi){
        this->model = model;
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }


    // Getter untuk mengambil nilai atribut model
    string getModel() {
        return model;
    }

    // Setter untuk mengatur nilai atribut model
    void setModel(string model) {
        this->model = model;
    }

    // Getter untuk mengambil nilai atribut jumlahPintu
    int getJumlahPintu() {
        return jumlahPintu;
    }

    // Setter untuk mengatur nilai atribut jumlahPintu
    void setJumlahPintu(int jumlahPintu) {
        this->jumlahPintu = jumlahPintu;
    }

    // Getter untuk mengambil nilai atribut jumlahKursi
    int getJumlahKursi() {
        return jumlahKursi;
    }

    // Setter untuk mengatur nilai atribut jumlahKursi
    void setJumlahKursi(int jumlahKursi) {
        this->jumlahKursi = jumlahKursi;
    }
    
    // Destructor
    ~Car()
    {
    }
};
