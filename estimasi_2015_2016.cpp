#include <iostream>
using namespace std;

// Fungsi interpolasi Lagrange sama seperti sebelumnya
double lagrangeInterpolation(double x[], double y[], int n, double x_target) {
    double result = 0;

    for (int i = 0; i < n; i++) {
        double term = y[i];
        for (int j = 0; j < n; j++) {
            if (j != i)
                term *= (x_target - x[j]) / (x[i] - x[j]);
        }
        result += term;
    }

    return result;
}

int main() {
    // Data populasi Indonesia sekitar 2015 dan 2016
    double year_pop[] = {2012, 2013, 2014, 2017, 2018, 2019};
    double pop[]      = {247200516, 250425516, 253614646, 259091965, 262571963, 266023791};

    // Data persentase pengguna Internet Indonesia sekitar 2015 dan 2016
    double year_net[] = {2012, 2013, 2014, 2017, 2018, 2019};
    double net[]      = {22.1, 23.9, 28.9, 32.3, 39.8, 47.7};

    // Estimasi populasi
    cout << "Estimasi Populasi:\n";
    cout << "2015: " << lagrangeInterpolation(year_pop, pop, 6, 2015) << endl;
    cout << "2016: " << lagrangeInterpolation(year_pop, pop, 6, 2016) << endl;

    // Estimasi pengguna Internet
    cout << "\nEstimasi Pengguna Internet:\n";
    cout << "2015: " << lagrangeInterpolation(year_net, net, 6, 2015) << "%" << endl;
    cout << "2016: " << lagrangeInterpolation(year_net, net, 6, 2016) << "%" << endl;

    return 0;
}
