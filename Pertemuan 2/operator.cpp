#include <iostream>   

using namespace std;   

int main() {
    int a, b;  // Mendeklarasikan variabel integer a dan b

    system("CLS");  

    // Assignment Operator (=)
    a = 3;  // Menggunakan operator penugasan untuk memberikan nilai 3 kepada variabel a
    b = 5;  // Menggunakan operator penugasan untuk memberikan nilai 5 kepada variabel b

    
    // Arithmetical Operator (+, -, *, /, %)
    // int tambah = a + b;  // Mendeklarasikan variabel tambah dan menginisialisasinya dengan hasil penjumlahan a dan b
    // int kurang = a - b;  // Mendeklarasikan variabel kurang dan menginisialisasinya dengan hasil pengurangan a dan b
    // int kali = a * b;  // Mendeklarasikan variabel kali dan menginisialisasinya dengan hasil perkalian a dan b
    // float bagi = (float) a / (float) b;  // Mendeklarasikan variabel bagi dan menginisialisasinya dengan hasil pembagian a dan b, dengan type casting untuk memastikan pembagian float
    // int modulo = a % b;  // Mendeklarasikan variabel modulo dan menginisialisasinya dengan hasil sisa bagi a dan b

    // cout << "Hasil penjumlahan = " << tambah << endl;  // Menampilkan hasil penjumlahan ke layar
    // cout << "Hasil pengurangan = " << kurang << endl;  // Menampilkan hasil pengurangan ke layar
    // cout << "Hasil perkalian = " << kali << endl;  // Menampilkan hasil perkalian ke layar
    // cout << "Hasil pembagian = " << bagi << endl;  // Menampilkan hasil pembagian ke layar
    // cout << "Hasil sisa bagi = " << modulo << endl;  // Menampilkan hasil sisa bagi ke layar

    // Relational Operator
    // cout << (a == b) << endl;  // Menampilkan hasil perbandingan apakah a sama dengan b
    // cout << (a > b) << endl;  // Menampilkan hasil perbandingan apakah a lebih besar dari b
    // cout << (a >= b) << endl;  // Menampilkan hasil perbandingan apakah a lebih besar atau sama dengan b
    // cout << (a < b) << endl;  // Menampilkan hasil perbandingan apakah a lebih kecil dari b
    // cout << (a <= b) << endl;  // Menampilkan hasil perbandingan apakah a lebih kecil atau sama dengan b
    // cout << (a != b) << endl;  // Menampilkan hasil perbandingan apakah a tidak sama dengan b

    // Logical Operator (&&, ||, !)
    // cout << (true && true) << endl;  // Menampilkan hasil dari true AND true
    // cout << (true && false) << endl;  // Menampilkan hasil dari true AND false
    // cout << (false && true) << endl;  // Menampilkan hasil dari false AND true
    // cout << (false && false) << endl;  // Menampilkan hasil dari false AND false

    // cout << (true || true) << endl;  // Menampilkan hasil dari true OR true
    // cout << (true || false) << endl;  // Menampilkan hasil dari true OR false
    // cout << (false || true) << endl;  // Menampilkan hasil dari false OR true
    // cout << (false || false) << endl;  // Menampilkan hasil dari false OR false

    // cout << !true << endl;  // Menampilkan hasil NOT true
    // cout << !false << endl;  // Menampilkan hasil NOT false

    // Bitwise Operator (&, |, ^, ~, <<, >>) --> Biner
    // cout << (5 & 7) << endl;  // Menampilkan hasil AND bitwise antara 5 dan 7
    // cout << (5 | 7) << endl;  // Menampilkan hasil OR bitwise antara 5 dan 7
    // cout << (5 ^ 7) << endl;  // Menampilkan hasil XOR bitwise antara 5 dan 7
    // cout << (~7) << endl;  // Menampilkan hasil NOT bitwise dari 7
    // cout << (7 << 2) << endl;  // Menampilkan hasil left shift bitwise dari 7 dengan 2 posisi
    // cout << (7 >> 2) << endl;  // Menampilkan hasil right shift bitwise dari 7 dengan 2 posisi

    // Shorthand
    // a += 7;  // a = a + 7
    // cout << a << endl;  // Menampilkan nilai baru dari a

    // a -= 7;  // a = a - 7
    // cout << a << endl;  // Menampilkan nilai baru dari a

    // a *= 7;  // a = a * 7
    // cout << a << endl;  // Menampilkan nilai baru dari a

    // a /= 7;  // a = a / 7
    // cout << a << endl;  // Menampilkan nilai baru dari a

    // Increment & Decrement
    // Pre Increment
    // cout << a << endl;  // Menampilkan nilai asli dari a
    // cout << ++a << endl;  // Menampilkan nilai a setelah pre increment (a dinaikkan dulu baru ditampilkan)

    // cout << b << endl;  // Menampilkan nilai asli dari b
    // cout << ++b << endl;  // Menampilkan nilai b setelah pre increment (b dinaikkan dulu baru ditampilkan)

    // Post Increment
    // cout << a++ << endl;  // Menampilkan nilai a sebelum post increment (a ditampilkan dulu baru dinaikkan)
    // cout << a << endl;  // Menampilkan nilai a setelah post increment

    // cout << b++ << endl;  // Menampilkan nilai b sebelum post increment (b ditampilkan dulu baru dinaikkan)
    // cout << b << endl;  // Menampilkan nilai b setelah post increment

    // Pre Decrement
    // cout << a << endl;  // Menampilkan nilai asli dari a
    // cout << --a << endl;  // Menampilkan nilai a setelah pre decrement (a diturunkan dulu baru ditampilkan)

    // cout << b << endl;  // Menampilkan nilai asli dari b
    // cout << --b << endl;  // Menampilkan nilai b setelah pre decrement (b diturunkan dulu baru ditampilkan)

    // Post Decrement
    // cout << a-- << endl;  // Menampilkan nilai a sebelum post decrement (a ditampilkan dulu baru diturunkan)
    // cout << a << endl;  // Menampilkan nilai a setelah post decrement

    // cout << b-- << endl;  // Menampilkan nilai b sebelum post decrement (b ditampilkan dulu baru diturunkan)
    // cout << b << endl;  // Menampilkan nilai b setelah post decrement

    return 0;  // Mengembalikan nilai 0, menandakan program selesai dengan sukses
}  
