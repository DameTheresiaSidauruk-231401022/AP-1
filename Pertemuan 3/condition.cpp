#include <iostream>  

using namespace std;   

int main() {
    int nilai;  // Mendeklarasikan variabel integer nilai

    cout << "Masukkan Nilai: ";  // Menampilkan prompt "Masukkan Nilai:" ke layar
    cin >> nilai;  // Membaca input integer dari pengguna dan menyimpannya di variabel nilai

    // If Statement
    if (nilai <= 65) {  // Memeriksa apakah nilai kurang dari atau sama dengan 65
        cout << "Anda TIDAK Lulus" << endl;  // Jika kondisi benar, menampilkan pesan "Anda TIDAK Lulus"
    }

    // If-Else Statement
    if (nilai <= 65) {  // Memeriksa apakah nilai kurang dari atau sama dengan 65
        cout << "Anda TIDAK Lulus" << endl;  // Jika kondisi benar, menampilkan pesan "Anda TIDAK Lulus"
    } else {  // Jika kondisi di atas salah
        cout << "Anda Lulus" << endl;  // Menampilkan pesan "Anda Lulus"
    }

    // If-Else-If Statement
    if (nilai == 100) {  // Memeriksa apakah nilai sama dengan 100
        cout << "Anda Hebat" << endl;  // Jika kondisi benar, menampilkan pesan "Anda Hebat"
    } else if (nilai <= 65) {  // Jika nilai tidak sama dengan 100, memeriksa apakah nilai kurang dari atau sama dengan 65
        cout << "Anda TIDAK Lulus" << endl;  // Jika kondisi benar, menampilkan pesan "Anda TIDAK Lulus"
    } else {  // Jika semua kondisi di atas salah
        cout << "Anda Lulus" << endl;  // Menampilkan pesan "Anda Lulus"
    }

    // Nested If Statement
    if (nilai <= 65) {  // Memeriksa apakah nilai kurang dari atau sama dengan 65
        cout << "Anda TIDAK Lulus" << endl;  // Jika kondisi benar, menampilkan pesan "Anda TIDAK Lulus"
    } else {  // Jika kondisi di atas salah
        if (nilai == 100) {  // Memeriksa apakah nilai sama dengan 100
            cout << "Anda Lulus dan Anda Hebat" << endl;  // Jika kondisi benar, menampilkan pesan "Anda Lulus dan Anda Hebat"
        } else {  // Jika kondisi di atas salah
            cout << "Anda Lulus" << endl;  // Menampilkan pesan "Anda Lulus"
        }
    }

    // Switch Case
    switch (nilai) {  // Memeriksa nilai variabel nilai
        case 1:
            cout << "Senin" << endl;  // Jika nilai 1, menampilkan "Senin"
            break;  // Keluar dari switch case
        case 2:
            cout << "Selasa" << endl;  // Jika nilai 2, menampilkan "Selasa"
            break;  // Keluar dari switch case
        case 3:
            cout << "Rabu" << endl;  // Jika nilai 3, menampilkan "Rabu"
            break;  // Keluar dari switch case
        case 4:
            cout << "Kamis" << endl;  // Jika nilai 4, menampilkan "Kamis"
            break;  // Keluar dari switch case
        case 5:
            cout << "Jumat" << endl;  // Jika nilai 5, menampilkan "Jumat"
            break;  // Keluar dari switch case
        case 6:
            cout << "Sabtu" << endl;  // Jika nilai 6, menampilkan "Sabtu"
            break;  // Keluar dari switch case
        case 7:
            cout << "Minggu" << endl;  // Jika nilai 7, menampilkan "Minggu"
            break;  // Keluar dari switch case
        default:
            cout << "Inputan TIDAK VALID" << endl;  // Jika nilai tidak cocok dengan kasus di atas, menampilkan "Inputan TIDAK VALID"
            break;  // Opsional, keluar dari switch case
    }

    // Switch Case For Range
    switch (nilai) {
        case 85 ... 100:  // Jika nilai dalam rentang 85 hingga 100
            cout << "A" << endl;  // Menampilkan "A"
            break;
        case 80 ... 84:  // Jika nilai dalam rentang 80 hingga 84
            cout << "B+" << endl;  // Menampilkan "B+"
            break;
        case 75 ... 79:  // Jika nilai dalam rentang 75 hingga 79
            cout << "B" << endl;  // Menampilkan "B"
            break;
        case 70 ... 74:  // Jika nilai dalam rentang 70 hingga 74
            cout << "C+" << endl;  // Menampilkan "C+"
            break;
        case 65 ... 69:  // Jika nilai dalam rentang 65 hingga 69
            cout << "C" << endl;  // Menampilkan "C"
            break;
        case 60 ... 64:  // Jika nilai dalam rentang 60 hingga 64
            cout << "D" << endl;  // Menampilkan "D"
            break;
        default:  // Jika nilai tidak cocok dengan rentang di atas
            cout << "E" << endl;  // Menampilkan "E"
            break;
    }

    // Ternary Operator
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";  // Menggunakan operator ternary untuk memeriksa apakah nilai genap atau ganjil
    cout << nilai << " adalah bilangan " << checkNum << endl;  // Menampilkan hasil pemeriksaan genap atau ganjil
}
