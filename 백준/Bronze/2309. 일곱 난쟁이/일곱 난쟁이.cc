#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int tall[9] = {0,};
    int nan[7] = {0,};
    int sum = 0, h = 0;
    
    for(int i=0;i<9;i++) {
        cin >> tall[i];
        
        sum += tall[i];
    }
    
    for(int i=0;i<8;i++) {
        
        for(int j=i+1;j<9;j++) {
            
            if(sum - tall[i] - tall[j] == 100) {
                
                for(int k=0;k<9;k++) {
                    
                    if(k != i && k != j)
                        nan[h++] = tall[k];
                }
                
            }
            
        }
        
    }
    
    sort(nan, nan+7);

    
    for(int i=0;i<7;i++) {
        cout << nan[i] << endl;
    }
    
    
    
}