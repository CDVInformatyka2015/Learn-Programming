#include "funkcje.h"

int main() {
	SetConsoleTitleA("Zadanie 3");
	cout << "Jeden algorytm, obliczanie sumy,sumy kwadratow i srednia arytmetyczna\n\n";
	system("pause");
	system("cls");
	int a,b;
	bool typ=false;
	while (typ==false){
		system("cls");
		cout << "Podaj warto�� liczby a: ";
		cin >> b;
		cout << "Podaj warto�� liczby b: ";
		cin >> b;
		if (!cin){
			cin.clear();
			cin.sync();
		} else {
			typ=true;
		}
	}
	cout<<"Suma="<<a+b<<endl;
	cout<<"Suma kwadratu="<<a*a+b*b<<endl;
	cout<<"�rednia="<<sredniasumyliczb(a,b)<<endl;
	system("pause");
	return 0;
}
