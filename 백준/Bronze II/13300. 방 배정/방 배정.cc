#include <bits/stdc++.h>

using namespace std;

int main() {
    int female[6] = {0, };
    int male[6] = {0, };
    int n,k,i,s,y, cnt = 0;
    cin >> n >> k;
    for(i = 0; i < n; i++) {
        cin >> s >> y;
        if(s == 1) {
            male[y-1]++;
        }
    }

    for(i = 0; i < 6; i++) {
        cnt += ceil(female[i] / k);
    }
    for(i = 0; i < 6; i++) {
        cnt += ceil(male[i] / k);
    }

    cout << cnt;
}

// 동성끼리 배치해야함
// K = 한방 최대인원
// 입력정보
// 첫줄 학생수N과 최대인원K
// N개의 줄만큼 성별 S와 학년 Y가 주어짐
// S가 0이면 여자 1이면 남자