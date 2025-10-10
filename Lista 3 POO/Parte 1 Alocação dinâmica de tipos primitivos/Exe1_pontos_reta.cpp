#include <iostream>
#include <iomanip>
using namespace std;

struct Ponto { float x; float y; };

int main() {
    float x1, y1, x2, y2;
    int n;
    cin >> x1 >> y1 >> x2 >> y2 >> n;
    if (n < 2) return 0;
    Ponto* v = new Ponto[n];
    float dx = x2 - x1;
    float dy = y2 - y1;
    float dt = 1.0f / (n - 1);
    for (int i = 0; i < n; i++) {
        float t = dt * i;
        v[i].x = x1 + t * dx;
        v[i].y = y1 + t * dy;
    }
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << v[i].x << " " << v[i].y << "\n";
    }
    delete[] v;
    return 0;
}
