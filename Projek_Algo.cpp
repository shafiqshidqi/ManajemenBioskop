#include <iostream>
#include <vector>
#include <iomanip>
#include <ctime>
using namespace std;

time_t now = time(0);
tm* ltm = localtime(&now);

struct Film {
    string judul_Film;
    string sinopsis;
    string produser;
    string genre;
    int durasi;
};

Film Movie[5] = {
    {"Avengers: Endgame", 
     "Para Avengers yang tersisa melakukan perjalanan waktu untuk \n"
     "              mengumpulkan Infinity Stones dan mengalahkan Thanos demi \n"
     "              menyelamatkan alam semesta.",
     "Kevin Feige", "Action", 181},

    {"The Walking Dead: The Movie", 
     "Rick Grimes yang diculik oleh CRM harus bertahan hidup dan\n"
     "              menemukan kebenaran di balik organisasi misterius ini.",
     "Frank Darabont", "Action & Horror", 140},

    {"Boboiboy: The Movie", 
     "Boboiboy dan teman-temannya melawan The Tengkotak yang ingin\n"
     "              mencuri kekuatan Ochobot demi menguasai dunia.",
     "Anas Abdul Aziz", "Animation", 100},

    {"Johnny English", 
     "Agen rahasia kocak Johnny English harus menggagalkan rencana \n"
     "              jahat Pascal Sauvage yang ingin merebut tahta Inggris.",
     "Tim Bevan", "Action & Comedy", 87},

    {"John Wick: Chapter 4", 
     "John Wick berjuang melawan musuh baru dan pasukan High Table \n"
     "              demi kebebasannya.",
     "Basil Iwanyk", "Action", 169}
};

struct makanan {
    string namaMakanan;
    int hargaMakanan;
};

makanan food[5] {
    {"Small Popcorn", 20000},
    {"Medium Popcorn", 35000},
    {"Large Popcorn", 40000},
    {"French Fries", 25000},
    {"Sausage Party", 30000}
};

struct minuman {
    string namaMinuman;
    int hargaMinuman;
};

minuman drink[5] {
    {"Soda", 20000},
    {"Milo Dinosaurs", 35000},
    {"Lemon Tea", 20000},
    {"Mineral Water", 15000},
    {"Milkshake", 30000}
};

struct jadwal_film {
    Film film;
    string tanggal_tayang;
    string studio;
    string jam_tayang;
    int harga_film;
    vector<string> seat;
};

jadwal_film schedule[10] {
    {"Avengers: Endgame",
     "17 April 2024",
     "1",
     }
}

void tampilkanmenu(string name) {
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  BABARSARI PLAZA - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                  #        Pemesanan Tiket        #                   | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                           ~~ Menu Utama ~~                           | " << endl;
    cout << " |     1. Data Tiket Pengunjung                                         | " << endl;
    cout << " |     2. Data Film On-going                                            | " << endl;
    cout << " |     3. Data Makanan dan Minuman                                      | " << endl;
    cout << " |     4. Exit                                                          | " << endl;
    cout << " |                                                                      | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0812-3456-7890  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
}

void tampilanmenu_film(string name){
    cout << "||  Selamat datang, " << name << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  BABARSARI PLAZA - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << ">=======================      DAFTAR FILM      ==========================<\n";
    for(int i = 0; i < 5; i++){
        cout << endl;
        cout << i+1 << ". " << Movie[i].judul_Film << endl << endl;
        cout << "   Genre    : " << Movie[i].genre << endl;
        cout << "   Durasi   : " << Movie[i].durasi << " Menit" << endl;
        cout << "   Produser : " << Movie[i].produser << endl;
        cout << "   Sinopsi  : " << Movie[i].sinopsis << endl << endl;
        cout << ">========================================================================<\n";
    }
}

void tampilanmenu_tiket(string name){
    int choice;
    cout << endl;
    cout << "||  Selamat datang, " << name << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  BABARSARI PLAZA - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << " |                  #        Pemesanan Tiket        #                   | " << endl;
    cout << " |                                                                      | " << endl;
    cout << " |                           ~~ Data Tiket ~~                           | " << endl;
    cout << " |     1. Tambah Tiket                                                  | " << endl;
    cout << " |     2. Hapus Tiket                                                   | " << endl;
    cout << " |     3. Lihat Daftar Tiket                                            | " << endl;
    cout << " |     4. Exit                                                          | " << endl;
    cout << " |                                                                      | " << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>>>  Contact : 0812-3456-7890  <<<<<<<<<<<<<<<<<<<<<<<" << endl << endl;
    cout << "Pilih Menu : "; cin >> choice;
    switch (choice) {
        case 1 :
            tambahtiket(name);

    }
}

void tambahtiket(string name){
     cout << "||  Selamat datang, " << name << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>  BABARSARI PLAZA - CINEMA XX  <<<<<<<<<<<<<<<<<<<<<<" << endl;
    cout << ">=======================      DAFTAR FILM      ==========================<\n";
    for(int i = 0; i < 5; i++){
        cout << endl;
        cout << i+1 << ". " << Movie[i].judul_Film << endl << endl;
        cout << "   Genre    : " << Movie[i].genre << endl;
        cout << ">========================================================================<\n";
    }
    cout << "Berapa Tiket yang dipesan : "
}

int main()
{
    string nama;
    int choice;
    cout << "Masukkan nama : ";
    getline(cin, nama);

    tampilkanmenu(nama);
    cout << "Pilih Menu : "; cin >> choice;

    switch (choice){
        case 1 : 
            tampilanmenu_tiket(nama);

        case 2 :    
            tampilanmenu_film(nama);
            break;
        default: cout << "Pilihan tidak valid!" << endl;
    }
    return 0;
}
