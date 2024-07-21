#include <iostream>
using namespace std;

int main() {
    /*남자는 숫자 0, 여자는 숫자 1
    19세 이상을 성인이라고 합시다.
    성별(숫자 0 또는 1)과 나이를 입력받아 
    MAN(성인남자), WOMAN(성인여자), 
    BOY(미성년남자), GIRL(미성년여자) 출력*/
    int age, sex;
    cin>>sex>>age;

    if(sex==0){
        if(age>=19){
            cout<<"MAN";
        }
        else {
            cout<<"BOY";
        }
    }
    else if(sex==1){
        if(age>=19){
            cout<<"WOMAN";
        }
        else{
            cout<<"GIRL";
        }
    }



    return 0;
}