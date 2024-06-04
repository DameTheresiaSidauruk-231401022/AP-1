#include <iostream>  

using namespace std;  

void penjumlahan(int a, int b) {  // Fungsi untuk menjumlahkan dua bilangan dan mencetak hasilnya
    cout << a + b << endl;
}

void penjumlahanPointer(int* a, int* b) {  // Fungsi untuk menjumlahkan dua bilangan menggunakan pointer dan mencetak hasilnya
    *a += *b;
    cout << *a << endl;
}

void doubleValue(int* a) {  // Fungsi untuk menggandakan nilai bilangan menggunakan pointer
    *a *= 2;
}

int main() {  // Fungsi utama program

    system("cls");  

    // Pointer Declaration
    int number = 35;  // Variabel biasa
    int* pointer_number = &number;  // Pointer yang menunjuk ke variabel number

    // Printing information about variables and pointers
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Pointer Operation
    *pointer_number = 25;  // Mengubah nilai variabel menggunakan pointer
    // Printing information about variables and pointers after operation
    cout << "Isi variabel number = " << number << endl;
    cout << "Alamat memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;

    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5};  // Array of integers
    int* pointer_num = num;  // Pointer to the first element of the array
    
    // Printing information about array and pointer to array
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;

    *pointer_num += 5;
    cout << "Isi variabel num = " << num[0] << endl;
    cout << "Alamat memori variabel num = " << &num[0] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori vairabel pointer_num = " << &pointer_num << endl;

    // Pointer in Parameter
    int num1 = 5;
    int num2 = 7;
    
    // Calling functions with pointers as parameters
    penjumlahan(num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    penjumlahanPointer(&num1, &num2);
    cout << num1 << endl;
    cout << num2 << endl;

    // Pointer in Pointer
    int score = 4;
    int* pointer_score = &score;
    int** ptr_pointer_score = &pointer_score;
    // Printing information about pointer to pointer
    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    cout << "Isi variabel ptr_pointer_score " << pointer_score << " isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_pointer_score " << &ptr_pointer_score << endl;

    // Dynamic Pointer
    int* ptr = new int;  // Memory allocation for integer pointer
    *ptr = 30;  // Assigning value to dynamically allocated memory
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;
    delete ptr;  // Memory deallocation
    // Printing value of pointer after deallocation (undefined behavior)
    cout << "Isi variabel ptr " << *ptr << " alamat variabel ptr " << &ptr << endl;

    // Example Code
    int n;
    cout << "Masukkan sebuah angka : ";
    cin >> n;

    doubleValue(&n);  // Passing address of n to function for doubling its value
    cout << "Nilai angka setelah dikali 2 = " << n << endl;

    return 0;  // Mengakhiri fungsi main
}
