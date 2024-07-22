#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin >> b >> a ;

    for( i=b ; i>a-1 ; i-=2 ){
        cout << i << " " ;
    }

    return 0;
}