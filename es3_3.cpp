#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Risoluzione equazione di secondo grado: ax² + bx + c = 0" << endl;
    cout << "Inserisci il coefficiente a: ";
    cin >> a;
    cout << "Inserisci il coefficiente b: ";
    cin >> b;
    cout << "Inserisci il coefficiente c: ";
    cin >> c;

    float delta= b*b-4*2(a*c);
    float radice=sqrt(delta);
    if(delta>0)
    {
        float x1=(-b+radice)/(2*a);
        float x2=(-b-radice)/(2*a);
        cout << "L'equazione ha due soluzioni reali distinte: " << x1 << " e " << x2 << endl;
    }
    else if(delta==0)
    {
        float x=(-b)/(2*a);
        cout << "L'equazione ha una soluzione reale doppia: " << x << endl;
    }
    else
    {
        cout<<"\nNessuna soluzione possibile poiche il delta risulta negativo!!";
    }
}