#include <iostream>

using namespace std;

int main(void){
    int a, b = 0;
    cin >> a;
    while(a >= 3){
        if(a % 5 == 0){
            b++;
            a -= 5;
        }else{
            b++;
            a -= 3;
        }
    }
    
    if(a != 0){
        cout << -1 << endl;
    }else{
        cout << b << endl;
    }
}