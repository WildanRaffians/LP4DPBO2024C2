/* 
    Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
*/

// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Motorcycle.cpp"
#include "Car.cpp"
#include "Parking.cpp"
#include "Garage.cpp"
#include "ParkingLot.cpp"
#include "Tabel.cpp"




// Deklarasi namespace
using namespace std;


// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    //vector motor
    vector<Motorcycle> listMotor1;
    vector<Motorcycle> listMotor2;
    vector<Motorcycle> listMotor3;

    //vector mobil
    vector<Car> listMobil1;
    vector<Car> listMobil2;
    vector<Car> listMobil3;

    //vector parkiran
    vector<ParkingLot> listParkiran;

    //objek motor
    Motorcycle mtr1("Motor Skuter", 6, "CBS", "T 1234 CC", "Xario", "Honda", 2020, "Merah", "Auto");
    Motorcycle mtr2("Motor Sport", 17, "CBS", "T 2048 OO", "YZF-R6", "Yamaha", 2022, "Biru", "Manual");
    Motorcycle mtr3("Motor Cruiser", 22, "ABS", "T 9988 GG", "Softail Deluxe", "Harley-Davidson", 2023, "Hitam", "Manual");
    Motorcycle mtr4("Motor Skuter", 6, "ABS", "D 2334 CC", "Wio", "Yamaha", 2021, "Hijau", "Auto");
    Motorcycle mtr5("Motor Bebek", 5, "ABS", "B 7678 OP", "Supra Z", "Honda", 2024, "Putih", "Manual");
    Motorcycle mtr6("Motor Skuter", 5, "CBS", "B 8543 OS", "Primavera", "Vespa", 2023, "Putih", "Auto");
    Motorcycle mtr7("Motor Bebek", 6, "ABS", "D 8522 JJ", "Smash 115", "Suzuki", 2023, "Biru", "Manual");
    Motorcycle mtr8("Motor Trail", 10, "CBS", "T 7122 JJ", "KLX 151", "Kawasaki", 2023, "Kuning", "Manual");
    Motorcycle mtr9("Motor Sport", 16, "CBS", "B 6312 KJ", "GSX-R1001", "Suzuki", 2023, "Hitam", "Manual");
    Motorcycle mtr10("Motor Skuter", 7, "ABS", "D 5422 KJ", "Nmax", "Yamaha", 2023, "Ungu", "Auto");

    //vector objek motor di garasi
    listMotor1.push_back(mtr1);
    listMotor1.push_back(mtr2);
    listMotor1.push_back(mtr3);
    
    //vector objek motor di parkiran 1
    listMotor2.push_back(mtr5);
    listMotor2.push_back(mtr7);
    listMotor2.push_back(mtr8);
    listMotor2.push_back(mtr9);

    //vector objek motor di parkiran 2
    listMotor3.push_back(mtr4);
    listMotor3.push_back(mtr6);
    listMotor3.push_back(mtr10);

    //objek mobil
    Car mbl1("Mobil MPV", 7, 5, "T 4655 GC", "Avanza", "Toyota", 2020, "Silver", "Manual");
    Car mbl2("Mobil MPV", 7, 5, "T 9876 OO", "Alphard", "Toyota", 2023, "Hitam", "Auto");
    Car mbl3("Mobil Sedan", 5, 4, "T 6548 GG", "E-Class", "Mercedez-Benz", 2024, "Silver", "Auto");
    Car mbl4("Mobil Coupe", 4, 2, "D 4611 CC", "4 Series Coupe", "BMW", 2024, "Coklat", "Auto");
    Car mbl5("Mobil SUV", 7, 5, "B 5468 OP", "Fortuner", "Toyota", 2024, "Putih", "Manual");
    Car mbl6("Mobil SUV", 5, 5, "B 4453 OS", "CR-V", "Honda", 2023, "Hitam", "Auto");
    Car mbl7("Mobil Truk", 3, 2, "D 1233 JJ", "F-150", "Ford", 2021, "Merah", "Manual");
    Car mbl8("Mobil Van", 8, 4, "T 5464 JJ", "Caravelle", "Volkswagen", 2023, "Abu-Abu", "Auto");
    Car mbl9("Mobil Sedan", 5, 4, "B 6543 KJ", "3 Series", "BMW", 2024, "Hitam", "Auto");
    Car mbl10("Mobil MPV", 7, 5, "D 4685 KJ", "Innova", "Toyota", 2023, "Silver", "Auto");

    //vektor objek mobil di garasi
    listMobil1.push_back(mbl4);
    listMobil1.push_back(mbl8);
    listMobil1.push_back(mbl9);
    
    //vektor objek mobil di parkiran 1
    listMobil2.push_back(mbl1);
    listMobil2.push_back(mbl2);
    listMobil2.push_back(mbl5);
    listMobil2.push_back(mbl10);

    //vektor objek mobil di parkiran 2
    listMobil3.push_back(mbl3);
    listMobil3.push_back(mbl6);
    listMobil3.push_back(mbl7);

    //garasiku
    int jmlKendaraan = listMobil1.size()+listMotor1.size();
    Garage garasiku("Pintu Lipat", "Wildan Raffians", "GarasiKoleksi", 8, 90, jmlKendaraan, listMobil1, listMotor1);

    //parkiran 1 dan 2
    jmlKendaraan = listMobil2.size()+listMotor3.size();
    ParkingLot parkiran1("Geger Kalong", "Terbuka", "07.00 - 21.00", "Parkiran Gerlong Amanah", 80, 900, jmlKendaraan, listMobil2, listMotor3);
    jmlKendaraan = listMobil3.size()+listMotor2.size();
    ParkingLot parkiran2("Cempaka", "tertutup", "06.00 - 22.00", "Parkiran Cempaka Utara", 50, 600, jmlKendaraan, listMobil3, listMotor2);

    listParkiran.push_back(parkiran1);
    listParkiran.push_back(parkiran2);

    //minta masukan
    cout << "[==================================]" << endl;
    cout << "[ HAI!                             ]" << endl;
    cout << "[ Ada yang bisa dibantu Hari ini?  ]" << endl;
    cout << "[==================================]" << endl;
    cout << "\n" << endl;
    cout << "1. Lihat Kendaraan di Garasiku." << endl;
    cout << "2. Lihat Ada Parkiran apa saja." << endl;

    int menu = 0;
    cout << "\n> ";
    cin >> menu;

    if(menu == 1){
        //informasi garasi
        string isiTabel0[2][6];
        isiTabel0[0][0] = garasiku.getNama();
        isiTabel0[0][1] = garasiku.getPemilik();
        isiTabel0[0][2] = garasiku.getTipePintu();
        isiTabel0[0][3] = to_string(garasiku.getKapasitas());
        isiTabel0[0][4] = to_string(garasiku.getLuas());
        isiTabel0[0][5] = to_string(garasiku.getJumlahKendaraanSaatIni());
        

        //siapkan header
        string head0[] = {"Nama Garasi", "Pemilik", "Tipe Pintu", "Kapasitas", "Luas", "Jml Kendaraan Saat Ini"};
        
        //tampilkan tabel
        cout << "\nInformasi Garasi : ";
        Tabel tab0;
        tab0.buatTabel6(1, 6, isiTabel0, head0);

        //Tabel mobil
        string isiTabel[listMobil1.size()][9];
        for(int i = 0; i < (garasiku.getListMobil()).size(); i++){
            isiTabel[i][0] = (garasiku.getListMobil()).at(i).getPlatNomor();
            isiTabel[i][1] = (garasiku.getListMobil()).at(i).getNama();
            isiTabel[i][2] = (garasiku.getListMobil()).at(i).getMerk();
            isiTabel[i][3] = (garasiku.getListMobil()).at(i).getModel();
            isiTabel[i][4] = to_string((garasiku.getListMobil()).at(i).getTahunProduksi());
            isiTabel[i][5] = (garasiku.getListMobil()).at(i).getWarna();
            isiTabel[i][6] = (garasiku.getListMobil()).at(i).getJenisTransmisi();
            isiTabel[i][7] = to_string((garasiku.getListMobil()).at(i).getJumlahKursi());
            isiTabel[i][8] = to_string((garasiku.getListMobil()).at(i).getJumlahPintu());
        }
        

        //siapkan header
        string head[] = {"Plat Nomor", "Nama", "Merk", "Model", "Tahun Produksi", "Warna", "Jenis Transmisi", "Jml Kursi", "Jml Pintu"};
        
        //tampilkan tabel
        cout << "\nList Mobil di Garasiku : ";
        Tabel tab;
        tab.buatTabel(listMobil1.size(), 9, isiTabel, head);

        //Tabel motor
        string isiTabel2[listMotor1.size()][9];
        for(int i = 0; i < (garasiku.getListMotor()).size(); i++){
            isiTabel2[i][0] = (garasiku.getListMotor()).at(i).getPlatNomor();
            isiTabel2[i][1] = (garasiku.getListMotor()).at(i).getNama();
            isiTabel2[i][2] = (garasiku.getListMotor()).at(i).getMerk();
            isiTabel2[i][3] = (garasiku.getListMotor()).at(i).getJenisMotor();
            isiTabel2[i][4] = to_string((garasiku.getListMotor()).at(i).getTahunProduksi());
            isiTabel2[i][5] = (garasiku.getListMotor()).at(i).getWarna();
            isiTabel2[i][6] = (garasiku.getListMotor()).at(i).getJenisTransmisi();
            isiTabel2[i][7] = to_string((garasiku.getListMotor()).at(i).getKapasitasTangki());
            isiTabel2[i][8] = (garasiku.getListMotor()).at(i).getTipeRem();
        } 
        
        string head2[] = {"Plat Nomor", "Nama", "Merk", "Jenis", "Tahun Produksi", "Warna", "Jenis Transmisi", "Kapasitas Tangki", "Tipe Rem"};
        
        //tampilkan tabel
        cout << "\nList Motor di Garasiku : ";
        Tabel tab2;
        tab2.buatTabel(listMotor1.size(), 9, isiTabel2, head2);

    } else if(menu == 2){
        //informasi parkiran
        string isiTabel[listParkiran.size()][8];
        int i = 0;
        for(vector<ParkingLot>::iterator it = listParkiran.begin(); it != listParkiran.end(); it++){
            isiTabel[i][0] = to_string(i+1);
            isiTabel[i][1] = it->getNama();
            isiTabel[i][2] = it->getLokasi();
            isiTabel[i][3] = it->getTipe();
            isiTabel[i][4] = it->getJamOperasi();
            isiTabel[i][5] = to_string(it->getKapasitas());
            isiTabel[i][6] = to_string(it->getLuas());
            isiTabel[i][7] = to_string(it->getJumlahKendaraanSaatIni());
            i++;
        }
        
        string head[] = {"No", "Nama Parkiran", "Lokasi", "Tipe", "Jam Operasi", "Kapasitas", "Luas", "Jumlah Kendaraan Saat Ini"};
        
        //tampilkan tabel
        cout << "\nList Parkiran : ";
        Tabel tab;
        tab.buatTabel8(listParkiran.size(), 8, isiTabel, head);

        //minta masukan
        cout << "\n[==================================]" << endl;
        cout << "[ Ingin lihat apa saja Kendaraan   ]" << endl;
        cout << "[ yang ada pada parkiran?          ]" << endl;
        cout << "[==================================]" << endl;
        cout << "\n" << endl;
        cout << "1. Lihat Kendaraan di Parkiran 1 ." << endl;
        cout << "2. Lihat Kendaraan di Parkiran 2 ." << endl;

        int lihat = 0;
        cout << "\n> ";
        cin >> lihat;

        if(lihat == 1){
            //Tabel mobil
            string isiTabel[(listParkiran[0].getListMobil()).size()][9];
            for(int i = 0; i < (listParkiran[0].getListMobil()).size(); i++){
                isiTabel[i][0] = (listParkiran[0].getListMobil()).at(i).getPlatNomor();
                isiTabel[i][1] = (listParkiran[0].getListMobil()).at(i).getNama();
                isiTabel[i][2] = (listParkiran[0].getListMobil()).at(i).getMerk();
                isiTabel[i][3] = (listParkiran[0].getListMobil()).at(i).getModel();
                isiTabel[i][4] = to_string((listParkiran[0].getListMobil()).at(i).getTahunProduksi());
                isiTabel[i][5] = (listParkiran[0].getListMobil()).at(i).getWarna();
                isiTabel[i][6] = (listParkiran[0].getListMobil()).at(i).getJenisTransmisi();
                isiTabel[i][7] = to_string((listParkiran[0].getListMobil()).at(i).getJumlahKursi());
                isiTabel[i][8] = to_string((listParkiran[0].getListMobil()).at(i).getJumlahPintu());
            }

            //siapkan header
            string head[] = {"Plat Nomor", "Nama", "Merk", "Model", "Tahun Produksi", "Warna", "Jenis Transmisi", "Jml Kursi", "Jml Pintu"};
            
            //tampilkan tabel
            cout << "\nList Mobil di Garasiku : ";
            Tabel tab;
            tab.buatTabel((listParkiran[0].getListMobil()).size(), 9, isiTabel, head);

            //Tabel motor
            string isiTabel2[(listParkiran[0].getListMotor()).size()][9];
            
            for(int i = 0; i < (listParkiran[0].getListMotor()).size(); i++){
                isiTabel2[i][0] = (listParkiran[0].getListMotor()).at(i).getPlatNomor();
                isiTabel2[i][1] = (listParkiran[0].getListMotor()).at(i).getNama();
                isiTabel2[i][2] = (listParkiran[0].getListMotor()).at(i).getMerk();
                isiTabel2[i][3] = (listParkiran[0].getListMotor()).at(i).getJenisMotor();
                isiTabel2[i][4] = to_string((listParkiran[0].getListMotor()).at(i).getTahunProduksi());
                isiTabel2[i][5] = (listParkiran[0].getListMotor()).at(i).getWarna();
                isiTabel2[i][6] = (listParkiran[0].getListMotor()).at(i).getJenisTransmisi();
                isiTabel2[i][7] = to_string((listParkiran[0].getListMotor()).at(i).getKapasitasTangki());
                isiTabel2[i][8] = (listParkiran[0].getListMotor()).at(i).getTipeRem();
            } 
            
            string head2[] = {"Plat Nomor", "Nama", "Merk", "Jenis", "Tahun Produksi", "Warna", "Jenis Transmisi", "Kapasitas Tangki", "Tipe Rem"};
            
            //tampilkan tabel
            cout << "\nList Motor di Garasiku : ";
            Tabel tab2;
            tab2.buatTabel((listParkiran[0].getListMotor()).size(), 9, isiTabel2, head2);
        } else if(lihat == 2){
            //Tabel mobil
            string isiTabel[(listParkiran[1].getListMobil()).size()][9];

            for(int i = 0; i < (listParkiran[1].getListMobil()).size(); i++){
                isiTabel[i][0] = (listParkiran[1].getListMobil()).at(i).getPlatNomor();
                isiTabel[i][1] = (listParkiran[1].getListMobil()).at(i).getNama();
                isiTabel[i][2] = (listParkiran[1].getListMobil()).at(i).getMerk();
                isiTabel[i][3] = (listParkiran[1].getListMobil()).at(i).getModel();
                isiTabel[i][4] = to_string((listParkiran[1].getListMobil()).at(i).getTahunProduksi());
                isiTabel[i][5] = (listParkiran[1].getListMobil()).at(i).getWarna();
                isiTabel[i][6] = (listParkiran[1].getListMobil()).at(i).getJenisTransmisi();
                isiTabel[i][7] = to_string((listParkiran[1].getListMobil()).at(i).getJumlahKursi());
                isiTabel[i][8] = to_string((listParkiran[1].getListMobil()).at(i).getJumlahPintu());
            }

            //siapkan header
            string head[] = {"Plat Nomor", "Nama", "Merk", "Model", "Tahun Produksi", "Warna", "Jenis Transmisi", "Jml Kursi", "Jml Pintu"};
            
            //tampilkan tabel
            cout << "\nList Mobil di Garasiku : ";
            Tabel tab;
            tab.buatTabel((listParkiran[1].getListMobil()).size(), 9, isiTabel, head);

            //Tabel motor
            string isiTabel2[(listParkiran[1].getListMotor()).size()][9];
            for(int i = 0; i < (listParkiran[1].getListMotor()).size(); i++){
                isiTabel2[i][0] = (listParkiran[1].getListMotor()).at(i).getPlatNomor();
                isiTabel2[i][1] = (listParkiran[1].getListMotor()).at(i).getNama();
                isiTabel2[i][2] = (listParkiran[1].getListMotor()).at(i).getMerk();
                isiTabel2[i][3] = (listParkiran[1].getListMotor()).at(i).getJenisMotor();
                isiTabel2[i][4] = to_string((listParkiran[1].getListMotor()).at(i).getTahunProduksi());
                isiTabel2[i][5] = (listParkiran[1].getListMotor()).at(i).getWarna();
                isiTabel2[i][6] = (listParkiran[1].getListMotor()).at(i).getJenisTransmisi();
                isiTabel2[i][7] = to_string((listParkiran[1].getListMotor()).at(i).getKapasitasTangki());
                isiTabel2[i][8] = (listParkiran[1].getListMotor()).at(i).getTipeRem();
            } 
            
            string head2[] = {"Plat Nomor", "Nama", "Merk", "Jenis", "Tahun Produksi", "Warna", "Jenis Transmisi", "Kapasitas Tangki", "Tipe Rem"};
            
            //tampilkan tabel
            cout << "\nList Motor di Garasiku : ";
            Tabel tab2;
            tab2.buatTabel((listParkiran[1].getListMotor()).size(), 9, isiTabel2, head2);

        }
    }


    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
