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


/*
    Kelas ParkingLot yang digunakan untuk merepresentasikan data ParkingLot, ParkingLot merupakan kelas induk dari kelas SivitasAkademik dan buyut dari kelas Mahasiswa dan Dosen
*/
class ParkingLot : public Parking{
private:
    // Atribut yang digunakan pada kelas ParkingLot terdiri dari nik, nama, dan jenis kelamin. Karena pada dasarnya setiap manusia dibedakan berdasarkan 3 identitas tersebut.
    string lokasi;
    string tipe;
    string jamOperasi;
    
public:
    // Constructor
    ParkingLot()
    {
    }
    
    // Constructor dengan parameter lengkap
    ParkingLot(string lokasi, string tipe, string jamOperasi, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil, vector<Motorcycle> motor) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, mobil, motor){
        this->lokasi = lokasi;
        this->tipe = tipe;
        this->jamOperasi = jamOperasi;
    }
    // Constructor dengan parameter lengkap
    ParkingLot(string lokasi, string tipe, string jamOperasi, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Car> mobil) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, mobil){
        this->lokasi = lokasi;
        this->tipe = tipe;
        this->jamOperasi = jamOperasi;
    }
    // Constructor dengan parameter lengkap
    ParkingLot(string lokasi, string tipe, string jamOperasi, string nama, int kapasitas, int luas, int jumlahKendaraanSaatIni, vector<Motorcycle> motor) : Parking(nama, kapasitas, luas, jumlahKendaraanSaatIni, motor){
        this->lokasi = lokasi;
        this->tipe = tipe;
        this->jamOperasi = jamOperasi;
    }


    // Getter untuk mengambil nilai atribut lokasi
    string getLokasi() {
        return lokasi;
    }

    // Setter untuk mengatur nilai atribut lokasi
    void setLokasi(string lokasi) {
        this->lokasi = lokasi;
    }

    // Getter untuk mengambil nilai atribut tipe
    string getTipe() {
        return tipe;
    }

    // Setter untuk mengatur nilai atribut tipe
    void setTipe(string tipe) {
        this->tipe = tipe;
    }
    
    string getJamOperasi() {
        return jamOperasi;
    }

    // Setter untuk mengatur nilai atribut jamOperasi
    void setJamOperasi(string jamOperasi) {
        this->jamOperasi = jamOperasi;
    }

    
    // Destructor
    ~ParkingLot()
    {

    }
};
