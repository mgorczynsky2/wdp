
#include<vector>
#include <iostream>
#include<cstdio>
using namespace std; //zestaw 3
//---------------------------------------------rozwiazanie zad 2---------------------------------------------
int suma(vector<int>tab)
{
    int suma = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        suma = suma + tab[i];
    }
    return suma;
}
bool parzysta(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    return false;
}
int zad2()
{
    vector<int>wynik;
    for (int i = -100; i <= 0; i++)
    {
        if (!parzysta(i))
        {
            wynik.push_back(i);
        }
    }
    return suma(wynik);

}
//---------------------------------------------rozwiazanie zad 3---------------------------------------------
bool zad3(int x)
{
    if (x < 2)
    {
        return false;
    }

    for (int i = 2; i < x; i++)
    {
         if (x % i == 0)
         {
                return false;
         }
    }
    return true;
}
//---------------------------------------------rozwiazanie zad 4---------------------------------------------
bool parzysta2(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    return false;
}

bool czyzawieraliczbynieparzyste(int tablica[], int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        if (!parzysta(tablica[i]))
        {
            return true;
        }
    }
    return false;
}
int maks(int tablica[],int rozmiar)
{
    vector<int>nieparzyste;
    for (int i = 0; i < rozmiar; i++)
    {
        if (!parzysta(tablica[i]))
        {
            nieparzyste.push_back(tablica[i]);
        }
    }
    if (nieparzyste.size() != 0)
    {
        int maks = nieparzyste[0];
        for (int i = 0; i < nieparzyste.size(); i++)
        {
            if (nieparzyste[i] > maks)
            {
                maks = nieparzyste[i];
            }
        }
        return maks;
    }
}
int znajdzgo(int tablica[],int rozmiar,int element)
{
    for (int i = 0; i <rozmiar; i++)
    {
        if (tablica[i] == element)
        {
            return i;
        }
    }
}
int zad4(int tablica[], int rozmiar)
{
    if (czyzawieraliczbynieparzyste(tablica, rozmiar)==false)
    {
        return -1;
    }
    else
    {
        int element = maks(tablica, rozmiar);
        return znajdzgo(tablica, rozmiar, element);
    }
}
//---------------------------------------------rozwiazanie zad 6---------------------------------------------
int zad6(int x)
{
    if (x > 10)
    {
        vector<int>wynik;
        int liczba = x;
        while (liczba > 0)
        {
            int tmp = liczba % 10;
            wynik.push_back(tmp);
            liczba = liczba / 10;
        }
        for (int i = 0; i < 1; i++)
        {
            if (wynik[i] == wynik[i + 1])
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
//---------------------------------------------wywolanie zad 2----------------------------------------------  
    //cout << zad2(); 
//---------------------------------------------wywolanie zad 3----------------------------------------------
    //cout << zad3(11);
//---------------------------------------------wywolanie zad 4----------------------------------------------
    /*
    int tablica[10] = {-10,-5,-2,2,2,2,501,10013,-500,100};
    int tablica2[10] = { 2,2,2,2,2,2,2,2,2,2};
    cout << zad4(tablica, 10);
    */
//---------------------------------------------rozwiazanie zad 5----------------------------------------------
/*
 vector<int>tab;
 int i = 1;
 while (i <= 10)
 {
     int element;
     cout << "podaj " << i << " element: ";
     cin >> element;
     tab.push_back(element);
     cout << endl;
     i++;
 }


 vector<int>wynik;
 for (int i = 0; i < tab.size(); i++)
 {
     wynik.push_back(tab[i]*tab[i]);
 }


 for (int i = 0; i < wynik.size(); i++)
 {
     cout << wynik[i] << "   ";
 }
 */
 //---------------------------------------------wywolanie zad 6----------------------------------------------
   // cout << zad6(3033);
}
