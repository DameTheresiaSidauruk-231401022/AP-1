#include <iostream>  
#include <math.h>    // Menyertakan pustaka matematika untuk fungsi pangkat
#include <cctype>    // Menyertakan pustaka untuk fungsi toupper()

using namespace std;  

// Mendeklarasikan prototipe fungsi-fungsi yang akan digunakan
void garis();
void bintang();
void menu();
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);
int pangkat(int a, int b);

int main() {
    char cont;  // Mendeklarasikan variabel karakter cont untuk menentukan apakah program akan berlanjut atau tidak

    do {  // Mulai loop do-while untuk menjalankan kalkulator dan memberikan opsi untuk melanjutkan atau tidak
        system("cls");  // Membersihkan layar konsol

        menu();  // Memanggil fungsi menu untuk menampilkan menu operasi

        int operation, a, b, hasil;  // Mendeklarasikan variabel untuk operasi, operand, dan hasil
        cout << "Masukkan operasi : ";
        cin >> operation;  // Membaca input operasi dari pengguna

        cout << "Masukkan angka pertama : ";
        cin >> a;  // Membaca input angka pertama dari pengguna

        cout << "Masukkan angka kedua : ";
        cin >> b;  // Membaca input angka kedua dari pengguna

        // Melakukan switch berdasarkan operasi yang dipilih pengguna
        switch(operation) {
            case 1:  // Jika operasi adalah penambahan
                hasil = tambah(a, b);  // Memanggil fungsi tambah
                break;
            case 2:  // Jika operasi adalah pengurangan
                hasil = kurang(a, b);  // Memanggil fungsi kurang
                break;
            case 3:  // Jika operasi adalah perkalian
                hasil = kali(a, b);  // Memanggil fungsi kali
                break;
            case 4:  // Jika operasi adalah pembagian
                hasil = bagi(a, b);  // Memanggil fungsi bagi
                break;
            case 5:  // Jika operasi adalah modulo
                hasil = modulo(a, b);  // Memanggil fungsi modulo
                break;
            case 6:  // Jika operasi adalah pangkat
                hasil = pangkat(a, b);  // Memanggil fungsi pangkat
                break;
        }

        cout << "Hasil = " << hasil << endl;  // Menampilkan hasil operasi

        bintang();  // Memanggil fungsi bintang untuk menampilkan garis bintang

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;  // Membaca input untuk menentukan apakah pengguna ingin melanjutkan atau tidak
    } while(toupper(cont) == 'Y');  // Loop akan terus berjalan selama input pengguna adalah 'Y' atau 'y'

    cout << "Terima kasih telah menggunakan program kalkulator" << endl;  // Menampilkan pesan terima kasih saat program selesai
    return 0;  // Mengakhiri program
}

void garis() {
    cout << "====================================" << endl;  // Menampilkan garis batas
}

void bintang() {
    cout << "************************************" << endl;  // Menampilkan garis bintang
}

void menu() {
    garis();  // Memanggil fungsi garis untuk menampilkan garis batas
    cout << "Selamat Datang di Program Kalkulator" << endl;  // Menampilkan pesan selamat datang
    garis();  // Memanggil fungsi garis untuk menampilkan garis batas
    cout << "1. Tambah \n2. Kurang \n3. Kali \n4. Bagi \n5. Modulo \n6. pangkat" << endl;  // Menampilkan pilihan operasi
    garis();  // Memanggil fungsi garis untuk menampilkan garis batas
}

// Definisi fungsi-fungsi untuk operasi matematika dasar
int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);
}

int modulo(int a, int b) {
    return a % b;
}

int pangkat(int a, int b) {
    return pow(a, b);
}
