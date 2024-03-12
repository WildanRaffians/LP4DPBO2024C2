# Kelas Vehicle
class Vehicle:
    __platNomor = ""
    __nama = ""
    __merk = ""
    __tahunProduksi = 0
    __warna = ""
    __jenisTransmisi = ""

    # Constructor
    def __init__(self, platNomor="", nama="", merk="", tahunProduksi=0, warna="", jenisTransmisi="") :
        self.__platNomor = platNomor
        self.__nama = nama
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna
        self.__jenisTransmisi = jenisTransmisi

    def getPlatNomor(self):
        return self.__platNomor
    

    # Setter untuk mengatur nilai atribut platNomor
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor
    
    
    def getNama(self):
        return self.__nama
    

    # Setter untuk mengatur nilai atribut nama
    def setNama(self, nama):
        self.__nama = nama
    

    # Getter untuk mengambil nilai atribut merk
    def getMerk(self):
        return self.__merk
    

    # Setter untuk mengatur nilai atribut merk
    def setMerk(self, merk):
        self.__merk = merk
    

    # Getter untuk mengambil nilai atribut tahunProduksi
    def getTahunProduksi(self):
        return self.__tahunProduksi
    

    # Setter untuk mengatur nilai atribut tahunProduksi
    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi
    

    # Getter untuk mengambil nilai atribut warna
    def getWarna(self):
        return self.__warna
    

    # Setter untuk mengatur nilai atribut warna
    def setWarna(self, warna):
        self.__warna = warna
    
    
    def getJenisTransmisi(self):
        return self.__jenisTransmisi
    

    # Setter untuk mengatur nilai atribut jenisTransmisi
    def setJenisTransmisi(self, jenisTransmisi):
        self.__jenisTransmisi = jenisTransmisi
    
