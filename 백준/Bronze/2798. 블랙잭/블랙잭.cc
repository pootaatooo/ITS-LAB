#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int index[n] = {0,};
    int sum, result = 0;
    
    for(int i=0;i<n;i++) {
        cin >> index[i];
    }
    
    for(int i=0;i<n-2;i++) {
        
        for(int j=i+1;j<n-1;j++) {
            
            for(int k=j+1;k<n;k++) {
                sum = index[i] + index[j] + index[k];
                if(result < sum && sum <= m) {
                    result = sum;
                }
            }
            
        }
        
    }
    
    cout << result;
    
}