#include <iostream>
using namespace std;

// Fungsi interpolasi Lagrange
// Mengestimasi nilai y di titik x_target berdasarkan n titik data (x[i], y[i])
double lagrangeInterpolation(double x[], double y[], int n, double x_target) {
    double result = 0;

    // Iterasi tiap titik data
    for (int i = 0; i < n; i++) {
        double term = y[i]; // Mulai dengan y_i

        // Hitung L_i(x) = product (x - x_j)/(x_i - x_j) untuk semua j ≠ i
        for (int j = 0; j < n; j++) {
            if (j != i)
                term *= (x_target - x[j]) / (x[i] - x[j]);
        }

        // Tambahkan ke hasil akhir
        result += term;
    }

    return result;
}

int main() {
    // Data populasi Indonesia sekitar tahun 2005 dan 2006
    double year_pop[] = {2002, 2003, 2004, 2007, 2008, 2009};
    double pop[]      = {215130608, 218652835, 222194795, 229234695, 232518344, 235072164};

    // Data persentase pengguna Internet Indonesia sekitar 2005 dan 2006
    double year_net[] = {2002, 2003, 2004, 2007, 2008, 2009};
    double net[]      = {1.9, 2.1, 3.6, 5.2, 6.9, 10.9};

    // Estimasi populasi menggunakan interpolasi Lagrange
    cout << "Estimasi Populasi:\n";
    cout << "2005: " << lagrangeInterpolation(year_pop, pop, 6, 2005) << endl;
    cout << "2006: " << lagrangeInterpolation(year_pop, pop, 6, 2006) << endl;

    // Estimasi pengguna Internet menggunakan interpolasi Lagrange
    cout << "\nEstimasi Pengguna Internet:\n";
    cout << "2005: " << lagrangeInterpolation(year_net, net, 6, 2005) << "%" << endl;
    cout << "2006: " << lagrangeInterpolation(year_net, net, 6, 2006) << "%" << endl;

    return 0;
}
