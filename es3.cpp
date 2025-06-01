#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    
    cout << "Risoluzione equazione di secondo grado: ax² + bx + c = 0" << endl;
    cout << "Inserisci il coefficiente a: ";
    cin >> a;
    cout << "Inserisci il coefficiente b: ";
    cin >> b;
    cout << "Inserisci il coefficiente c: ";
    cin >> c;
    
    // Controllo se è effettivamente un'equazione di secondo grado
    if (a == 0) {
        cout << "Errore: a non può essere zero per un'equazione di secondo grado!" << endl;
        if (b == 0) {
            if (c == 0) {
                cout << "L'equazione è indeterminata (0 = 0)" << endl;
            } else {
                cout << "L'equazione è impossibile (" << c << " = 0)" << endl;
            }
        } else {
            // Equazione di primo grado: bx + c = 0
            double x = -c / b;
            cout << "L'equazione è di primo grado con soluzione: x = " << x << endl;
        }
        return 0;
    }
    
    // Calcolo del discriminante (delta)
    double delta = b * b - 4 * a * c;
    
    //funzione abs serve per ottenere il valore assoluto di un numero
    cout << "\nEquazione: " << a << "x² ";
    if (b >= 0) 
        cout << "+ " << b << "x ";
    else 
        cout << "- " << abs(b) << "x ";
    if (c >= 0) 
        cout << "+ " << c << " = 0" << endl;
    else 
        cout << "- " << abs(c) << " = 0" << endl;
    
    cout << "Discriminante (Δ) = b² - 4ac = " << delta << endl;
    
    if (delta > 0) {
        // Due soluzioni reali distinte
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "\nDue soluzioni reali distinte:" << endl;
        cout << "x₁ = " << x1 << endl;
        cout << "x₂ = " << x2 << endl;
    }
    else if (delta == 0) {
        // Una soluzione reale doppia
        double x = -b / (2 * a);
        cout << "\nUna soluzione reale doppia:" << endl;
        cout << "x₁ = x₂ = " << x << endl;
    }
    

    return 0;
}