#include <iostream>

using namespace std;

int main (){
	int pilihan,harga,jumlah,total;
	
	cout << "==========TOKO CINTA DAMAI===========" <<endl;
	cout <<"SELAMAT DATANG DI TOKO KAMI SELAMAT BERBELANJA :D\n"<<endl;
	
	cout <<"harga per barangnya : ";
	cin >> harga;
	
	cout <<"jumlah belanja : ";
	cin >> jumlah;
	
	total = harga * jumlah;
	cout <<"\nTOTAL BELANJA ANDA = \n\n" << total << endl;
	
	switch(pilihan)
	{
		case 1:
			if (total >= 500000 && jumlah > 5)
			{
				cout << "\nANDA MENDAPATKAN BONUS SETRIKA \n";
				break;
			}
				if (total >= 100000 && jumlah > 3)
			{
				cout << "\nANDA MENDAPATKAN BONUS PAYUNG\n";
				break;
			}
				if (total >= 50000 && jumlah > 2)
			{
				cout << "\nANDA MENDAPATKAN BONUS BOLPOINT \n";
				break;
			}
			else
			{
				cout <<"\nMAAF ANDA TIDAK MENDAPATKAN BONUS, TERIMA KASIH \n";
				break;
			}
	}
	cin.get();
	return 0; 
}
