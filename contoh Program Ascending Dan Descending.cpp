#include<iostream>
#include<conio.h>

using namespace::std;
int data[10],data2[10];
int n;

void tukar(int a, int b){
   int t;
   t=data[b];
   data[b]=data[a];
   data[a]=t;
}
void input(){
   cout<<"Masukkan jumlah data = ";
   cin>>n;
   for(int i=0;i<n;i++)
   {
      cout<<"Masukkan data ke - "<<(i+1)<<" = " ;
      cin>>data[i];
      data2[i]=data[i];
   }
}

void selection_sort_Ascending(){
        int pos,i,j;
   for(i=0;i<n-1;i++)
   {
      pos=i;
      for(j=i+1;j<n;j++)
      {
        if(data[j]<data[pos])pos=j;
      }
      if(pos!=i) tukar(pos,i);
   }
   cout<<"selection sort Ascending"<<endl;
   cout<<"Data : "<<endl;
   for(int i=0;i<n;i++)
   {
        cout<<data[i]<<" ";
   }
   cout<<endl;
}
void Halim(int Aku[], int Kamu, int Kita){
int Sorting;

Sorting    = Aku [Kamu];
Aku [Kamu] = Aku [Kita];
Aku [Kita] = Sorting;
}
 main(){
cout<<"==================== Sorting Ascending ====================";cout<<endl;
 input();
   selection_sort_Ascending();
      cout<<endl;cout<<endl;cout<<endl;
cout<<"==================== Sorting Descending ====================";cout<<endl;

cout<<"  Sortinglah Data-Data Ini dengan Descending "<<endl<<endl;
cout<<"  [ 4, 8, 5, 9, 6, 2, 7, 5, 9, 5 ] "<<endl<<endl;
cout<<"  Hasilnya Adalah : "<<endl<<endl;

int Dia,Saya;
int Angka[]={4,8,5,9,6,2,7,5,9,5};
const int size = sizeof(Angka)/sizeof (Angka[0]);
for(Dia = size-1;Dia >0;Dia--)
for(Saya= 0;Saya<Dia;Saya++)

if(Angka[Saya]<Angka[Saya+1])
Halim(Angka,Saya,Saya+1);
for(Dia=0; Dia<size; Dia++)
cout<<"  "<<Angka[Dia];
cout<<endl;
}

