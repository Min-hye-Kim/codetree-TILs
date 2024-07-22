#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cin>>a>>b;

    for( i=b ; i>a-1 ; i-- ){
        cout<<i<<" ";
    }

    return 0;
}