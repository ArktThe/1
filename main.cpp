//Stefan Radeski INKI909
#include <iostream>
#include <cmath>
using namespace std;

    int najgolemaCifra(int n){    //
	int value = 0;
	while(n > 0){
		value = max(value, n%10);
		n /= 10;
	}
	return value;
    }

  void encoding(int key, string &s)
  {
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i]+key;
	}
	        cout << "Kodiranata poraka: " << s << endl;
}

 void decoding(int key, string &s)
 {
	for(int i = 0; i < s.size(); i++){
		s[i] = s[i]-key;
	}
	         cout << "Dekodiranata poraka: " << s << endl;
}

void menu(){
	     cout << "**********************************\n";
             cout << "1 - Kodiranje\n";
	         cout << "2 - Dekodiranje\n";
	         cout << "Vnesi soodveten broj:\n";
	     cout << "***********************************\n";
}

int main()
{

	         cout << "Vnesete 5 cifren broj\n";
	int n;
	cin >> n;

	         cout << "Vnesete poraka koja sakate da ja kodirate\n";
	string s;
	cin.ignore();
	getline(cin, s);

	int key = najgolemaCifra(n);

	int opcija;
	do{
		menu();
		cin >> opcija;

		switch(opcija){
			case 1:
				encoding(key, s);
				break;
			case 2:
				decoding(key, s);
				break;
			case 3:
	return 0;
	default:
	            cout << "Opcijata ne postoi !\n";
		}
	}
	while(opcija != 3);
 }
