#include <iostream>
using namespace std;
 

 char nama[20], nim[15], prodi[20], mk[20];
 int sks, semester, total, disc1, disc2;

long proses(int sks){
  if (sks==1){
            total+=120000;
          }
          else (sks>=2){
            total+=120000;
            disc1=bayar.total*10/100;
            bayar.disc2=bayar.total*5/100;
            return(bayar.total-(bayar.disc1+bayar.disc2)+ proses(bayar.sks-1));
          }
};

int main(){
 int disc1, disc2, byr;  
 cout << "Nama mahasiswa            : "; cin >> bayar.nama;
 cout << "NIM mahasiswa             : "; cin >> bayar.nim;
 cout << "Prodi                     : "; cin >> bayar.prodi;
  
 input:
 cout << "Semester                  : "; 
 cin >> bayar.semester;
 if (bayar.semester < 1)
 {  
  cout << "Input tidak sesuai ";
  goto input;  
 }
 cout << "Mata Kuliah               : "; cin >> bayar.mk;
 cout << "Jumlah SKS                : "; cin >> bayar.sks;

 output:
 cout << "NIM         : " << bayar.nim <<endl;
 cout << "Nama        : " << bayar.nama<<endl;
 cout << "Mata Kuliah : " << bayar.mk  <<endl;
 cout << "Jumlah SKS  : " << bayar.sks <<endl;
 cout << endl;
 cout << "Total Biaya SKS : " << byr <<endl;
 cout << "Total Diskon    : " << bayar.disc2 <<endl;
 cout << "Total Pembayaran: " << byr-disc2 <<endl;
 return 0;
}