#include <iostream>
using namespace std;

int main() {

    cout << fixed;

    int weight = 13;
    double gravity = 0.165;
    double answer = weight*gravity;

    cout.precision(6);
	cout << weight << " * " << gravity << " = " << answer ;

    return 0;
}