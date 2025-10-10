#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dado {
    int faces;
public:
    Dado(): faces(6) {}
    Dado(int f): faces(f) {}
    void setFaces(int f) { faces = f; }
    int rolar() { return 1 + (rand() % faces); }
};

int main() {
    srand((unsigned)time(0));
    Dado* d = new Dado(6);
    cout << d->rolar() << "\n";
    delete d;
    Dado* v = new Dado[3];
    v[0].setFaces(6);
    v[1].setFaces(8);
    v[2].setFaces(12);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << v[i].rolar();
            if (j < 2) cout << " ";
        }
        cout << "\n";
    }
    delete[] v;
    return 0;
}
