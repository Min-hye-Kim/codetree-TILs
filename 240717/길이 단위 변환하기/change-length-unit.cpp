#include <iostream>
using namespace std;

int main() {
    cout<<fixed;
    double acm = 9.2*30.48;
    double bcm = 1.3*160934;

    cout.precision(1);
    cout << "9.2ft" <<" = "<< acm <<"cm";
    cout<<endl;
    cout << "1.3mi" <<" = "<< bcm <<"cm";
    return 0;
}