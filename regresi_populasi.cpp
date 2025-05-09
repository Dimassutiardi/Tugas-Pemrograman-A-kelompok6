#include <iostream>
#include <cmath>
using namespace std;

// Fungsi evaluasi populasi dengan x = tahun - 1960
double evaluatePopulation(int tahun) {
    double x = tahun - 1960;

    // Koefisien hasil regresi dari Python (derajat 3, berdasarkan x = tahun - 1960)
    // y = 1043.7x^3 - 23714.6x^2 + 282516.5x + 87706406
    return 1043.7 * pow(x, 3) - 23714.6 * pow(x, 2) + 282516.5 * x + 87706406;
}

int main() {
    int tahun = 2030;

    cout << "Persamaan polinomial pertumbuhan populasi:\n";
    cout << "y = 1043.7x^3 - 23714.6x^2 + 282516.5x + 87706406\n";
    cout << "(* dengan x = tahun - 1960)\n\n";

    double estimasi = evaluatePopulation(tahun);
    cout << "Estimasi populasi Indonesia tahun " << tahun << " adalah " << estimasi << " jiwa" << endl;

    return 0;
}
