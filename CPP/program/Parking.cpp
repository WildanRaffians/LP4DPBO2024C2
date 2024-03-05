// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan
#include <iostream>
#include <string>
#include <vector>
#include "Motorcycle.cpp"
#include "Car.cpp"


// Deklarasi namespace
using namespace std;


class Parking {
private:
    string nama;
    int kapasitas;
    int luas;
    int jumlahKendaraanSaatIni;
    vector<Motorcycle> listMotor;
    vector<Car> listMobil;

public:
    // Constructor
    Parking()
    {
    }
    
    // Constructor dengan parameter lengkap
    Parking(string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni) {
        this->nama = nama;
        this->kapasitas = kapasitas;
        this->luas = luas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
        this->listMotor = {};
        this->listMobil = {};
    }
    
    Parking(string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil) {
        this->nama = nama;
        this->kapasitas = kapasitas;
        this->luas = luas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
        this->listMotor = {};
        listMobil = mobil;
    }
    Parking(string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Motorcycle> motor) {
        this->nama = nama;
        this->kapasitas = kapasitas;
        this->luas = luas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
        listMotor = motor;
        this->listMobil = {};
    }
    Parking(string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil, vector<Motorcycle> motor) {
        this->nama = nama;
        this->kapasitas = kapasitas;
        this->luas = luas;
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
        listMotor = motor;
        listMobil = mobil;
    }


    // Getter untuk mengambil nilai atribut nama
    string getNama() {
        return nama;
    }

    // Setter untuk mengatur nilai atribut nama
    void setNama(string nama) {
        this->nama = nama;
    }

    // Getter untuk mengambil nilai atribut kapasitas
    int getKapasitas() {
        return kapasitas;
    }

    // Setter untuk mengatur nilai atribut kapasitas
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Getter untuk mengambil nilai atribut luas
    int getLuas() {
        return luas;
    }

    // Setter untuk mengatur nilai atribut luas
    void setLuas(int luas) {
        this->luas = luas;
    }

    // Getter untuk mengambil nilai atribut jumlahKendaraanSaatIni
    int getJumlahKendaraanSaatIni() {
        return jumlahKendaraanSaatIni;
    }

    // Setter untuk mengatur nilai atribut jumlahKendaraanSaatIni
    void setJumlahKendaraanSaatIni(int jumlahKendaraanSaatIni) {
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }

    void setListMotor(vector<Motorcycle> motor)
    {
        listMotor = motor;
    }

    // Getter untuk vektor Motor
    vector<Motorcycle> getListMotor() { 
        return listMotor; 
    }

    void setListMobil(vector<Car> mobil)
    {
        listMobil = mobil;
    }
    
    // Getter untuk vektor Mobil
    vector<Car> getListMobil() { 
        return listMobil; 
    }

    // Destructor
    ~Parking()
    {
    }
};
