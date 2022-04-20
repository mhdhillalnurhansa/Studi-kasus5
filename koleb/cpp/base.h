#include <iostream>
using namespace std;
class kasussks {
private:
  string nim, nama;
  char lagi;
  int pilih, jum_sks, total_bayar;

public:
  void input() {
    cout << "masukkan nama : ";
    cin >> nama;
    cout << "masukkan nim : ";
    cin >> nim;

  menu:
    cout << "pilih mata kuliah" << endl;
    cout << "1. Algoritma Pemrograman" << endl;
    cout << "2. Pemrograman Web" << endl;
    cout << "3. Matematika Diskrit" << endl;
    cout << "masukkan pilihan : ";
    cin >> pilih;

    switch (pilih) {

    case 1:
      cout << "Matkul yang dipilih : Algoritma Pemrograman" << endl;
      cout << "masukkan jumlah sks : ";
      cin >> jum_sks;
      break;

    case 2:
      cout << "Matkul yang dipilih : Pemograman Web" << endl;
      cout << "masukkan jumlah sks : ";
      cin >> jum_sks;
      break;

    case 3:
      cout << "Matkul yang dipilih : Matematika Diskrit" << endl;
      cout << "masukkan jumlah sks : ";
      cin >> jum_sks;
      break;
    }
  }
  void proses() {
    int sks = 150000;
    total_bayar = (jum_sks * sks) - (jum_sks * sks * 25 / 100);
  }
  void output() {
    // string matkul[4]={"","Algoritma Pemograman","Pemograman Web","Matematika
    // Diskrit"};
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    // cout << "Mata kuliah yang diambil : " << matkul[pilih] <<endl;
    cout << "Jumlah SKS :" << jum_sks << endl;
    cout << "Total Pembayaran : " << total_bayar;
  }
};