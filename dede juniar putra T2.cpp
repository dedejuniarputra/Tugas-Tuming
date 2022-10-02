#include <iostream>
using namespace std;
int main(){
	string nama, kls, nim, jurusan;
	
	cout<<"Masukan Data Berikut : "<<endl<<endl;
	cout<<"Nama	: ";
	getline (cin, nama);

	cout<<"NPM : ";
	getline (cin, nim);

	cout<<"Kelas	: ";
	getline (cin, kls);

	cout<<"Jurusan : ";
	getline (cin, jurusan);

	cout<<endl;
	cout<<"DATA MAHASISWA"<<endl;
	cout<<"-----------------------------"<<endl;

	cout<<"Nama	: "<<nama<<endl;
	cout<<"NPM  : "<<nim<<endl;
	cout<<"Kelas	: "<<kls<<endl;
	cout<<"Jurusan : "<<jurusan<<endl;

	return 0;
}