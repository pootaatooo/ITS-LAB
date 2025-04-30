#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    bool erased[1001] = {false}; // 숫자 지워졌는지 표시
    int count = 0;

    for (int i = 2; i <= n; i++) {
        if (!erased[i]) {
            // i의 배수들을 지운다
            for (int j = i; j <= n; j += i) {
                if (!erased[j]) {
                    erased[j] = true;
                    count++;

                    if (count == k) {
                        cout << j << endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
