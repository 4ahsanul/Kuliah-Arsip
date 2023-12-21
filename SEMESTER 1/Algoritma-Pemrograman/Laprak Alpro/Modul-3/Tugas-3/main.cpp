//NAMA PROGRAM = MENU TAMPILAN BIAYA OPERASI PENYAKIT MATA DAN JANTUNG


//Note : Semua pilihan akan mempengaruhi alur dari program yang ita jalankan

#include <iostream>
using namespace std;
int main()
{
    int no_menu;

    cout << "==========MENU BIAYA OPERASI==========" << endl; //Nama menu
    cout << "1. Biaya Operasi Mata" << endl; // Pilihan 1
    cout << "2. Biaya Operasi Jantung" << endl; // Pilhan 2
    cout << "Masukkan nomer (1/2) \t: "; // User diperintahkan untuk memasukkan nomer 1/2, yang merupakan pilihan Biaya Operasi
    cin >> no_menu; //User disini dapat memasukkan no Menu yang nanti dapat dibaca oleh program
    cout << endl;

    //=====MENU PILIHAN PENYAKIT MATA=====
    if (no_menu == 1){ //Jika user memilih atau memasukkan menu no 1, maka menu ini (menu 1) yang akan ditampilkan
        cout << "==========JENIS PENYAKIT MATA==========" << endl; //Nama Menu
        cout << "1. Katarak" << endl; //Pilihan 1 -------------|
        cout << "2. Plus atau Minus" << endl; // Pilihan 2 ----|----------------Pilihan ini nanti yang akan menentukan alur dari program yang akan ditampilkan yaitu harga biaya operasi
        cout << "3. Silinder" << endl; // Pilihan 3 -----------|
        cout << "Masukkan nomer penyakit mata (1-3) \t: "; // User diperintahkan untuk memasukkan salah satu jenis penyakit diatas
        cin >> no_menu; // User disimi dapat memasukkan jenis penyakit yang nanti dapat dinaca atau diproses lagi
        cout << endl;

    //=====HARGA OPERASI MATA=====
        switch (no_menu){ //------------------------------------------------------- O Switch adalah pernyataan penyeleksian berdasarkan conditional expression untu mengendalikan alur pemrograman
        case 1:
            cout << "Biaya Operasi Katarak \t= Rp. 7.500.0000" << endl; // Case 1, jika user memilih no 1 (Katarak) pada menu maka, output yang keluar adalah dari case 1
            break;
        case 2:
            cout << "Biaya Operasi Plus atau Minus \t= Rp. 5.000.000" << endl; // Case 2, jika user memilih no 2 (Plus atau Minus) maka, output yang keluar adalah dari case 2
            break;
        case 3:
            cout << "Biaya Operasi Silinder \t= Rp. 4.000.000" << endl; // Case 3, jika user memilih no 3 (Silinder) maka, output yang keluar adalah dari case 3
            break;
        }
    } //Program bagian Penyakit mata telah berakhir disini, selanjutnya akan ada Program ke 2, jika user tidak memilih no_menu 1

    //=====MENU PILIHAN PENYAKIT JANTUNG=====
    else if (no_menu == 2){ //Jika user tidak memilih atau memasukkan menu no 1, melainkan menu 2, maka menu yang ditampilkanpun berbeda, menu yang akan ditampilkan adalah menu 2
        cout << "==========JENIS PENYAKIT JANTUNG==========" << endl; //Nama menu
        cout << "1. Jantung Koroner" << endl; // Pilhan 1 ------|
        cout << "1. Katup Jantung" << endl; // Pilihan 2 -------|------------Pilihan ini nanti yang akan menentukan alur dari program yang akan ditampilkan yaitu harga biaya operasi
        cout << "3. Otot Jantung" << endl; //Pilihan 3 ---------|
        cout << "Masukkan nomer penyakit jantung (1-3 ) \t: ";
        cin >> no_menu;
        cout << endl;


    //=====HARGA OPERASI JANTUNG=====
        switch (no_menu){ //----------------------------------------------------- O Switch adalah pernyataan penyeleksian berdasarkan conditional expression untu mengendalikan alur pemrograman
        case 1:
            cout << "Biaya Operasi Jantung Koroner \t= Rp. 500.000.000" << endl; //Case 1, jika user memilih no 1 (Jantung Koroner) pada menu maka, output yang keluar adalah dari case 1
            break;
        case 2:
            cout << "Biaya Operasi Katup Jantung \t= Rp. 350.000.000" << endl; //Case 1, jika user memilih no 2 (Katup Jantung) pada menu maka, output yang keluar adalah dari case 2
            break;
        case 3:
            cout << "Biaya Operasi Otot Jantung \t= Rp. 450.000.000" << endl; //Case 1, jika user memilih no 3 (Otot Jantung) pada menu maka, output yang keluar adalah dari case 3
            break;
        }
    }

    else {
        cout << "========MOHON MASUKKAN ANGKA YANG ADA DI MENU SAJA======="; //Jika user tidak memasukkan angka yang sesuai dengan data yang telah tersedia dibaris 13 dan 14 (1 dan 2), maka program akan memunculkan baris ini
    }

    return 0; //Program berakhir dengan return 0

}
