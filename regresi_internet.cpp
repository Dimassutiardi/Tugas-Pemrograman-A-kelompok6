#include <iostream>
#include <cmath>
using namespace std;

// Fungsi evaluasi persentase pengguna internet
// x = tahun - 1960
double evaluateInternetPercentage(int tahun) {
    double x = tahun - 1960;

    // y = 0.0124x^3 - 0.613x^2 + 6.59x - 5.85
    return 0.0124 * pow(x, 3) - 0.613 * pow(x, 2) + 6.59 * x - 5.85;
}

// Fungsi evaluasi populasi
// x = tahun - 1960
double evaluatePopulation(int tahun) {
    double x = tahun - 1960;

    // y = 1043.7x^3 - 23714.6x^2 + 282516.5x + 87706406
    return 1043.7 * pow(x, 3) - 23714.6 * pow(x, 2) + 282516.5 * x + 87706406;
}

int main() {
    int tahun = 2035;

    double persen = evaluateInternetPercentage(tahun);
    double populasi = evaluatePopulation(tahun);
    double pengguna_internet = (persen / 100.0) * populasi;

    cout << "Persamaan polinomial persentase pengguna Internet:\n";
    cout << "y = 0.0124x^3 - 0.613x^2 + 6.59x - 5.85\n";
    cout << "(* dengan x = tahun - 1960)\n\n";

    cout << "Persamaan polinomial populasi:\n";
    cout << "y = 1043.7x^3 - 23714.6x^2 + 282516.5x + 87706406\n";
    cout << "(* dengan x = tahun - 1960)\n\n";

    cout << "Estimasi tahun " << tahun << ":\n";
    cout << "- Populasi: " << populasi << " jiwa\n";
    cout << "- Persentase pengguna Internet: " << persen << " %\n";
    cout << ">> Estimasi jumlah pengguna Internet: " << pengguna_internet << " orang" << endl;

    return 0;
}
