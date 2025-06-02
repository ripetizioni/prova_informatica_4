#include <iostream
using namespace std;

int ricerca(int arr[];int size; int y)
{
    for(int i=0; i<size;i++)
    {
        if(arr[i]==y)
        {
            return i; //indice dell'elemento trovato
        }
    }
    return -1; //-1 se l'elemento non è trovato
}

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 18, 7, 12, 43, 14, 5, 16, 17, 18, 19, 20};
    int size= sizeof(arr);
    int y;


    // punto uno esercizio 2
    cout << "Inserisci un numero da cercare nell'array: ";
    cin >> y;
    int risultato =ricerca(arr, size,y);
    if(risultato != -1)
    {
        cout<<"\nNumero trovato!!";
    }
    else
    {
        cout<<"\nNumero non trovato!!";
    }


    // punto due esercizio 2
    int cont=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==3)
        {
            cont++;
        }
    }
    cout<<"\nIl numero 3 e stato trovato: "<<cont<<" volte";

    
}