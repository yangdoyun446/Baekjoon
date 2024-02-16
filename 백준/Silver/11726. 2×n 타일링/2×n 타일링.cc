#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int a;
    vector<int> b(1005);
    b[0] = 1;
    b[1] = 1;
    b[2] = 2;
    cin >> a;
    if(a == 1){
        cout << "1" << endl;
    }else if(a == 2){
        cout << "2" << endl;
    }else{
        for(int i = 3; i <= a; i++){
            b[i] = (b[i-1] + b[i-2]) % 10007;
        }
        cout << b[a] << endl;
    }
}