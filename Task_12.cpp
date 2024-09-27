#include <iostream>
const long double pi = 3.14159265359;

long double sqrt(long double n);
long double qbrt(long double n);
long double cos(long double x);
long double arccos(long double x);
long double arctan(long double x);
long double abs(long double x);
int main() {
    long double p,q;
    std::cout << "Введите p, q: ";
    std::cin >> p >> q;
    long double Q = (q / 2) * (q / 2) + (p / 3) * (p / 3) * (p / 3);
    if (Q < 0) {
        long double phi;
        if (q < 0) {
            phi = arctan(sqrt(-Q) / (-q / 2));
        } else if (q > 0) {
            phi = arctan(sqrt(-Q) / (-q / 2)) + pi; 
        } else {
            phi = pi / 2;
        }
        long double y1 = 2 * sqrt(-p / 3) * cos (phi / 3);
        long double y2 = 2 * sqrt(-p / 3) * cos ((phi / 3) + 2 * pi / 3);
        long double y3 = 2 * sqrt(-p / 3) * cos ((phi / 3) + 4 * pi / 3);
        std::cout << "Корень - " << y1 << "\nКорень - " << y2 << "\nКорень - " << y3 << std::endl;
    }
    else if (Q == 0) {
        long double y1 = 2 * qbrt(-q / 2);
        long double y2 = -qbrt(-q / 2);
        if (abs(y1) == abs(y2)) {
            std::cout << "Корень - " << y1 << std::endl;
        }
        else std::cout << "Корень - " << y1 << "\nКорень - " << y2 << std::endl;

    }
    else if (Q > 0) {
        long double y1 = qbrt(-q / 2 + sqrt(Q)) + qbrt(-q/2 - sqrt(Q));
        std::cout << "Корень - " << y1 << std::endl;
    }
}

long double sqrt(long double n) {
    long double low = 0, high = n, accuracy = 1e-16;
    if(n < 1)
        low = n, high = 1;
    while ((high - low) > accuracy) {
        long double mid = (high + low) / 2;
        if (mid * mid < n) low = mid;
        else high = mid;
    }
    return high;
}
long double abs(long double x) {
    return (x < 0) ? -x : x;
}
long double cos(long double x) {
    long double sum = 1, term = 1;
    long double accuracy = 1e-16;
    long long n = 0;
    while (abs(term) > accuracy) {
        n += 2;
        term *= -x * x / (n * (n - 1));
        sum += term;
    }
    return sum;
}

 long double arctan(long double x) {
    long double accuracy = 1e-16, coef = x, sum = coef, n = 1;
    while (abs(coef) > accuracy) {
        coef *= -x * x * (2 * n - 1) / (2 * n + 1);
        sum += coef;
        n += 1;
    }
    
    return sum;
}

long double qbrt(long double n) {
    if (n == 0) return 0;
    long double low = (n < 0) ? n : 0;
    long double high = (n < 0) ? 0 : n; 
        if(n < 1 && n > 0) {
        low = n, high = 1;
    }
    if (n < 0 && n > -1) {
        low = -1, high = n;
    }
    long double accuracy = 1e-16;

    while ((high - low) > accuracy) {
        long double mid = (high + low) / 2;
        if (mid * mid * mid < n) 
            low = mid;
        else 
            high = mid;
    }
    return (n < 0) ? low : high;
}