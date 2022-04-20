#include <iostream>
using namespace std;
class SKS {
public:
  void rekursif(int);
private:
  int nim,jumlahsks,totalp,i,hsl,hsl2,totalp2;
  char nama[50],matkul[200];
};

void SKS::rekursif(int n){
  if( 1 <= n){
  cout<<"Masukkan Nama  : ";
  cin>>nama;
  cout<<"Masukkan NIM  :";
  cin>>nim;
  cout<<"Masukkan Jumlah SKS  : ";
  cin>>jumlahsks;
  cout<<"Masukkan daftar Mata Kuliah  : ";
  cin>>matkul;
  totalp=jumlahsks*125000;
  hsl=totalp*0.2;
  totalp2=totalp-hsl;
  cout<<"\nTotal Pembayaran : "<<totalp<<endl;
    
  cout<<"Diskon 20% : "<<hsl<<endl;
  cout<<"\nTotal Pembayaran Akhir: "<<totalp2<<endl;
  cout<<endl;
  
  rekursif(n-1);

    }
  
}

int main() {
  int a;
  cout<<"Masukkan Jumlah Mahasiswa : ";cin>>a;
  SKS x;
  x.rekursif(a);
  return 0;
} 