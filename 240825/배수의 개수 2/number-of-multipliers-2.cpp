#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
    
    if( n1%2==1){
            cnt++;
        }
    if( n2%2==1){
            cnt++;
        }
    if( n3%2==1){
            cnt++;
        }
    if( n4%2==1){
            cnt++;
        }
    if( n5%2==1){
            cnt++;
        }
    if( n6%2==1){
            cnt++;
        }
    if( n7%2==1){
            cnt++;
        }
    if( n8%2==1){
            cnt++;
        }
    if( n9%2==1){
            cnt++;
        }
    if( n10%2==1){
            cnt++;
        }
    
    cout << cnt;



    return 0;
}