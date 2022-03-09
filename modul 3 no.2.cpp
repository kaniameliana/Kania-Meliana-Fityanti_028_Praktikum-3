#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
 char nama[20];
 char gender[20];
    cout<<endl;
    
 cout<<"Mengubah tulisan huruf kecil ke huruf kapital"<<endl;
 cout<<"--------------------------------"<<endl;
 cout<<"Masukkan tulisan : "; gets(nama);
 strupr(nama);
 cout<<endl;
 cout<<"Hasil perubahan pada tulisan menjadi huruf kapital : "<<nama<<endl;

getch();
}
