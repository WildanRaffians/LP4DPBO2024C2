from Car import Car
from Motorcycle import Motorcycle
# Kelas Parking
class Parking :
    __nama =""
    __kapasitas=0
    __luas=0
    __jumlahKendaraanSaatIni=0

    # Constructor
    def __init__(self, nama, kapasitas=0, luas=0, jumlahKendaraanSaatIni=0, listMobil = [], listMotor=[]) :
        self.__nama = nama
        self.__kapasitas = kapasitas
        self.__luas = luas
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni
        self.__listMobil = listMobil
        self.__listMotor = listMotor

    # Getter untuk mengambil nilai atribut nama
    def getNama(self) :
        return self.__nama

    # Setter untuk mengatur nilai atribut nama
    def setNama(self, nama) :
        self.__nama = nama

    # Getter untuk mengambil nilai atribut kapasitas
    def getKapasitas(self) :
        return self.__kapasitas

    # Setter untuk mengatur nilai atribut kapasitas
    def setKapasitas(self, kapasitas) :
        self.__kapasitas = kapasitas

    # Getter untuk mengambil nilai atribut luas
    def getLuas(self) :
        return self.__luas
    
    # Setter untuk mengatur nilai atribut luas
    def setLuas(self, luas) :
        self.__luas = luas
    
    # Getter untuk mengambil nilai atribut jumlahKendaraanSaatIni
    def getJumlahKendaraanSaatIni(self) :
        return self.__jumlahKendaraanSaatIni

    # Setter untuk mengatur nilai atribut jumlahKendaraanSaatIni
    def setJumlahKendaraanSaatIni(self, jumlahKendaraanSaatIni) :
        self.__jumlahKendaraanSaatIni = jumlahKendaraanSaatIni

    # Setter untuk listmotor
    def setListMotor(self, motor):
        listMotor = motor

    # Getter untuk listMotor
    def getListMotor(self) : 
        return self.__listMotor 

    # Setter untuk listmobil    
    def setListMobil(self, mobil):
        listMobil = mobil
    
    # Getter untuk listMobil
    def getListMobil(self) : 
        return self.__listMobil 