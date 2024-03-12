
# Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 


from Vehicle import Vehicle
from Motorcycle import Motorcycle
from Car import Car
from Parking import Parking
from Garage import Garage
from ParkingLot import ParkingLot
from Tabel import Tabel

# Fungsi main() yang digunakan sebagai program utama

#vector motor
listMotor1 = []
listMotor2 = []
listMotor3 = []

#vector mobil
listMobil1 = []
listMobil2 = []
listMobil3 = []

#vector parkiran
listParkiran = []

#objek motor
mtr1 = Motorcycle("Motor Skuter", 6, "CBS", "T 1234 CC", "Xario", "Honda", 2020, "Merah", "Auto")
mtr2 = Motorcycle("Motor Sport", 17, "CBS", "T 2048 OO", "YZF-R6", "Yamaha", 2022, "Biru", "Manual")
mtr3 = Motorcycle("Motor Cruiser", 22, "ABS", "T 9988 GG", "Softail Deluxe", "Harley-Davidson", 2023, "Hitam", "Manual")
mtr4 = Motorcycle("Motor Skuter", 6, "ABS", "D 2334 CC", "Wio", "Yamaha", 2021, "Hijau", "Auto")
mtr5 = Motorcycle("Motor Bebek", 5, "ABS", "B 7678 OP", "Supra Z", "Honda", 2024, "Putih", "Manual")
mtr6 = Motorcycle("Motor Skuter", 5, "CBS", "B 8543 OS", "Primavera", "Vespa", 2023, "Putih", "Auto")
mtr7 = Motorcycle("Motor Bebek", 6, "ABS", "D 8522 JJ", "Smash 115", "Suzuki", 2023, "Biru", "Manual")
mtr8 = Motorcycle("Motor Trail", 10, "CBS", "T 7122 JJ", "KLX 151", "Kawasaki", 2023, "Kuning", "Manual")
mtr9 = Motorcycle("Motor Sport", 16, "CBS", "B 6312 KJ", "GSX-R1001", "Suzuki", 2023, "Hitam", "Manual")
mtr10 = Motorcycle("Motor Skuter", 7, "ABS", "D 5422 KJ", "Nmax", "Yamaha", 2023, "Ungu", "Auto")

#vector objek motor di garasi
listMotor1.append(mtr1)
listMotor1.append(mtr2)
listMotor1.append(mtr3)

#vector objek motor di parkiran 1
listMotor2.append(mtr5)
listMotor2.append(mtr7)
listMotor2.append(mtr8)
listMotor2.append(mtr9)

#vector objek motor di parkiran 2
listMotor3.append(mtr4)
listMotor3.append(mtr6)
listMotor3.append(mtr10)

#objek mobil
mbl1 = Car("Mobil MPV", 7, 5, "T 4655 GC", "Avanza", "Toyota", 2020, "Silver", "Manual")
mbl2 = Car("Mobil MPV", 7, 5, "T 9876 OO", "Alphard", "Toyota", 2023, "Hitam", "Auto")
mbl3 = Car("Mobil Sedan", 5, 4, "T 6548 GG", "E-Class", "Mercedez-Benz", 2024, "Silver", "Auto")
mbl4 = Car("Mobil Coupe", 4, 2, "D 4611 CC", "4 Series Coupe", "BMW", 2024, "Coklat", "Auto")
mbl5 = Car("Mobil SUV", 7, 5, "B 5468 OP", "Fortuner", "Toyota", 2024, "Putih", "Manual")
mbl6 = Car("Mobil SUV", 5, 5, "B 4453 OS", "CR-V", "Honda", 2023, "Hitam", "Auto")
mbl7 = Car("Mobil Truk", 3, 2, "D 1233 JJ", "F-150", "Ford", 2021, "Merah", "Manual")
mbl8 = Car("Mobil Van", 8, 4, "T 5464 JJ", "Caravelle", "Volkswagen", 2023, "Abu-Abu", "Auto")
mbl9 = Car("Mobil Sedan", 5, 4, "B 6543 KJ", "3 Series", "BMW", 2024, "Hitam", "Auto")
mbl10 = Car("Mobil MPV", 7, 5, "D 4685 KJ", "Innova", "Toyota", 2023, "Silver", "Auto")

#vektor objek mobil di garasi
listMobil1.append(mbl4)
listMobil1.append(mbl8)
listMobil1.append(mbl9)

