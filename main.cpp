#include <iostream>

#define D_MO "Monday"
#define D_TU "Tuesday"
#define D_WE "Wednesday"
#define D_TH "Thursday"
#define D_FR "Friday"
#define D_SA "Saturday"
#define D_SU "Sunday"

int main() {
    int a = 1;
    std::cout << "Input the day number: ";
    std::cin >> a;
    if (a < 1) a = 1;
    else if (a > 7) a = 7;

    if (a == 1) std::cout << D_MO;
    else if (a == 2) std::cout << D_TU;
    else if (a == 3) std::cout << D_WE;
    else if (a == 4) std::cout << D_TH;
    else if (a == 5) std::cout << D_FR;
    else if (a == 6) std::cout << D_SA;
    else if (a == 7) std::cout << D_SU;

    return 0;
}
