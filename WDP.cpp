#include<map>
#include <vector>
#include <iostream>
using namespace std;
void wypisz(vector <int> tab)
{
for (int i = 0; i<tab.size(); i++)
{
	cout << tab[i] << "   ";
}
}

int max(vector <int> tab)
{
	int maks = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > maks)
		{
			maks = tab[i];
		}
	}
	return maks;
}
bool CzyNalezy(vector <int> tab, int element)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == element)
		{
			return true;
		}
	}
	return false;
}
bool CzyZawiera(vector <int> tab, vector <int> tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!CzyNalezy(tab, tab2[i]))
		{
			return false;
		}
	}
return true;
}
int suma(vector <int> tab, int suma = 0)
{
	for (int i = 0;i <tab.size();i++)
	{
		suma += tab[i];
	}
	return suma;
}
double avg(vector<int>tab)
{
	return (double) suma(tab) / tab.size();
}
vector <int>podzielna(vector<int>tab, int dzielnik, int reszta = 0)
{
	vector <int> wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] % dzielnik == reszta)
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
vector<int>unikalnosc(vector<int>tab)
{
	vector <int> wynik;
	for (int i = 0; i < tab.size(); i++)
	{
		if (!CzyNalezy(wynik, tab[i]))
		{
			wynik.push_back(tab[i]);
		}
	}
	return wynik;
}
int main()
{
	map <string, int> m;
	map <int, int> p;
	p.insert({ 2,10 });
	p.insert({ 13,20 });
	m.insert({ "m",13 });
	cout << m["m"];
	cout << endl << endl;
	vector<int>tab = { 1,4,8,10,10,4 };
	vector <int>tab2 = { 1,4,8 };
	cout << max(tab) << endl;
	cout << CzyNalezy(tab, 5) << endl;
	cout << CzyZawiera(tab, tab2) << endl;
	cout << suma(tab) << endl;
	cout << avg(tab) << endl;
	wypisz(podzielna(tab, 2));
	cout << endl << endl;
	wypisz(unikalnosc(tab));
	cout << endl << endl;
	for (auto& el : p)
	{
		cout << el.first << " odpowiada ";
		cout << el.second << "  ";
	}
}


int main()
{
    string a;
    cout << "Podaj tablice znakow" << endl;
    cin >> a;
    vector<int>wynik;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] !=' ')
        {
            wynik.push_back(a[i]);
        }
    }
    wypisz(wynik);

    
    for (int i = 0; i < 280; i++)
    {
        int licznik = 0;
        for (int a=0;a < wynik.size(); a++)
        {
            if (i == wynik[a])
            {
                licznik = licznik + 1;
            }
        }
        if (licznik > 0)
        {
            cout << (char)i << "  " << licznik << endl;
        }
    }
}
