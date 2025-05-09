#include <iostream>
#include <cmath>
using namespace std;

// Fungsi evaluasi polinomial derajat 3 untuk internet
double evaluatePolynomial(double x) {
    double a = 0.0000543;      // koefisien x^3
    double b = -0.331;         // koefisien x^2
    double c = 685;            // koefisien x
    double d = -438000;        // konstanta
    return a*pow(x,3) + b*pow(x,2) + c*x + d;
}

int main() {
    cout << "Persamaan polinomial persentase pengguna Internet:\n";
    cout << "y = 0.0000543x^3 - 0.331x^2 + 685x - 438000\n\n";

    int tahun = 2035;
    double estimasi = evaluatePolynomial(tahun);

    cout << "Estimasi persentase pengguna Internet Indonesia tahun " << tahun << " adalah " << estimasi << "%" << endl;
    return 0;
}
