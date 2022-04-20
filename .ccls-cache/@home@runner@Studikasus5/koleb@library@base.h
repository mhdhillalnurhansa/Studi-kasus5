#include <iostream>
using namespace std;
class kasussks{
private :
string nim, nama;
char pilih, lagi;
int jum_sks,total_bayar;
public:
int sks = 150000;
string matkul[3]={Algoritma Pemograman,Pemograman Web,Matematika Diskrit}
void input(){
  cout << "masukkan nama : ";
  cin >> nama;
  cout << "masukkan nim : ";
  cin >> nim;

  menu : 
  cout <<"pilih mata kuliah"<<endl;
  cout <<"1. Algoritma Pemrograman"<< endl;
  cout <<"2. Pemrograman Web"<< endl;
  cout <<"3. Matematika Diskrit"<< endl;
  cout << "masukkan pilihan : ";
  cin >> pilih;

  if(pilih == 1)
  {
    cout <<"Algoritma Pemrograman";
    cout <<"masukkan jumlah sks : ";
    cin >> jum_sks;
    cout <<"pilih mata kuliah lain ? <y/n>";
    cin >> lagi;
      if (lagi == y)
        goto menu;
    
  }
  else if(pilih == 2){
    cout <<"Pemograman Web";
    cout <<"masukkan jumlah sks : ";
    cin >> jum_sks;
    cout <<"pilih mata kuliah lain ? <y/n>";
    cin >> lagi;
      if (lagi == y)
        goto menu;
    
  }
  else if(pilih == 3)
  {
    cout <<"Matematika Diskrit";
    cout <<"masukkan jumlah sks : ";
    cin >> jum_sks;
    cout <<"pilih mata kuliah lain ? <y/n>";
    cin >> lagi;
      if (lagi == y)
        goto menu;
  }
}
void proses(){
  total_bayar=(jum_sks*sks)-(jum_sks*sks*25/100)
}
void output(){
  cout << "Nama : " << nama << endl;
  cout << "NIM : " << nim << endl;
  cout << "Mata kuliah yang diambil : " << matkul[pilih] <<endl;
  cout << "Total Pembayaran : " << total_bayar;
}
};