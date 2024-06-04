#include <iostream>  
#include <vector>    // Mengimpor pustaka vektor untuk mengelola kumpulan objek

using namespace std;  

//? Struct Declaration
struct Mahasiswa {  // Mendeklarasikan struct Mahasiswa untuk menyimpan data mahasiswa
    string nama, nim;  // Mendefinisikan dua atribut string: nama dan nim
    float nilai;        // Mendefinisikan satu atribut float: nilai
};

typedef struct {  // Mendefinisikan tipe data baru menggunakan typedef
    string nama, nim;  // Mendefinisikan dua atribut string: nama dan nim
    float nilai;        // Mendefinisikan satu atribut float: nilai
} mhs;  // Membuat alias untuk struct tanpa nama dengan nama "mhs"

int main() {  // Fungsi utama program

    system("cls");  

    //? Struct Initialization
    Mahasiswa mhs;  // Mendeklarasikan variabel mhs dengan tipe struct Mahasiswa
    vector<Mahasiswa> mahasiswa;  // Membuat vektor untuk menyimpan objek Mahasiswa
    int n;  // Variabel untuk menyimpan jumlah mahasiswa

    cout << "Masukkan banyak mahasiswa : ";  // Meminta input jumlah mahasiswa dari pengguna
    cin >> n;  // Mengambil jumlah mahasiswa dari input pengguna

    for(int i = 0; i < n; i++) {  // Melakukan iterasi sebanyak jumlah mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;  // Menampilkan informasi iterasi saat ini

        cin.get();  // Mengonsumsi karakter newline sebelum mengambil string
        cout << "Masukkan nama : ";  // Meminta input nama mahasiswa
        getline(cin, mhs.nama);  // Mengambil nama mahasiswa dari input pengguna

        cout << "Masukkan NIM : ";  // Meminta input NIM mahasiswa
        cin >> mhs.nim;  // Mengambil NIM mahasiswa dari input pengguna

        cout << "Masukkan nilai : ";  // Meminta input nilai mahasiswa
        cin >> mhs.nilai;  // Mengambil nilai mahasiswa dari input pengguna

        mahasiswa.push_back(mhs);  // Menambahkan objek Mahasiswa ke dalam vektor mahasiswa
    }

    for(int i = 0; i < n; i++) {  // Melakukan iterasi sebanyak jumlah mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;  // Menampilkan informasi iterasi saat ini
        cout << "Nama : " << mahasiswa[i].nama << endl;  // Menampilkan nama mahasiswa
        cout << "NIM : " << mahasiswa[i].nim << endl;    // Menampilkan NIM mahasiswa
        cout << "Nilai : " << mahasiswa[i].nilai << endl;  // Menampilkan nilai mahasiswa
    }

    return 0;  // Mengakhiri fungsi main
}
