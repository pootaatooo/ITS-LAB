#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int x;
    cin >> x;
    
    int num = 64;
    int cnt = 0;

    while(x > 0) {
        if(num > x)
            num /= 2;
        else {
            x -= num;
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}