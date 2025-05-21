#include <iostream>

using namespace std;

int main() {
    string a;
    double num = 0;
    string c;
    double x = 0;
    double sum = 0;
    double result = 0;

    for(int i = 0; i < 20; i++) {
        cin >> a >> num >> c;
        
        if(c[0] == 'A' && c[1] == '+')
            x = 4.5;
        else if(c[0] == 'A' && c[1] == '0')
            x = 4.0;
        else if(c[0] == 'B' && c[1] == '+')
            x = 3.5;
        else if(c[0] == 'B' && c[1] == '0')
            x = 3.0;
        else if(c[0] == 'C' && c[1] == '+')
            x = 2.5;
        else if(c[0] == 'C' && c[1] == '0')
            x = 2.0;
        else if(c[0] == 'D' && c[1] == '+')
            x = 1.5;
        else if(c[0] == 'D' && c[1] == '0')
            x = 1.0;
        else if(c[0] == 'F')
            x = 0.0;
        else
            x = -1;
        

        
        
        if(x != -1) {
            sum += num;
            result += num*x;
        }
            
    }
    
    cout << result / sum;
    
}