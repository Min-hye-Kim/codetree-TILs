#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin>>n;

    if(n==12 || n<3){
        cout<<"Winter";
    }
    else if(n<6){
        cout<<"Spring";
    }
    else if(n<9){
        cout<<"Summer";
    }
    else{
        cout<<"Fall";
    }
    
    return 0;
}