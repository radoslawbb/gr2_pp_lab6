// gr2_pp_lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

/*zadanie 1
int a = 20, b = 10;

int suma(int a, int b) {
    int wyn = a + b;
    return wyn;
}*/

/*zadanie 2
int tab[10];
int rozmiar = 10;

void usun() {
    int pozycja;
    cout << "Podaj pozycje [0,9]: ";
    cin >> pozycja;
    cout << endl;

    for (int i = pozycja; i < rozmiar-1; i++) {
        tab[i] = tab[i + 1];
    }

    rozmiar--;
}*/


float TEMP1[10], TEMP2[10];
int INDEKS = 0;

float przelicz(float temp) {
    float wyn = temp + 273.15;
    return wyn;
}

void zapisz(float oldTemp, float newTemp) {
    if (INDEKS < 10) {
        TEMP1[INDEKS] = oldTemp;
        TEMP2[INDEKS] = newTemp;
        INDEKS++;
    }
    else {
        cout << "Koniec miejsca w tablicy, przeliczanie nie zostanie zapisane" << endl;
    }
}

void wyswietl() {
    for (int i = 0; i < INDEKS; i++) {
        cout << i + 1 << ": " << TEMP1[i] << "C ->" << TEMP2[i] << "K" << endl;
    }
}

int main()
{
    /*zadanie 1
    cout<<"Suma globalnych zmiennych: "<<suma(a, b)<<endl;

    int a = 1, b = 2;

    cout << "Suma lokalnych zmiennych: " << suma(a, b) << endl;*/

    /*zadanie 2
    cout << "Wprowadz liczby do tablicy: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << "tab[" << i << "]: ";
        cin >> tab[i];
    }
    cout << endl;

    usun();

    for (int i = 0; i < rozmiar; i++) {
        cout << tab[i] << endl;
    }*/

    while (1) {
        system("cls");
        int temp;
        cout << "Podaj temp. w C: ";
        cin >> temp;
        cout << endl;

        int pT = przelicz(temp);
        zapisz(temp, pT);
        wyswietl();

        int koniec = 0;
        cout << "Zakonczyc prace? (Wpisz 1 jesli chcesz zakonczyc prace lub inna liczbe jesli nie)" << endl;
        cin >> koniec;
        if (koniec == 1) return 0;
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
