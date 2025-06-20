#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    
    for(int i=0;i<n;i++) {
        cin >> x;
        
        if(x > 0) {
            q.push(x);
        }
        else if(x == 0) {
            if(!q.empty()) {
                cout << q.top() << '\n';
                q.pop();
            }
            else
                cout << "0\n";
        }

    }

}