#vektor objek mobil di parkiran 1
listMobil2.append(mbl1)
listMobil2.append(mbl2)
listMobil2.append(mbl5)
listMobil2.append(mbl10)

#vektor objek mobil di parkiran 2
listMobil3.append(mbl3)
listMobil3.append(mbl6)
listMobil3.append(mbl7)

#garasiku
jmlKendaraan = len(listMobil1)+len(listMotor1)
garasiku = Garage("Pintu Lipat", "Wildan Raffians", "GarasiKoleksi", 8, 90, jmlKendaraan, listMobil1, listMotor1)

#parkiran 1 dan 2
jmlKendaraan = len(listMobil2)+len(listMotor3)
parkiran1 = ParkingLot("Geger Kalong", "Terbuka", "07.00 - 21.00", "Parkiran Gerlong Amanah", 80, 900, jmlKendaraan, listMobil2, listMotor3)
jmlKendaraan = len(listMobil3)+len(listMotor2)
parkiran2 = ParkingLot("Cempaka", "tertutup", "06.00 - 22.00", "Parkiran Cempaka Utara", 50, 600, jmlKendaraan, listMobil3, listMotor2)

listParkiran.append(parkiran1)
listParkiran.append(parkiran2)

#minta masukan
print("[==================================]")
print("[ HAI!                             ]")
print("[ Ada yang bisa dibantu Hari ini?  ]")
print("[==================================]")
print("\n")
print("1. Lihat Kendaraan di Garasiku.")
print("2. Lihat Ada Parkiran apa saja.")

menu = int(input("\n> "))

if(menu == 1):
    #informasi garasi
    isiTabel0 = [[0 for _ in range(6)] for _ in range(1)]

    isiTabel0[0][0] = garasiku.getNama()
    isiTabel0[0][1] = garasiku.getPemilik()
    isiTabel0[0][2] = garasiku.getTipePintu()
    isiTabel0[0][3] = str(garasiku.getKapasitas())
    isiTabel0[0][4] = str(garasiku.getLuas())
    isiTabel0[0][5] = str(garasiku.getJumlahKendaraanSaatIni())
    

    #siapkan header
    head0 = ["Nama Garasi", "Pemilik", "Tipe Pintu", "Kapasitas", "Luas", "Jml Kendaraan Saat Ini"]
    
    #tampilkan tabel
    print( "\nInformasi Garasi : ")
    tab0 = Tabel()
    tab0.buat_tabel(1, 6, isiTabel0, head0)

    #Tabel mobil
    isiTabel = [[0 for _ in range(9)] for _ in range(len(garasiku.getListMobil()))]
    i = 0
    for mobilku in garasiku.getListMobil() :
        isiTabel[i][0] = mobilku.getPlatNomor()
        isiTabel[i][1] = mobilku.getNama()
        isiTabel[i][2] = mobilku.getMerk()
        isiTabel[i][3] = mobilku.getModel()
        isiTabel[i][4] = str(mobilku.getTahunProduksi())
        isiTabel[i][5] = mobilku.getWarna()
        isiTabel[i][6] = mobilku.getJenisTransmisi()
        isiTabel[i][7] = str(mobilku.getJumlahKursi())
        isiTabel[i][8] = str(mobilku.getJumlahPintu())
        i+=1

    #siapkan header
    head = ["Plat Nomor", "Nama", "Merk", "Model", "Tahun Produksi", "Warna", "Jenis Transmisi", "Jml Kursi", "Jml Pintu"]
    
    #tampilkan tabel
    print( "\nData Mobil di Garasiku : ")
    tab = Tabel()
    tab.buat_tabel(len(garasiku.getListMobil()), 9, isiTabel, head)

    #Tabel motor
    isiTabel2 = [[0 for _ in range(9)] for _ in range(len(garasiku.getListMotor()))]
    i=0
    for motorku in garasiku.getListMotor() :
        isiTabel2[i][0] = motorku.getPlatNomor()
        isiTabel2[i][1] = motorku.getNama()
        isiTabel2[i][2] = motorku.getMerk()
        isiTabel2[i][3] = motorku.getJenisMotor()
        isiTabel2[i][4] = str(motorku.getTahunProduksi())
        isiTabel2[i][5] = motorku.getWarna()
        isiTabel2[i][6] = motorku.getJenisTransmisi()
        isiTabel2[i][7] = str(motorku.getKapasitasTangki())
        isiTabel2[i][8] = motorku.getTipeRem()
        i+=1 
    
    head2 = ["Plat Nomor", "Nama", "Merk", "Jenis", "Tahun Produksi", "Warna", "Jenis Transmisi", "Kapasitas Tangki", "Tipe Rem"]
    
    #tampilkan tabel
    print( "\nData Motor di Garasiku : ")
    tab2 = Tabel()
    tab2.buat_tabel(len(garasiku.getListMotor()), 9, isiTabel2, head2)

