# Kelas Motorcycle
from Vehicle import Vehicle

class Motorcycle (Vehicle):
    __jenisMotor=""
    __kapasitasTangki=0
    __tipeRem=""

    # Constructor
    def __init__(self, jenisMotor="", kapasitasTangki=0, tipeRem="", platNomor="", nama="", merk="", tahunProduksi=0, warna="", jenisTransmisi="") : 
        super().__init__(platNomor, nama, merk, tahunProduksi, warna, jenisTransmisi)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki
        self.__tipeRem = tipeRem


    # Getter untuk mengambil nilai atribut jenisMotor
    def getJenisMotor(self) :
        return self.__jenisMotor

    # Setter untuk mengatur nilai atribut jenisMotor
    def setJenisMotor(self, jenisMotor) :
        self.__jenisMotor = jenisMotor

    # Getter untuk mengambil nilai atribut tipeRem
    def getTipeRem(self) :
        return self.__tipeRem

    # Setter untuk mengatur nilai atribut tipeRem
    def setTipeRem(self, tipeRem) :
        self.__tipeRem = tipeRem

    # Getter untuk mengambil nilai atribut kapasitasTangki
    def getKapasitasTangki(self) :
        return self.__kapasitasTangki

    # Setter untuk mengatur nilai atribut kapasitasTangki
    def setKapasitasTangki(self, kapasitasTangki) :
        self.__kapasitasTangki = kapasitasTangki
