#include <iostream>
using namespace std;

class Operator{
  public:
       void program(){
        cout<<"Masukkan SKS = "; cin >> sks;
        cout<<"Masukkan MataKuliah = ";cin>>matkul;
        };

        long proses(int sks){
          if (sks==1){
            total+=120000;
          }
          else (sks>=2){
            total+=120000;
            diskon1=total*10/100;
            diskon2=total*5/100;
            return(total-(diskon1+diskon2)+ proses(sks-1));
          }

        void output(){
            cout<<"Nama Mahasiswa "
        }
        
  private:
      int sks, total;
      string matkul,nama;
      int diskon1,diskon2;
};

int main() {
  Operator run;
  cout << run.program() << endl << endl;
  cout << run.proses() << endl<<endl;
  cout << run.output();
  cout << endl;
  return 0;
}