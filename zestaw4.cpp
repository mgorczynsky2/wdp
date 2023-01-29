#include <iostream>
#include<vector>
using namespace std;
int f(int n)
{
    if (n == 0)
    {
        return 2;
    }
    if (n == 1)
    {
        return 22;
    }
    return f(n - 1)*10 + 2;
}
int zad4(int tab[], int m, int n)
{
    int licznik = 0;
    for (int i = 0; i < m; i++)
    {
        if (tab[i] > n)
        {
            licznik = licznik + 1;
        }
    }
    return licznik;
}
void wypisz(vector<int>tab)
{
    for (auto el : tab)
    {
        cout << el << "  ";
    }
}
vector<int>transform(int x)
{
    vector<int>wynik;
    int liczba = x;
    while (liczba > 0)
    {
        int tmp = liczba % 10;
        wynik.push_back(tmp);
        liczba = liczba / 10;
    }
    return wynik;
}
int vtoint(vector<int>tab)
{
    int liczba = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        liczba = liczba * 10 + tab[i];
    }
    return liczba;
}
bool zad6(int x)
{
    vector<int>a = transform(x);
    int aa = vtoint(a);
    if (x == aa)
    {
        return true;
    }
    return false;
}
int main()
{
    /*
    vector<double>tab;
    int element;
    int i = 0;
    while (i < 10)
    {
        cout << "podaj liczbe wymierne: ";
        cin >> element;
        tab.push_back(element);
        cout << endl;
        i++;
    }
    int p = 9;
    while (p >= 0)
    {
        cout << tab[p] << "   ";
        p--;
    }
    */

    cout << zad6(12321);

}
