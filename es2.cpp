#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> v, int x) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == x) {
            return i; //index dell'elemento trovato
        }
    }
    return -1; //-1 se l'elemento non è trovato
}

void printThree(vector<int> v) {
    int cont=0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 3) {
            cout << "Trovato il numero 3 in posizione: " << i << endl;
            cont++; // incremento il contatore se trovo il numero 3
        }
    }
    if (cont == 0) {
        cout << "Il numero 3 non è presente nel vettore." << endl;
    }
    else{
        cout << "Il numero 3 è presente " << cont << " volte nel vettore." << endl;
    }
}

// Funzione che ordina un vettore di interi in ordine crescente
vector<int> orderedVector(vector<int> v) {

    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] > v[j]) {
                swap(v[i], v[j]); // scambio gli elementi se non sono in ordine
            }
        }
    }
    return v; // ritorno il vettore ordinato
    
}

int main(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 18, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int x;
    cout << "Inserisci un numero da cercare nel vettore: ";
    cin >> x;
    
    int risultato = search(v, x);
    if (risultato != -1) {
        cout << "Elemento " << x << " trovato alla posizione " << risultato << endl;
    } else {
        cout << "Elemento " << x << " non trovato nel vettore" << endl;
    }
    
    printThree(v);
    
    vector<int> vOrdinato = orderedVector(v);
    cout << "Vettore ordinato: ";

    for (int i= 0; i < vOrdinato.size(); i++) {
        cout << vOrdinato[i] << " ";
    }
    cout << endl;

    return 0;
}