elif(menu == 2):
    #informasi parkiran
    isiTabel = [[0 for _ in range(8)] for _ in range(len(listParkiran))]
    i = 0
    for parkiran in listParkiran :
        isiTabel[i][0] = str(i+1)
        isiTabel[i][1] = parkiran.getNama()
        isiTabel[i][2] = parkiran.getLokasi()
        isiTabel[i][3] = parkiran.getTipe()
        isiTabel[i][4] = parkiran.getJamOperasi()
        isiTabel[i][5] = str(parkiran.getKapasitas())
        isiTabel[i][6] = str(parkiran.getLuas())
        isiTabel[i][7] = str(parkiran.getJumlahKendaraanSaatIni())
        i+=1
    
    headpark = ["No", "Nama Parkiran", "Lokasi", "Tipe", "Jam Operasi", "Kapasitas", "Luas", "Jumlah Kendaraan Saat Ini"]
    
    #tampilkan tabel
    print( "\nData Parkiran : ")
    tab = Tabel()
    tab.buat_tabel(len(listParkiran), 8, isiTabel, headpark)

    #minta masukan
    print( "\n[==================================]" )
    print( "[ Ingin lihat apa saja Kendaraan   ]" )
    print( "[ yang ada pada parkiran?          ]" )
    print( "[==================================]" )
    print( "\n" )

    for i in range(len(listParkiran)) :
        print( str(i+1) + ". Lihat Kendaraan di Parkiran " + str(i+1) + "." )
    
    lihat = int(input("\n> "))
    lihat = lihat - 1

    #Tabel mobil
    isiTabel = [[0 for _ in range(9)] for _ in range(len(listParkiran[lihat].getListMobil()))]
    i = 0
    for mobilku in listParkiran[lihat].getListMobil() :
        isiTabel[i][0] = mobilku.getPlatNomor()
        isiTabel[i][1] = mobilku.getNama()
        isiTabel[i][2] = mobilku.getMerk()
        isiTabel[i][3] = mobilku.getModel()
        isiTabel[i][4] = str(mobilku.getTahunProduksi())
        isiTabel[i][5] = mobilku.getWarna()
        isiTabel[i][6] = mobilku.getJenisTransmisi()
        isiTabel[i][7] = str(mobilku.getJumlahKursi())
        isiTabel[i][8] = str(mobilku.getJumlahPintu())
        i+=1

    #siapkan header
    head = ["Plat Nomor", "Nama", "Merk", "Model", "Tahun Produksi", "Warna", "Jenis Transmisi", "Jml Kursi", "Jml Pintu"]
    
    #tampilkan tabel
    print( "\nData Mobil di listParkiran " + str(lihat+1) + ":")
    tab = Tabel()
    tab.buat_tabel(len(listParkiran[lihat].getListMobil()), 9, isiTabel, head)

    #Tabel motor
    isiTabel2 = [[0 for _ in range(9)] for _ in range(len(listParkiran[lihat].getListMotor()))]
    
    i=0
    for motorku in listParkiran[lihat].getListMotor() :
        isiTabel2[i][0] = motorku.getPlatNomor()
        isiTabel2[i][1] = motorku.getNama()
        isiTabel2[i][2] = motorku.getMerk()
        isiTabel2[i][3] = motorku.getJenisMotor()
        isiTabel2[i][4] = str(motorku.getTahunProduksi())
        isiTabel2[i][5] = motorku.getWarna()
        isiTabel2[i][6] = motorku.getJenisTransmisi()
        isiTabel2[i][7] = str(motorku.getKapasitasTangki())
        isiTabel2[i][8] = motorku.getTipeRem()
        i+=1
    
    head2 = ["Plat Nomor", "Nama", "Merk", "Jenis", "Tahun Produksi", "Warna", "Jenis Transmisi", "Kapasitas Tangki", "Tipe Rem"]
    
    #tampilkan tabel
    print( "\nData Motor di listParkiran " + str(lihat+1) + ":")
    tab2 = Tabel()
    tab2.buat_tabel(len(listParkiran[lihat].getListMotor()), 9, isiTabel2, head2)