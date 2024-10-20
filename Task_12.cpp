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
    


int main () {
    double x1,x2,x3,x4,a,b,c,d1,d2,d3,y1,y2;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;
    std::cout << "Введите значение c: ";
    std::cin >> c;
    if (a==0&&b==0&&c==0) {
        std::cout << "Все корни";
        exit(0);   
        }
    if (a == 0){
        std::cout << "error";
    } else {
    d1 = sqrt(b*b-4*a*c+8*a*a);
    if ((b*b-4*a*c+8*a*a)<0) {
        std::cout << "error";
    } else if (d1 == 0) {
        y1 = -b/2/a;
        d2 = sqrt(y1*y1-4);
        if ((y1*y1-4) < 0) {
            std::cout << "error";
        } else if (d2 == 0) {
            x1 = y1/2;
            std::cout << "x1: " << x1;
        } else {
            x1 = (y1 + d2)/2;
            x2 = (y1 - d2)/2;
            std::cout << "x1: " << x1 << std::endl << "x2: " << x2;

        }
    } else {
        y1 = (-b + d1)/2/a;
        y2 = (-b-d1)/2/a;
        
        d2 = sqrt(y1*y1-4);
        if ((y1*y1-4) < 0) {
            std::cout << "error";
        } else if (d2 == 0) {
            x1 = y1/2;
            std::cout << "x1: " << x1;
        } else {
            x1 = (y1+d2)/2;
            x2 = (y1-d2)/2;
            std::cout << "x1: " << x1 << std::endl << "x2: " << x2;
        }

        d3 = sqrt(y2*y2-4);
        if ((y2*y2-4) < 0) {
            std::cout << "error";
        } else if (d3 == 0) {
            x3 = y2/2;
            std::cout << "x3: " << x3;
        } else {
            x3 = (y2+d3)/2;
            x4 = (y2-d3)/2;

            std::cout << "x3: " << x3 << std::endl << "x4: " << x4;
        }
    }
    
}
if (x1||x2||x3||x4 == 0) {
        std::cout << "error";
    } else {
        std::cout << "x1: " << x1 << std::endl << "x2: " << x2 << std::endl <<
        "x3: " << x3 << std::endl << "x4: " << x4 << std::endl;
    }
return 0;
}