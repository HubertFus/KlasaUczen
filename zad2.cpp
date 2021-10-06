#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Uczen{
	public:
		string imie, nazwisko, klasa;
		int rok_ur;
		void ustawImie(string uImie);
		void ustawNazwisko(string uNazwisko);
		void ustawKlase(string uKlasa);
		void ustawRok_ur(int uRok_ur);
		
};
void Uczen::ustawImie(string uImie){
imie = uImie;
}
void Uczen::ustawNazwisko(string uNazwisko){
nazwisko = uNazwisko;
}
void Uczen::ustawKlase(string uKlasa){
klasa = uKlasa;
}
void Uczen::ustawRok_ur(int uRok_ur){
rok_ur = uRok_ur;
}
fstream plik;
int main(){
	Uczen uczen_a;
	uczen_a.ustawImie("Witek");
	uczen_a.ustawNazwisko("Wiertara");	
	uczen_a.ustawKlase("3cg");
	uczen_a.ustawRok_ur(2003);
	Uczen uczen_b;
	uczen_b.ustawImie("Antoni");
	uczen_b.ustawNazwisko("Niewiadomy");	
	uczen_b.ustawKlase("2c");
	uczen_b.ustawRok_ur(2004);
	if(uczen_a.rok_ur<uczen_b.rok_ur){
		cout<<uczen_a.imie<<" jest Starszy od "<<uczen_b.imie<<" o "<<uczen_b.rok_ur-uczen_a.rok_ur<<endl;
	}
	else{
		cout<<uczen_b.imie<<" jest Starszy od "<<uczen_a.imie<<" o "<<uczen_a.rok_ur-uczen_b.rok_ur<<endl;
	}
	plik.open("dane.txt",ios::app);
	plik<<uczen_a.imie<<" "<<uczen_a.nazwisko<<" "<<uczen_a.klasa<<" "<<uczen_a.rok_ur<<endl;
	plik<<uczen_b.imie<<" "<<uczen_b.nazwisko<<" "<<uczen_b.klasa<<" "<<uczen_b.rok_ur<<endl;
	plik.close();
}
