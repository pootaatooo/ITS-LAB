#include <iostream>

using namespace std;

int main() {
    
    while(1) {
        int a;
        cin >> a;
        
        if(a == 0)
            break;
        
        int result = 1;
        
        for(int i=0;i<a;i++) {
            int b, c;
            cin >> b >> c;
        
            result *= b;
            result -= c;
        }
        cout << result << '\n';
    }

    
}