/* TP1 Ejercicios con dinstintos tipos de variables
 * MARTIN DANIEL AGUEL
 * 20150421
 */

#include <iostream>
using namespace std;

int main()
{

bool b1;
int i1= 12, i2= 13, i3, i4, i5;
double d1;
char c1= 'a', c2= 'b';
string s0, s1 ="Fin ", s2 = "del programa.";
s0= s1+s2;

cout << "Operaciones entre los numeros:" << endl;
cout << i1 << endl;
cout << i2 << endl;

b1 = (i1 == i2);
cout << "Resultado de la comparacion: (0 = falso y 1 = verdadero)" << endl;
cout << b1 << endl;


i3= i1+i2;
cout << "Suma entre ambos" << endl;
cout << i3 << endl;

i4= i1-i2;
cout << "Resta entre ambos" << endl;
cout << i4 << endl;

i5= i1*i2;
cout << "Producto entre ambos" << endl;
cout << i5 << endl;

d1= i1/i2;
cout << "Divición entre ambos" << endl;
cout << d1 << endl;

cout << "Comparacion entre 2 caracteres:" << endl;
cout << c1 << endl;
cout << c2 << endl;

b1 = (c1 != c2);
cout << "Resultado de la comparacion: (0 = Iguales y 1 = Distintos)" << endl;
cout << b1 << endl;



cout << s0 << endl;

}
