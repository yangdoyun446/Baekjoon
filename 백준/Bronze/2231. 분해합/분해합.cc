#include <iostream>

using namespace std;

int main() {
	// 속도를 늘리기 위해 사용하는 코드
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// 입력
	int N;
	cin >> N;

	// 본격적인 완전탐색 시작
	for (int i = 1; i < N; i++) {  // N만큼 반복
		// 임시변수와 합변수를 i로 설정(합변수는 생성자와 각 자리수를 더한것을 저장하는 곳, 임시변수는 자리수를 깎으면서 sum에 더할때 사용)
		int temp = i;
		int sum = i;

		while (temp != 0) {
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N) {	 // 합이 N과 같으면, 즉 i가 N의 생성자면 i를 출력하고 종료
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;	// 위 for문에서 안끝났을때, 생산자가 없다고 판단 0을 출력
	return 0;
}