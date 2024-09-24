#include<bits/stdc++.h>
using namespace std;

int detectThiefPearlCode(vector<int>& pearls) {
    map<int, int> pearlCount;

    for (int pearl : pearls) {
        pearlCount[pearl]++;
    }

    for (auto& entry : pearlCount) {
        if (entry.second % 2 != 0) {
            return entry.first;
        }
    }

    return 0; // This should not happen for valid input
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> pearls(N);
        for (int i = 0; i < N; i++) {
            cin >> pearls[i];
        }

        int thiefPearlCode = detectThiefPearlCode(pearls);
        cout << thiefPearlCode <<endl;
    }

    return 0;
}
