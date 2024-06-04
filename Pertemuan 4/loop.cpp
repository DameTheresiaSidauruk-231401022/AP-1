#include <iostream>  

using namespace std;  

int main() {
    // Goto Label
    a:  // Label a
        cout << "Hello World" << endl;  // Menampilkan "Hello World" ke layar
        goto d;  // Lompat ke label d
    b:  // Label b
        cout << "Universitas Sumatera Utara" << endl;  // Menampilkan "Universitas Sumatera Utara" ke layar
        return 0;  // Mengakhiri program
    c:  // Label c
        cout << "Fasilkom-TI" << endl;  // Menampilkan "Fasilkom-TI" ke layar
        goto b;  // Lompat ke label b
    d:  // Label d
        cout << "Ilmu Komputer" << endl;  // Menampilkan "Ilmu Komputer" ke layar
        goto c;  // Lompat ke label c

    int i = 1;  // Mendeklarasikan dan menginisialisasi variabel i dengan nilai 1
    genap:  // Label genap
        if (i % 2 == 0) {  // Memeriksa apakah nilai i genap
            cout << i << " ";  // Jika genap, menampilkan nilai i ke layar diikuti spasi
        }
        i++;  // Increment i
    if (i <= 10) {  // Memeriksa apakah nilai i kurang dari atau sama dengan 10
        goto genap;  // Jika kondisi benar, lompat ke label genap
    }

    // While
    i = 1;  // Menginisialisasi ulang variabel i dengan nilai 1
    while (i <= 10) {  // Memulai loop while dengan kondisi i kurang dari atau sama dengan 10
        if (i % 2 == 0) {  // Memeriksa apakah nilai i genap
            cout << i << " ";  // Jika genap, menampilkan nilai i ke layar diikuti spasi
        }
        i++;  // Increment i
    }
    cout << endl;  // Menambahkan newline setelah loop while

    // Do While
    i = 1;  // Menginisialisasi ulang variabel i dengan nilai 1
    do {
        cout << i << endl;  // Menampilkan nilai i ke layar diikuti newline
    } while (i <= 0);  // Mengeksekusi loop do-while setidaknya sekali, karena kondisi diakhir loop bernilai false

    // For
    for (int i = 1; i <= 10; i += 2) {  // Memulai loop for dengan inisialisasi i = 1, kondisi i <= 10, dan increment i dengan 2 setiap iterasi
        cout << "Hello World" << endl;  // Menampilkan "Hello World" ke layar pada setiap iterasi loop
    }

    for (int i = 1; i <= 5; i++) {  // Memulai loop for dengan inisialisasi i = 1, kondisi i <= 5, dan increment i dengan 1 setiap iterasi
        for (int j = 1; j <= 5; j++) {  // Loop bersarang dengan inisialisasi j = 1, kondisi j <= 5, dan increment j dengan 1 setiap iterasi
            cout << "* ";  // Menampilkan "*" diikuti spasi pada setiap iterasi loop dalam
        }
        cout << endl;  // Menambahkan newline setelah selesai dengan loop dalam
    }

    for (int i = 1; i <= 5; i++) {  // Memulai loop for dengan inisialisasi i = 1, kondisi i <= 5, dan increment i dengan 1 setiap iterasi
        for (int j = 1; j <= i; j++) {  // Loop bersarang dengan inisialisasi j = 1, kondisi j <= i, dan increment j dengan 1 setiap iterasi
            cout << "* ";  // Menampilkan "*" diikuti spasi pada setiap iterasi loop dalam
        }
        cout << endl;  // Menambahkan newline setelah selesai dengan loop dalam
    }
}
