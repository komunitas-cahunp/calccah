#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void petunjuk();

main ()
{
  petunjuk(); //tampilkan petunjuk

  double Hasil;
  double Angka;
  double AngkaMasukan;
  char op;
  char jwb;

  cout << "Masukan Angka = ";
  cin >> Angka;

  do
    {
    //jika angka yang mau di hitung masih nol
    if (Angka == 0) {
    cout << "MasukanAngka = ";
    cin >> Angka;
    }

  cout << "Operasi : ";
  cin >> op;

  switch(op)
    {
    case 'c' : Angka = 0;
    break;

    case '+' : cout << "Masukan Angka : ";
	cin >> AngkaMasukan;
	Hasil = Angka + AngkaMasukan;
	cout << "Jumlahnya adalah :" << Hasil << endl;
	Angka = Hasil;
	break;

	case '-' : cout << "Masukan Angka : ";
	cin >> AngkaMasukan;
	Hasil = Angka - AngkaMasukan;
	cout << "Hasilnya adalah : " << Hasil << endl;
	Angka = Hasil;
	break;

	case '*' : cout << "Masukan Angka : ";
	cin >> AngkaMasukan;
	Hasil = Angka * AngkaMasukan;
	cout << "Hasilnya adalah : " << Hasil << endl;
	Angka = Hasil;
	break;

	case '/' : cout << "Masukan Angka : ";
	cin >> AngkaMasukan;
	Hasil = Angka / AngkaMasukan;
	cout << "Hasilnya adalah : " << Hasil << endl;
	Angka = Hasil;
	break;

	case '^' : cout << "Masukan Angka : ";
	cin >> AngkaMasukan;
	Hasil = pow(Angka,AngkaMasukan);
	cout << "Hasilnya adalah : " << Hasil << endl;
	Angka = Hasil;
	break;

	}
  cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
  cin >> jwb;
  }

  while (jwb == 'Y' || jwb == 'y');
  return 0;

}

void petunjuk()
{
  cout << "=================================================+\n";
  cout << "\tPROGRAM CALCULATOR SEDERHANA\t\t |\n";
  cout << "'+'= Penjumlahan  \t\t\t\t |\n";
  cout << "'-'= Pengurangan  \t\t\t\t |\n";
  cout << "'*'= Perkalian    \t\t\t\t |\n";
  cout << "'/'= Pembagian    \t\t\t\t |\n";
  cout << "'^'= Perpangkatan \t\t\t\t |\n";
  cout << "=================================================+\n";
}
