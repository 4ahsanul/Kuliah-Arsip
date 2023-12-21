#include <iostream>

using namespace std;

int main()
{
    //  deklarasi variabel username dan password dengan tipe data string
    string username, password;
    // deklarasi variabel kesempatan dengan tipe data integer dan langsung diisi dengan 0
    int kesempatan = 0;
    // deklarasi variabel isLogIn dengan tipe data boolean dan langsung diisi dengan nilai fals
    bool isLogIn = false;

    //  ketika kesempatan tidak sama dengan 3 dan isLogIn bernilai false, maka akan melakukan perulangan
    while(kesempatan != 3 && isLogIn == false){
        // mencetak tulisan Masukkan username
        cout << "Masukkan username : ";
        //  input ke variabel username
        cin >> username;
        //  mencetak tulisan Masukkan password
        cout << "Masukkan password : ";
        //  input ke variabel password
        cin >> password;

        // jika usernma bernilai admin dan password bernilai admin maka
        if(username == "admin" && password == "admin") {
            // mencetak tulisan Anda berhasil login
            cout << "Anda berhasil login\n";
            //  variabel isLogIn diganti isinya yang tadinya false menjadi true
            isLogIn = true;
        // jika tidak
        } else {
            //  mencetak tulisan
            cout << "Username atau password anda salah\n\n";
            // kesempatan = kesempatan + 1
            kesempatan++;
        }
    }
    //  jika kesempatan bernilai 3
    if(kesempatan == 3){
        // mencetak tulisan Akun terblokir
        cout << "Akun terblokir";
    }


    return 0;
}
