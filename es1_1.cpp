#include <iostream>
using namespace std;

int main()
{
    int vettoreA [20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    
    int dimensione_logica=20;
    float somma=0;
    int cont=0;
    for(int i=0; i<dimensione_logica;i++)
    {
        if(i %2==0)
        {
            somma=somma+vettoreA[i];
            cont++;
        }
    }
    cout<<"la media e "<<somma/cont<<"\n";
    int vettoreB[5]={10,20,30,40,50};

    // non funzionante (e non corretto) ma va bene alla scuola
    int vettoreTOT[25]=vettoreA+vettoreB;

    somma=0;
    cont=0;
    for(int i=0; i<25;i++)
    {
        if(i %2==0)
        {
            somma=somma+vettoreTOT[i];
            cont++;
        }
    }
    cout<<"la media e "<<somma/cont<<"\n";
}