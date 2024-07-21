#include <iostream>
using namespace std;

int main() {
    /* 
    - 첫 번째 줄에 두 사람 중 한 사람이라도
      19세이상이면서 남자라면 1을 출력.
    - 문제의 조건에 해당하지 않는다면 0을 출력.
    */
    int age1, age2;
    string sex1, sex2 ;
    cin>>age1>>sex1>>age2>>sex2;

    cout<<((age1>=19 && sex1=="M")||(age2>=19 && sex2=="M"));

    return 0;
}