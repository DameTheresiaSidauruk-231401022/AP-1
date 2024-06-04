#include <iostream>  
#include <vector>    

using namespace std;  

int main() { 

    system("cls");  

    //? Vector Declaration and Initialization
    vector<string> nama_karyawan = {"Andi", "Budi", "Santi", "Doni", "Yanto"};

    //? Accessing Elements of Vector using indexing
    for (int i = 0; i < nama_karyawan.size(); i++) {
        cout << nama_karyawan[i] << endl;
    }

    // Accessing Elements of Vector using Range-based for loop
    for (string karyawan : nama_karyawan) {  // Menggunakan For Each Loop
        cout << karyawan << endl;
    } 

    // Add Data to Vector
    nama_karyawan.push_back("Wawan");  // Menambahkan data ke akhir vektor

    // Delete Data from Vector
    nama_karyawan.pop_back();  // Menghapus data dari akhir vektor
    nama_karyawan.erase(nama_karyawan.begin() + 3);  // Menghapus data dari indeks ke-3 dari vektor

    return 0;  // Mengakhiri fungsi main
}
