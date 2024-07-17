#include <iostream>
using namespace std;

int main() {
    cout<<fixed;

    double a = 5.26;
    double b = 8.27;
    double c = a*b;
    cout.precision(3);
    cout<<c;
        return 0;
}