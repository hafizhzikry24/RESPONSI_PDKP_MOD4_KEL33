#include<iostream>
#include<stdio.h>
#include<process.h>
#include<string.h>

using namespace std;
void enkripsi ();
void dekripsi ();
void keluar ();

int main(){

 cout << "\tKelompok 33 shift 2\n" << endl;
        cout << "\tMuhammad hafizh zikry 21120120120034" << endl;
        cout << "\tMuhammad rizal qowi al-azis 21120120140172" << endl;
        cout << "\tMuhammad irmawan 21120120130125" << endl;
        cout << "\tNaufal daffa' riswanda' 21120120130107\n\n\n" << endl;
       


	enkripsi ();


	dekripsi ();


}
void enkripsi (){
int a,b,c;
char teks [100],kunci[100];
cout<<"bagian enkripsi"<<endl;
cout<<"masukkan teks : ";
cin>>teks;
cout<<"masukkan NOMOR KELOMPOK : ";
cin>>kunci;
cout<<"enkripsi : ";
for (a=0,b=0; a<strlen(teks); a++,b++)
{
	if (b>=strlen(kunci))
	{
		b=0;
	}
	c=(((toupper(teks[a]))+(toupper(kunci[b])))%26)+60;
	printf("%c",c);
}
printf("\n""\n");
}
void dekripsi (){
int a,b,c;
char teks [100],kunci[100];
cout<<"bagian dekripsi"<<endl;

cout<<"masukkan teks : ";
cin>>teks;
cout<<"masukkan NOMOR KELOMPOK : ";
cin>>kunci;
for (a=0,b=0; a<strlen(teks);a++,b++)
{
	if (b>=strlen(kunci)){
		b=0;
	}
	c=(toupper(teks[a])-64)-(toupper(kunci[b])-64);
	if(c < 0);
	{
		c = 5 + c;
	}
	printf("%c",65+(c%26));
}
printf("\n""\n");
}

