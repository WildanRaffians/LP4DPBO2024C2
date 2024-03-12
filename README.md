<h1>LP4DPBO2024C2</h1>
<h3>Janji</h3>
Saya Wildan Hafizh Raffianshar NIM [2202301] mengerjakan soal Latihan Praktikum-4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin![image](https://github.com/WildanRaffians/LP4DPBO2024C2/assets/134181656/30f3ff20-4aeb-4676-b77b-c99e112610cd)


<h3>Deskripsi</h3>
Program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas berikut :

Vehicle : plat nomor, nama, merk, tahun produksi, warna, jenis transmisi
Car : model, jumlah kursi, jumlah pintu
Motorcycle : jenis motor, kapasitas tangki, tipe rem
Parking : nama, kapasitas, luas, jumlah kendaraan saat ini, daftar mobil, daftar motor
Garage : tipe pintu, pemilik
ParkingLot : lokasi, tipe, jam operasi


<h3>Desain Program</h3>
![image](https://github.com/WildanRaffians/LP4DPBO2024C2/assets/134181656/03f3b5ff-3300-4fb9-a30c-0344e5f98a96)


Pada program ini terdapat 7 kelas, yaitu: Vehicle, Car, Motorcycle, Parking, Garage, dan Parkinglot. 
Car dan Motorcycle merupakan anak dari Vehicle, karena meeka merupakan jenis yang sama dan setiap atribut pada vehicle dapat digunakan oleh Car maupun Motorcycle.
Garage dan Parkinglot merupakan anak dari Parking, karena merkarena meeka merupakan jenis yang sama dan setiap atribut pada Parking dapat digunakan oleh Garage maupun Parkinglot.
Pada parking dapat memiliki banyak Car atau banyak Motorcycle, sehingga parking composite dengan Car dan Motorcycle. Karena dapat berisi banyak maka Car dan Motorcycle berupa array of object.

<ol>
<li>
  Kelas Vehicle merupakan induk dari kelas Motorcycle dan Kelas Car. Karena Car atau Motorcycle sama-sama berjenis Vehicle. Atribut yang dimiliki Vehicle adalah plat nomor, nama (nama kendaraan seperti vario, avanza dll), merk, tahun produksi, warna, dan jenis tranmisi (manual atau auto).
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>
<li>
  Kelas Car merupakan anak dari kelas Vehicle. Atribut yang dimiliki Car adalah Semua atribut kelas Vehicle dan model mobil, jumlah kursi, juga jumlah pintu.
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>
<li>
  Kelas Motorcycle merupakan anak dari kelas Vehicle. Atribut yang dimiliki Motorcycle adalah Semua atribut kelas Vehicle dan jenis motor, kapasitas tangki, dann tipe rem (ABS atau CBS)
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>
<li>
  Kelas Parking merupakan induk dari kelas Garage dan Kelas ParkingLot Karena Garage atau ParkingLot sama-sama berjenis Parking (area menyimpan kendaraan). Atribut yang dimiliki Parking adalah nama, kapasitas, luas (m persegi), jumlah kendaraan saat ini, daftar mobil, dan daftar motor.
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>
</li>
<li>
  Kelas Garage merupakan anak dari kelas Parking. Garage disini berupa tempat menyimpan kendaraan yang bersifat private/pribadi dan berada di dalam gedung/ruangan. Atribut yang dimiliki Garage adalah Semua atribut kelas Parking dan tipe pintu juga pemilik.
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>
<li>
  Kelas ParkingLot merupakan anak dari kelas Parking. Garage ParkingLot berupa tempat menyimpan kendaraan yang bersifat public/umum dan berada diluar, bisa tertutup atau terbuka (atapnya). Atribut yang dimiliki ParkingLot adalah Semua atribut kelas Parking dan lokasi, tipe (terbuka/tertutup), juga jam operasi.
  Semua atribut bersifat private agar tidak dapat diakses oleh kelas lain. Untuk methodnya terdapat setter dan getter untuk setiap atribut dan semua method bersifat publik agar dapat diakses oleh kelas lain.
</li>

Pada Main, akan menampilkan pilhan untuk menampilkan kendaraan di garasi atau menampilkan parkiran. Jika memilih menampilkan kendaraan di garasi maka akan muncul tabel iformasi garasi, daftar mobil dan daftar motor di garasi.
Jika memilih menampilkan parkiran maka akan ditampilkan daftar parkiran. Lalu akan diminta memilih parkiran mana yang akan diliat daftar kendaraan di dalamnya.


<h3>Dokumentasi Program</h3>
![ss1](https://github.com/WildanRaffians/LP4DPBO2024C2/assets/134181656/a63afa56-d14d-4fdc-9d87-f441d8dfd441)
![ss2](https://github.com/WildanRaffians/LP4DPBO2024C2/assets/134181656/16be1c1e-516d-4ef5-a856-bf488df2908e)
![ss3](https://github.com/WildanRaffians/LP4DPBO2024C2/assets/134181656/94d37334-b5a1-418a-9ef9-d50901c1849f)
