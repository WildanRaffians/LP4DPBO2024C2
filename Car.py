# Kelas Car
from Vehicle import Vehicle

class Car(Vehicle):
    __model=""
    __jumlahKursi=0
    __jumlahPintu=0
    
    # Constructor
    def __init__(self, model="", jumlahKursi=0, jumlahPintu=0, platNomor="", nama="", merk="", tahunProduksi=0, warna="", jenisTransmisi="") : 
        super().__init__(platNomor, nama, merk, tahunProduksi, warna, jenisTransmisi)
        self.__model = model
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # Getter untuk mengambil nilai atribut model
    def getModel(self) :
        return self.__model

    # Setter untuk mengatur nilai atribut model
    def setModel(self, model) :
        self.__model = model

    # Getter untuk mengambil nilai atribut jumlahPintu
    def getJumlahPintu(self) :
        return self.__jumlahPintu

    # Setter untuk mengatur nilai atribut jumlahPintu
    def setJumlahPintu(self, jumlahPintu) :
        self.__jumlahPintu = jumlahPintu

    # Getter untuk mengambil nilai atribut jumlahKursi
    def getJumlahKursi(self) :
        return self.__jumlahKursi

    # Setter untuk mengatur nilai atribut jumlahKursi
    def setJumlahKursi(self, jumlahKursi) :
        self.__jumlahKursi = jumlahKursi