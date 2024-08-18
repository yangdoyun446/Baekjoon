#include <bits/stdc++.h>>

using namespace std;

string assign_room(int H, int W, int N) {
	int floor = N % H;
	int room_number = N / H + 1;
	if (floor == 0) {
		floor = H;
		room_number -= 1;
	}
	return to_string(floor) + (room_number < 10 ? "0" : "") + to_string(room_number);
}

int main() {
	int T;
	cin >> T;
	vector<string> results;

	for (int i = 0; i < T; ++i) {
		int H, W, N;
		cin >> H >> W >> N;
		results.push_back(assign_room(H, W, N));
	}

	for (const string& result : results) {
		cout << result << endl;
	}

	return 0;
}