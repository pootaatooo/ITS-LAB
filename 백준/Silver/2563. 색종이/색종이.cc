#include <iostream>

using namespace std;

int main() {
    int t, count = 0;
    int w[100][100] = {0,};
    int x, y;
    cin >> t;
    
    for(int i=0;i<t;i++) {
        cin >> x >> y;
        
        for(int j=0;j<10;j++) {
            for(int h=0;h<10;h++) {
                w[99 - y - j][x + h] = 1;
            }
        }
        
    }
    
    for(int i=0;i<100;i++) {
        
        for(int j=0;j<100;j++) {
            if(w[i][j] == 1)
                count++;
        }
 
    }
    cout << count;
    
}