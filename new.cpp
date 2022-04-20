#include <iostream> 
using namespace std;
 
struct mhs { 
 char nama[20], nim[15], prodi[20], mk[20];
 int sks, program;
}
bayar;
 
int main()
{
 int var, var2, tetap;  
 cout << "Nama mahasiswa            : "; cin >> bayar.nama;
 cout << "NIM mahasiswa             : "; cin >> bayar.nim;
 cout << "Prodi                     : "; cin >> bayar.prodi;
 input:
 cout << "Semester                  : "; 
 cin >> bayar.program;
 if (bayar.program < 1)
 {  
  cout << "Program tidak sesuai ";
  goto input;  
 }
 cout << "Mata Kuliah: "; cin >> bayar.mk;
 cout << "Jumlah SKS : "; cin >> bayar.sks;
 
 for (bayar.program == 1){
  var = bayar.sks * 120000;   
  cout << "NIM         : " << bayar.nim <<endl;
  cout << "Nama        : " << bayar.nama<<endl;
  cout << "Mata Kuliah : " << bayar.mk  <<endl;
  cout << "Biaya SKS   : " << var;
  
 }else if (bayar.program >= 2){
  var = bayar.sks * 120000 * 10/100;
  var2= var * 5/100;  
  cout << "NIM         : " << bayar.nim <<endl;
  cout << "Nama        : " << bayar.nama<<endl;
  cout << "Mata Kuliah : " << bayar.mk  <<endl;
  cout << "Biaya SKS   : " << var2; 
  }
 return 0;
}