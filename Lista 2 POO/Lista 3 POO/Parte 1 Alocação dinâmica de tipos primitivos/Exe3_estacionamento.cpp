#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int vagas;
    cin >> vagas;
    if (vagas < 5 || vagas > 15) return 0;
    int* est = new int[vagas];
    for (int i = 0; i < vagas; i++) est[i] = 0;
    srand((unsigned)time(0));
    for (int h = 1; h <= 24; h++) {
        for (int i = 0; i < vagas; i++) if (est[i] > 0) est[i]--;
        int pos = -1;
        for (int i = 0; i < vagas; i++) if (est[i] == 0) { pos = i; break; }
        if (pos >= 0) est[pos] = 1 + (rand() % 5);
        else cout << "cheio\n";
        for (int i = 0; i < vagas; i++) {
            if (i) cout << " ";
            cout << est[i];
        }
        cout << "\n";
    }
    delete[] est;
    return 0;
}
