#include <iostream.h>
#include <conio.h>

main () {
char Nama [25],Nim[8],NilaiHuruf;
float NT1,NT2,NT3,NM,NF,TNT,TNTA,TNM,TNF,TNA;

	cout<<"Nilai Akhir Mahasiswa \n";
   cout<<"Masukkan Nim Mahasiswa ="; cin>>Nim;
   cout<<"Masukkan Nama Mahasiswa ="; cin>>Nama;
   cout<<"Masukkan Nilai Tugas 1 ="; cin>>NT1;
   cout<<"Masukkan Nilai Tugas 2 ="; cin>>NT2;
   cout<<"Masukkan Nilai Tugas 3 ="; cin>>NT3;
   cout<<"Masukkan Nilai MID ="; cin>>NM;
   cout<<"Masukkan Nilai Final ="; cin>>NF;

   TNT =(NT1 + NT2 + NT3)/3;
   TNTA = TNT *20/100;
   TNM = NM *40/100;
   TNF = NF *40/100;
   TNA = TNTA + TNM + TNF;

   if ((TNA >= 80) && (TNA <= 100))
   {NilaiHuruf = 'A';}

    else if ((TNA >= 70) && (TNA <= 79))
   {NilaiHuruf = 'B';}

   else if ((TNA >= 60) && (TNA <= 69))
   {NilaiHuruf = 'C';}

   else if ((TNA >= 50) && (TNA <= 59))
   {NilaiHuruf = 'D';}

   else if ((TNA >=0) && (TNA<= 50))
   {NilaiHuruf = 'E';}
   cout<<endl;
   cout <<"Nim Mahasiswa\t :"<<Nim<<endl;
   cout <<"Nama Mahasiswa\t :"<<Nama<<endl;
   cout <<"Nilai Akhir Mahasiswa\t :"<<TNA<<endl;
   cout <<"Prestasi Mahasiswa\t :"<<NilaiHuruf<<endl;
   getch();}


