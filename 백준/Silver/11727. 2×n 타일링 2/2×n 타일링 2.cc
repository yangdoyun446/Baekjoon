#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int a;
    vector<int> b;
    b.push_back(1);
    b.push_back(1);
    b.push_back(3);
    cin >> a;
    if(a == 1){
        cout << "1" << endl;
    }else if(a == 2){
        cout << "3" << endl;
    }else{
        for(int i = 3; i <= a; i++){
            b.push_back((b[i-1] + b[i-2] * 2) % 10007);
        }
        cout << b[a] << endl;
    }
}