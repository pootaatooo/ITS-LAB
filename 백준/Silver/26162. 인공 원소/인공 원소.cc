#include <iostream>

using namespace std;

bool isPrimeNumber(int x) {
    if(x < 2) return false;
    for(int i=2;i*i<=x;i++) {
        if(x%i==0) return false;
    }
    return true;
}
    


int main() {
    int n;
    cin >> n;
    
    int a[181];
    
    
    for(int i=0;i<n;i++) {
        cin >> a[i];           // 각 원자번호들 배열에 입력.
    }
    
    // 118 이내의 소수를 찾는 알고리즘 구현, 추가적으로 그 소수들의 합 또한 답이 될 수 있음.
    // 1은 소수가 아니므로 범위에서 제외, 또한 소수의 배수들도 대칭을 이루므로 소수가 아님.
    
    int prime[181];
    int cnt = 0;
    
    for(int i=2;i<=118;i++) {
        if(isPrimeNumber(i))
            prime[cnt++] = i;
    }
    
    for(int i=0;i<n;i++) {
        bool found = false;
        int num = a[i];
        
        for(int j=0; j<cnt; j++) {
            for(int k=j; k<cnt;k++) {
                if(prime[j] + prime[k] == num) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
        
        if (found) 
            cout << "Yes\n";
        else
            cout << "No\n";
    
        
    }

    
   
    return 0;
    
}


 // 에라토스테네스의 체는 '특정범위 내의 소수'를 판정하는 데 적합한 알고리즘