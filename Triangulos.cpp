// Triangulos.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include<math.h>
# define M_PI 3.14159265358979323846 /* pi */
using namespace std;
void Calculos(double l1, double l2, double l3)
{
    double area = 0;
    double perimetro = 0;
    double semiperimetro = 0;
    perimetro = l1 + l2 + l3;
    cout << "El perimetro es: " << perimetro << "\n";
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - l1) * (semiperimetro - l2) * (semiperimetro - l3));
    cout << "El area es: " << area << "\n";
}
void Angulos(double l1, double l2, double l3)
{
    double a1=0, a2=0, a3=0;
    a1 = acos((-(l1 * l1) + (l2 * l2) + (l3 * l3)) / (2 * l2 * l3)) * 180 / M_PI;
    a2 = acos(((l1 * l1) -(l2 * l2) + (l3 * l3)) / (2 * l1 * l3)) * 180 / M_PI;
    a3 = acos(((l1 * l1) + (l2 * l2) - (l3 * l3))/( 2 * l2 * l1)) * 180 / M_PI;
    cout << "Los angulos intenrnos del triangulo son: " << "\n";
    cout << "Angulo 1: " << a1 << "\n";
    cout << "Angulo 2: " << a2 << "\n";
    cout << "Angulo 3: " << a3 << "\n";
}
int main()
{
    double l1=0, l2=0, l3=0;
    string tipo, salir="n";
   while (salir != "s")
   {
    cout << "Dame el primer lado:";
    cin >> l1;
    cout<<"Dame el segudno lado:";
    cin >> l2;
    cout << "Dame el tercer lado:";
    cin >> l3;
        if (l1 == l2 && l2 == l3)
        {
            cout << "El triangulo es equilartero" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        if (l1 == l2 && l2 != l3)
        {
            cout << "El triangulo es isosceles" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        if (l1 != l2 && l2 != l3)
        {
            cout << "El triangulo es escaleno" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        cout << "Desea salir? si(s) no (n):";
        cin >> salir;
        
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
