# Puzzle Game 

## Abstrak

Program ini merupakan implementasi dari permainan puzzle Sliding Puzzle menggunakan bahasa pemrograman C++. Permainan ini mengharuskan pemain untuk menggerakkan angka-angka dalam kotak grid untuk menyusun urutan yang benar. Setiap kotak grid memiliki angka, kecuali satu kotak yang kosong. Tujuan pemain adalah menyusun angka-angka tersebut dalam urutan yang benar dengan memindahkan kotak kosong ke posisi yang tepat.

## Bahasa Pemrograman
C++: Bahasa pemrograman utama yang digunakan dalam pengembangan program ini. C++ dipilih karena efisiensi dalam penggunaan sumber daya dan kemampuannya dalam menangani pemrograman tingkat rendah.

## Tools yang Digunakan

C++ Compiler: Pengembangan program dilakukan menggunakan C++ Compiler, yang dalam hal ini digunakan untuk mengompilasi dan menjalankan kode program.

STL (Standard Template Library): STL digunakan untuk memanipulasi struktur data vector yang digunakan untuk menyimpan grid permainan dan angka-angka di dalamnya.

< cstdlib > : Library ini digunakan untuk memanfaatkan fungsi-fungsi untuk menghasilkan angka acak.

 < ctime > : Digunakan untuk mendapatkan nilai waktu saat ini, yang diperlukan untuk menghasilkan seed untuk angka acak.

## Dokumentasi
### Fungsi printGrid
Fungsi ini digunakan untuk mencetak grid permainan ke layar. Angka-angka akan dicetak sesuai dengan posisinya dalam grid, dengan kotak kosong direpresentasikan sebagai spasi.

### Fungsi findPosition
Fungsi ini mencari posisi sebuah angka dalam grid. Jika angka ditemukan, fungsi akan mengembalikan koordinat baris dan kolomnya.

### Fungsi isSolved
Fungsi ini memeriksa apakah grid permainan sudah terpecahkan atau belum. Grid dianggap terpecahkan jika semua angka disusun dalam urutan yang benar, dengan angka terakhir (yang biasanya 0 atau kosong) berada di posisi terakhir.

### Fungsi moveTile
Fungsi ini digunakan untuk memindahkan angka dalam grid ke arah yang ditentukan oleh pemain. Pemindahan dilakukan dengan menukar posisi angka dengan posisi kotak kosong.

### Fungsi shuffleGrid
Fungsi ini mengacak posisi angka dalam grid untuk memulai permainan. Posisi angka diacak dengan melakukan sejumlah gerakan acak pada kotak kosong.

### Fungsi main
Fungsi utama program, yang menginisialisasi grid awal, mengacak posisi angka, dan mengatur iterasi permainan. Pemain diberikan instruksi untuk menggerakkan angka menggunakan WASD, dan permainan berakhir ketika grid terpecahkan.

## Kesimpulan
Program ini adalah contoh sederhana dari implementasi permainan Sliding Puzzle menggunakan bahasa pemrograman C++. Dengan menggunakan konsep pemrograman tingkat rendah dan manipulasi struktur data, program ini menyediakan pengalaman bermain yang interaktif dan menantang bagi pengguna.
