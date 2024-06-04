#include <iostream>  
#include <vector>    // Mengimpor pustaka vektor untuk mengelola kumpulan objek

using namespace std;  

class Mahasiswa {  // Deklarasi kelas Mahasiswa
    // Access Modifier
    private:  // Bagian pribadi dari kelas
        string nama, nim;  // Variabel nama dan nim dengan akses private
        float nilai;        // Variabel nilai dengan akses private

    // Access Modifier
    public:  // Bagian publik dari kelas
        // Constructor -> Fungsi yang langsung dipanggil ketika objek kelas diinstansiasi
        Mahasiswa(string nama, string nim, float nilai) {  // Mendefinisikan constructor dengan parameter
            this->nama = nama;  // Menginisialisasi variabel nama dengan nilai dari parameter
            this->nim = nim;    // Menginisialisasi variabel nim dengan nilai dari parameter
            this->nilai = nilai;  // Menginisialisasi variabel nilai dengan nilai dari parameter
        }

        // Getter Function -> berfungsi untuk mengembalikan data sebuah variabel yang memiliki akses private
        string getName() {  // Fungsi untuk mengambil nilai variabel nama
            return this->nama;  // Mengembalikan nilai variabel nama
        }

        void display() {  // Fungsi untuk menampilkan informasi mahasiswa
            cout << "Nama   : " << this->nama << endl;  // Menampilkan nama mahasiswa
            cout << "NIM    : " << this->nim << endl;   // Menampilkan NIM mahasiswa
            cout << "Nilai  : " << this->nilai << endl; // Menampilkan nilai mahasiswa
        }
};

int main() {  // Fungsi utama program

    system("cls");  

    Mahasiswa siswa1("Andi", "231401111", 45.6);  // Mendefinisikan objek siswa1 dari kelas Mahasiswa dengan menggunakan constructor
    siswa1.display();  // Memanggil fungsi display untuk menampilkan informasi siswa1

    //! Error
    //cout << siswa1.nama << endl;    // Mengakses variabel nama (error karena akses private)
    //siswa1.nama = "Budi";           // Mengubah nilai variabel nama (error karena akses private)
    //cout << siswa1.nama << endl;    // Mengakses variabel nama setelah diubah (error karena akses private)

    cout << siswa1.getName() << endl;  // Memanggil fungsi getName untuk mendapatkan nama mahasiswa

    vector<Mahasiswa> mahasiswa;  // Mendeklarasikan vektor mahasiswa untuk menyimpan objek Mahasiswa
    int n;  // Variabel untuk menyimpan jumlah mahasiswa
    string nama, nim;  // Variabel untuk menyimpan nama dan NIM mahasiswa
    float nilai;  // Variabel untuk menyimpan nilai mahasiswa

    cout << "Masukkan jumlah mahasiswa : ";  // Meminta input jumlah mahasiswa dari pengguna
    cin >> n;  // Mengambil jumlah mahasiswa dari input pengguna

    for(int i = 0; i < n; i++) {  // Melakukan iterasi sebanyak jumlah mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;  // Menampilkan informasi iterasi saat ini

        cin.get();  // Mengonsumsi karakter newline sebelum mengambil string
        cout << "Masukkan nama : ";  // Meminta input nama mahasiswa
        getline(cin, nama);  // Mengambil nama mahasiswa dari input pengguna

        cout << "Masukkan NIM : ";  // Meminta input NIM mahasiswa
        cin >> nim;  // Mengambil NIM mahasiswa dari input pengguna

        cout << "Masukkan nilai : ";  // Meminta input nilai mahasiswa
        cin >> nilai;  // Mengambil nilai mahasiswa dari input pengguna

        Mahasiswa mhs(nama, nim, nilai);  // Mendeklarasikan objek Mahasiswa dengan data yang diinputkan
        mahasiswa.push_back(mhs);  // Menambahkan objek Mahasiswa ke dalam vektor mahasiswa
    }

    for(int i = 0; i < n; i++) {  // Melakukan iterasi sebanyak jumlah mahasiswa
        cout << "Mahasiswa " << i + 1 << endl;  // Menampilkan informasi iterasi saat ini
        mahasiswa[i].display();  // Memanggil fungsi display untuk menampilkan informasi mahasiswa ke-i
    }

    return 0;  // Mengakhiri fungsi main
}
