#include <cmath>
#include <iostream>
#include <conio.h>

int main(){
    std::cout << std::fixed
        << "ceil(+2.4) = " << std::ceil(+2.4) << '\n'
        << "ceil(-2.4) = " << std::ceil(-2.4) << '\n'
        << "ceil(-0.0) = " << std::ceil(-0.0) << '\n'
        << "ceil(-Inf) = " << std::ceil(-INFINITY) << '\n';

    _getch();
    return 0;
}