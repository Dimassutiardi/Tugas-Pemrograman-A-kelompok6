#include <iostream>
#include <cmath>
using namespace std;

// Fungsi evaluasi polinomial derajat 3: y = a*x^3 + b*x^2 + c*x + d
double evaluatePolynomial(double x) {
    double a = 0.002084;       // koefisien x^3
    double b = -12.82;         // koefisien x^2
    double c = 25812;          // koefisien x
    double d = -17000000;      // konstanta
    return a*pow(x,3) + b*pow(x,2) + c*x + d;
}

int main() {
    cout << "Persamaan polinomial pertumbuhan populasi:\n";
    cout << "y = 0.002084x^3 - 12.82x^2 + 25812x - 17000000\n\n";

    int tahun = 2030;
    double estimasi = evaluatePolynomial(tahun);

    cout << "Estimasi populasi Indonesia tahun " << tahun << " adalah " << estimasi << " jiwa" << endl;
    return 0;
}
