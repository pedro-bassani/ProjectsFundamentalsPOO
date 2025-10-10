#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Ponto { float x; float y; };

int main() {
    int n;
    double r;
    cin >> n >> r;
    if (n <= 0 || r <= 0.0 || r > 10.0) return 0;
    Ponto* p = new Ponto[n];
    const double PI = acos(-1.0);
    for (int i = 0; i < n; i++) {
        double ang = (2.0 * PI * i) / n;
        p[i].x = (float)(r * cos(ang));
        p[i].y = (float)(r * sin(ang));
    }
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++) {
        cout << p[i].x << " " << p[i].y << "\n";
    }
    delete[] p;
    return 0;
}
