// ConsoleApplication20.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<vector>
using namespace std;
void wypisz(vector<int>tab)
{
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << "   ";
    }
}
int max(vector<int>tab)
{
    int maks = tab[0];
    for (int i = 0; i < tab.size();i++)
    {
        if (tab[i] > maks)
        {
            maks = tab[i];
        }
    }
    return maks;
}
int suma_cz(vector<int>tab)
{
    int suma = 0;
    vector<int>wynik;
    for (int j = 0; j < tab.size(); j++)
    {
        for (int i = j; i < tab.size(); i++)
        {
            suma = suma + tab[i];
        }
        wynik.push_back(suma);
        suma = 0;
    }
    wypisz(wynik);
    return max(wynik);
}   
int ciag(vector<int>tab)
{
    vector<int>wynik;
    int licznik = 0;
    for (int j = 0; j < tab.size(); j++)
    {
        if (tab[j] % 2 == 0 && tab[j]!=0)
        {
            licznik = licznik + 1;
        }
        else
        {
            wynik.push_back(licznik);
            licznik = 0;
        }
        
    }
wynik.push_back(licznik);
return max(wynik);
}
int suma(vector<int>tab)
{
    int suma = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        suma = suma + tab[i];
    }
    return suma;
}
int sumazadanie(vector<int>tab, int a, int b)
{
    vector<int>wynik;
    for (int i = 0; i < tab.size(); i++)
    {
        if (tab[i] % a == 0 && tab[i] < b)
        {
            wynik.push_back(tab[i]);
        }
    }
    return suma(wynik);
}
int potega(int a, int b)
{
    int potega = 1;
    for (int i = 0; i < b; i++)
    {
        potega = potega * a;
    }
    return potega;
}

int potega2(int x)
{
    for (int i = 1; i < x; i++)
    {
        for (int j = 1; j < x; j++)
        {
            if (potega(i, j) == x)
            {
                cout << i <<"    "<< j;
                return 0;
            }
        }
    }
    cout << "nie";
}
bool pierwsza(int x)
{
    if(x > 1)
    {
        for (int i = 2; i<=x/i; i++)
        {
            if (x % i == 0)
            {
                return false;
            }
        }
    return true;
    }
    else
    {
        return false;
    }
}
vector<int>n_pierwszych(int n)
{
    vector<int>wynik;
    for (int i = 0;wynik.size()<n; i++)
    {
        if (pierwsza(i))
        {
            wynik.push_back(i);
        }
    }
    return wynik;
}
vector<int>n_pierwszych2(int n)
{
    vector<int>wynik;
int i = 0;
    do
    {
        if (pierwsza(i))
        {
            wynik.push_back(i);
        } 
        i++;
    } while (wynik.size()==n);
 return wynik;
}
int main()
{
    vector<int>tab = {6,8,9,3,3,20,1};
    cout << endl;
    cout << potega(3, 2);
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
