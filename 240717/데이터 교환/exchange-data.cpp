#include <iostream>
using namespace std;

int main() {
    int a=5, b=6, c=7;

    int temp1, temp2;
    temp1=a;
    temp2=b;

    a=c;
    b=temp1;
    c=temp2; 

    cout<<a<<endl<<b<<endl<<c;
    return 0;
}