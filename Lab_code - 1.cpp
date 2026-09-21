#include <iostream>

using namespace std;

int main() 
{
    const double PI = 3.14;

    cout << "=== Задача 1: Параметри куба ===" << endl;
    
    double a;
    double V;
    double S;

    cout << "Введіть довжину ребра куба a: ";
    cin >> a;

    V = a * a * a;
    S = 6.0 * a * a;

    cout << "Об'єм куба V = " << V << endl;
    cout << "Площа поверхні куба S = " << S << endl << endl;

    cout << "=== Задача 2: Градуси -> Радіани ===" << endl;

    double alpha_deg;
    double alpha_rad;

    cout << "Введіть кут у градусах alpha (0 <= alpha < 360): ";
    cin >> alpha_deg;

    alpha_rad = alpha_deg * PI / 180.0;

    cout << "Кут у радіанах = " << alpha_rad << " рад" << endl << endl;

    cout << "=== Задача 3: Радіани -> Градуси ===" << endl;

    double beta_rad;
    double beta_deg;

    cout << "Введіть кут у радіанах alpha (0 <= alpha < 2 * PI): ";
    cin >> beta_rad;

    beta_deg = beta_rad * 180.0 / PI;

    cout << "Кут у градусах = " << beta_deg << " град" << endl;

    return 0;
}