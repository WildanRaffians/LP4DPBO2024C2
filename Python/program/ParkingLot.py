# Kelas ParkingLot
from Parking import Parking

class ParkingLot(Parking):
    __lokasi=""
    __tipe=""
    __jamOperasi=""
    
    # Constructor
    def __init__(self, lokasi, tipe, jamOperasi, nama="", kapasitas=0, luas=0, jumlahKendaraanSaatIni=0, listMobil=[], listMotor=[]) : 
        super().__init__(nama, kapasitas, luas, jumlahKendaraanSaatIni, listMobil, listMotor)
        self.__lokasi = lokasi
        self.__tipe = tipe
        self.__jamOperasi = jamOperasi

    # Getter untuk mengambil nilai atribut lokasi
    def getLokasi(self) :
        return self.__lokasi

    # Setter untuk mengatur nilai atribut lokasi
    def setLokasi(self, lokasi) :
        self.__lokasi = lokasi

    # Getter untuk mengambil nilai atribut tipe
    def getTipe(self) :
        return self.__tipe

    # Setter untuk mengatur nilai atribut tipe
    def setTipe(self, tipe) :
        self.__tipe = tipe
    
    def getJamOperasi(self) :
        return self.__jamOperasi

    # Setter untuk mengatur nilai atribut jamOperasi
    def setJamOperasi(self, jamOperasi) :
        self.__jamOperasi = jamOperasi