#include <iostream>
using namespace std;

int main() {
    int v[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size_v = 20;

    float sum = 0;
    int count = 0;
    for (int i = 0; i < size_v; i++) {
        if (v[i] % 2 == 0) {
            sum += v[i];
            count++;
        }
    }
    cout << "la media dei numeri in posizione pari è: " << sum / count << endl;

    int v2[5] = {1, 2, 3, 4, 5};
    int size_v2 = 5;
    
    int combined[25];
    
    for (int i = 0; i < size_v; i++) {
        combined[i] = v[i];
    }
    
    for (int i = 0; i < size_v2; i++) {
        combined[size_v + i] = v2[i];
    }
    
    int total_size = size_v + size_v2;
    cout << "total size = " << total_size << endl;
    
    return 0;
}

