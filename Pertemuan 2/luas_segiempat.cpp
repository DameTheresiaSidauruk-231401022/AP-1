#include <iostream>    

using namespace std;   

int main() {
    float luas, p, l;  // Mendeklarasikan variabel float untuk menyimpan nilai luas, panjang (p), dan lebar (l)

    //? const float PHI = 3.14; 

    cout << "Masukkan panjang : ";  // Menampilkan prompt "Masukkan panjang :" ke layar
    cin >> p;                       // Membaca input float dari pengguna dan menyimpannya di variabel 'p'

    cout << "Masukkan lebar : ";    // Menampilkan prompt "Masukkan lebar :" ke layar
    cin >> l;                       // Membaca input float dari pengguna dan menyimpannya di variabel 'l'

    luas = p * l;                   // Menghitung luas dengan mengalikan panjang (p) dan lebar (l) dan menyimpan hasilnya di variabel 'luas'

    cout << "Luas = " << luas << endl; // Menampilkan hasil perhitungan luas ke layar 

    return 0;                       // Mengembalikan nilai 0, menandakan program selesai dengan sukses
}
