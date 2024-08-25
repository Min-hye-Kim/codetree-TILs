#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val=0;

    //sum_val 값 초기화 잊지 않을 것
    cin >> a >> b;

    for ( int i=a ; i<=b ; i++ ){
        sum_val += i;
    }
    cout<<sum_val;

    return 0;
}