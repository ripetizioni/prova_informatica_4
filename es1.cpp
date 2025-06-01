#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v={1, 2, 3, 4, 5, 6, 7, 8, 9, 10,11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if (v.size() > 20) {
        v.resize(20);
    }

    float sum=0;
    int count=0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] % 2 == 0) {
            sum += v[i];
            count++;
        }
    }
    cout<< "la media dei numeri in posizione pari è: " << sum / count<< endl;

    vector<int> v2={1, 2, 3, 4, 5};
    
    /*
        `v.end()`: posizione dove inserire (alla fine del vector v)
        `v2.begin()`: inizio del range da copiare (primo elemento di v2)
        `v2.end()`: fine del range da copiare (dopo l'ultimo elemento di v2)
    */
    v.insert(v.end(), v2.begin(), v2.end());
    cout << "v.size() = " << v.size() << endl;  
    return 0;
}

