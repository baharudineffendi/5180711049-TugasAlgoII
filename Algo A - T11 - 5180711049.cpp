#include <iostream>

using namespace :: std;
double z (double pokok,double pangkat){
    if (pangkat==0)
        return 1;
    else
    return z(pokok, pangkat - 1)*pokok;

}

void Hasil(string pilih,double pokok,double pangkat){
string  positif,negatif;
if (pilih=="positif")
    cout<<z (pokok,pangkat);
else if (pilih=="negatif")
    cout<<1/z (pokok,pangkat);
else cout<<"Mohon lebih Teliti Lagi";

}
main (){
int pokok,pangkat;
string pilih;
cout<<"Masukan pilihan Pangkat anda [positif/negatif] = ";cin>>pilih;
cout<<"Masukan Bil Pokok = ";cin>>pokok;
cout<<"Masukan Pangkat   = ";cin>>pangkat;
cout<<"HASIL             = ";Hasil(pilih,pokok,pangkat);cout<<endl;




















cout<<endl;
cout<<"Created By BAHARUDIN EFFENDI";
cout<<endl;
}
