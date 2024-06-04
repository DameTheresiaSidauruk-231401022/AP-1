#include <stdio.h>    
#include <conio.h>    

int main() {
    char nama[50];    // Mendeklarasikan array karakter untuk menyimpan nama dengan maksimal 49 karakter plus null terminator
    int nim;          // Mendeklarasikan variabel integer untuk menyimpan NIM
    char kom;         // Mendeklarasikan variabel karakter untuk menyimpan kelas atau seksi
    float ip;         // Mendeklarasikan variabel float untuk menyimpan nilai IP

    printf("Hello World\n");    // Menampilkan teks "Hello World" di layar

    printf("Masukkan nama : "); // Menampilkan prompt "Masukkan nama :" ke layar
    // scanf("%s", &nama);      
    gets(nama);                 // Membaca input string dari pengguna dan menyimpannya di variabel 'nama' 

    printf("Masukkan NIM : ");  // Menampilkan prompt "Masukkan NIM :" ke layar
    scanf("%d", &nim);          // Membaca input integer dari pengguna dan menyimpannya di variabel 'nim'

    printf("Masukkan KOM : ");  // Menampilkan prompt "Masukkan KOM :" ke layar
    scanf(" %c", &kom);         // Membaca input karakter dari pengguna dan menyimpannya di variabel 'kom'

    printf("Masukkan IP : ");   // Menampilkan prompt "Masukkan IP :" ke layar
    scanf("%f", &ip);           // Membaca input float dari pengguna dan menyimpannya di variabel 'ip'

    // printf("Nama : %s\n", nama); 
    printf("Nama : ");          // Menampilkan teks "Nama :" ke layar
    puts(nama);                 // Menampilkan string yang disimpan di variabel 'nama' di layar, diikuti oleh newline secara otomatis

    printf("NIM : %d\n", nim);  // Menampilkan nilai NIM di layar
    printf("KOM : %c\n", kom);  // Menampilkan nilai KOM di layar
    printf("IP : %.3f\n", ip);  // Menampilkan nilai IP di layar dengan format 3 angka desimal

    printf("Press any button to continue..."); // Menampilkan teks "Press any button to continue..." di layar
    getch();                    // Menunggu input karakter dari pengguna sebelum program berakhir, biasanya digunakan untuk membuat program pause sampai pengguna menekan sembarang tombol
}
