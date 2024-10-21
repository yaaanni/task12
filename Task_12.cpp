#include <iostream>

double sqrt (double n) {
    const double eps=0.0000001;
    double sq=0;
    while(sq*sq <n)
    {
    sq+=eps;
    };
    return sq;
    }

int main() {
double a,b,c,x,t,d,t1,t2,x1,x2,x3,x4;
std::cout << "Введите  a: ";
std::cin >> a;
std::cout << "Введите  b: ";
std::cin >> b;
std::cout << "Введите  c: ";
std::cin >> c;
if (a==0&&b==0&&c==0){
    std::cout << "Все корни";
    exit(0);
}
if (a==0&&b==0&&c!=0) {
    std::cout << "Нет корней";
    exit(0);
}
if (c==0&&b==0) {
        std::cout << " Корень: 0";
        exit(0);
    }
if (a==0&&c==0) {
        std::cout << " Корень: 0";
        exit(0);
    }
if(c==0) {
    std::cout << "Значение корня уравнения: \n";
}
t = x*x;
d = sqrt(b*b-4*a*c);
if ((b*b-4*a*c)<0) {
    std::cout << "Нет корней";
} else {
t1 = (d-b)/(2*a);
t2 = (-d-b)/(2*a);
if(t1<0 && t2< 0) {
    std::cout << "Нет корней";
    exit(0);
}
if (t1 < 0) {
x1 = sqrt(t2);
x2 = -sqrt(t2);
std::cout << "Значение корня уравнения: " << x1 << std::endl;
std::cout << "Значение корня уравнения: " << x2 << std::endl;
} else if (t2<0) {
x1 = sqrt(t1);
x2 = -sqrt(t1);
std::cout << "Значение корня уравнения: " << x1 << std::endl;
std::cout << "Значение корня уравнения: " << x2 << std::endl;
} else {
x1 = sqrt(t1);
x2 = -sqrt(t1);
std::cout << "Значение корня уравнения: "<< x1 << std::endl;
std::cout << "Значение корня уравнения: "<< x2 << std::endl;
x1 = sqrt(t2);
x2 = -sqrt(t2);
std::cout << "Значение корня уравнения: "<<x1 << std::endl;
std::cout << "Значение корня уравнения: "<<x2 << std::endl;
}
}
return 0;
}