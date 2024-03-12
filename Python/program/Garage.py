# Kelas Garasi
from Parking import Parking

class Garage(Parking):
    __tipePintu=""
    __pemilik=""
    
    # Constructor dengan parameter lengkap
    def __init__(self,  tipePintu="", pemilik="", nama="", kapasitas=0, luas=0, jumlahKendaraanSaatIni=0, listMobil=[], listMotor=[]) : 
        super().__init__(nama, kapasitas, luas, jumlahKendaraanSaatIni, listMobil, listMotor)
        self.__tipePintu = tipePintu
        self.__pemilik = pemilik

    # Getter untuk mengambil nilai atribut tipePintu
    def getTipePintu(self) :
        return self.__tipePintu

    # Setter untuk mengatur nilai atribut tipePintu
    def setTipePintu(self, tipePintu) :
        self.__tipePintu = tipePintu

    # Getter untuk mengambil nilai atribut pemilik
    def getPemilik(self) :
        return self.__pemilik

    # Setter untuk mengatur nilai atribut pemilik
    def setPemilik(self, pemilik) :
        self.__pemilik = pemilik