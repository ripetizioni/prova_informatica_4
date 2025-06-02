#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // dimensione massima dell'array

int search(int arr[], int size, int x) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == x) {
            return i; //index dell'elemento trovato
        }
    }
    return -1; //-1 se l'elemento non è trovato
}

void printThree(int arr[], int size) {
    int cont = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 3) {
            cout << "Trovato il numero 3 in posizione: " << i << endl;
            cont++; // incremento il contatore se trovo il numero 3
        }
    }
    if (cont == 0) {
        cout << "Il numero 3 non è presente nell'array." << endl;
    }
    else {
        cout << "Il numero 3 è presente " << cont << " volte nell'array." << endl;
    }
}

// Funzione per scambiare due interi
void swap(int &a, int &b) {
    int temp = a; // uso una variabile temporanea per lo scambio
    a = b;
    b = temp;
}

// Funzione che ordina un array di interi in ordine crescente usando l'algoritmo di ordinamento a bolle
void orderedArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]); // scambio gli elementi se non sono in ordine
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 18, 7, 12, 43, 14, 5, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(arr[0]); // calcolo la dimensione dell'array
    int x;
    
    cout << "Inserisci un numero da cercare nell'array: ";
    cin >> x;
    
    int risultato = search(arr, size, x);
    if (risultato != -1) {
        cout << "Elemento " << x << " trovato alla posizione " << risultato << endl;
    } else {
        cout << "Elemento " << x << " non trovato nell'array" << endl;
    }
    
    printThree(arr, size);
    
    orderedArray(arr, size);
    cout << "Array ordinato: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}