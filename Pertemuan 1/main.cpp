#include <iostream>    

using namespace std;   

int main() {
    string nama;       // Mendeklarasikan variabel string untuk menyimpan nama
    int nim;           // Mendeklarasikan variabel integer untuk menyimpan NIM
    char kom;          // Mendeklarasikan variabel karakter untuk menyimpan kelas atau seksi
    float ip;          // Mendeklarasikan variabel float untuk menyimpan nilai IP

    cout << "Hello World" << endl;    // Menampilkan teks "Hello World" di layar diikuti oleh newline

    cout << "Masukkan Nama : ";       // Menampilkan prompt "Masukkan Nama :" ke layar
    // cin >> nama;                   
    getline(cin, nama);               // Membaca input string lengkap (termasuk spasi) dari pengguna dan menyimpannya di variabel 'nama'

    cout << "Masukkan NIM : ";        // Menampilkan prompt "Masukkan NIM :" ke layar
    cin >> nim;                       // Membaca input integer dari pengguna dan menyimpannya di variabel 'nim'

    cout << "Masukkan KOM : ";        // Menampilkan prompt "Masukkan KOM :" ke layar
    cin >> kom;                       // Membaca input karakter dari pengguna dan menyimpannya di variabel 'kom'

    cout << "Masukkan IP : ";         // Menampilkan prompt "Masukkan IP :" ke layar
    cin >> ip;                        // Membaca input float dari pengguna dan menyimpannya di variabel 'ip'

    cout << "NAMA : " << nama << endl; // Menampilkan nilai dari variabel 'nama' di layar 
    cout << "NIM : " << nim << endl;   // Menampilkan nilai dari variabel 'nim' di layar 
    cout << "KOM : " << kom << endl;   // Menampilkan nilai dari variabel 'kom' di layar 
    cout << "IP : " << ip << endl;     // Menampilkan nilai dari variabel 'ip' di layar 
}
