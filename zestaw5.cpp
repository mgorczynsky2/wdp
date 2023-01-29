#include <iostream>
#include<vector>
using namespace std;
int zad2(int n)
{
    int suma = 0;
    int i = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            suma = suma + i;
        }
        i++;
    }
    return suma;
}
int zad4(int m, int n, int tab[])
{
    int licznik = 0;
    for (int i = 0; i < m; i++)
    {
        if (tab[i] == n)
        {
            licznik = licznik + 1;
        }
    }
    return licznik;
}
double avg(vector<double>tab)
{
    double suma = 0;
    for (auto el : tab)
    {
        suma = suma + el;
    }
    return suma / tab.size();
}
bool zad6(int n, int tab[])
{
    int element = tab[0];
    for (int i = 0; i<n; i++)
    {
        if (element<tab[i])
        {
            return false;
        }
        element = tab[i];
    }
    return true;
}
int main()
{
    //zad2
    /*
    int a, b, c;
    cout << "podaj a: ";
        cin >> a;
        cout << endl << "podaj b: ";
        cin >> b;
        cout << endl << "podaj c: ";
        cin >> c;
        if ((a == b && a!=c )||(a == c && b!=a) ||(b == c && a!=b))
        {
            cout << "dokladnie dwie sa podobne";
        }
        */
    int tab[4] = {5,4,4,2};
    int element = tab[0];
    cout << zad6(10, tab);


    //zad5
    /*
    vector<double>wynik;
    int i = 0;
    double element;
    while (i < 10)
    {
        cout <<endl<<"podaj element: ";
        cin >> element;
        wynik.push_back(element);
        i++;
    }
    int licznik = 0;
    double srednia = avg(wynik);
    for (int i = 0; i < wynik.size(); i++)
    {
        if (wynik[i] > srednia)
        {
            licznik = licznik + 1;
        }
    }
    cout << licznik;
    */
}
