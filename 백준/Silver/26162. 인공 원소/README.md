# [Silver V] 인공 원소 - 26162 

[문제 링크](https://www.acmicpc.net/problem/26162) 

### 성능 요약

메모리: 2020 KB, 시간: 0 ms

### 분류

브루트포스 알고리즘, 수학, 정수론, 소수 판정

### 제출 일자

2025년 4월 30일 18:46:51

### 문제 설명

<p>원자 번호 43번을 가진 테크네튬은 세계 최초의 인공 방사성 원소이자, 가장 가벼운 방사성 원소이다. 테크네튬의 최초 발견은 특이하게도 자연이 아닌 인공 합성을 통해 이루어졌는데, 원자 번호 42번을 가진 몰리브데넘에 입자를 충돌시키는 방식으로 생성되었다고 한다.</p>

<p>테크네튬의 어떠한 특성이 이러한 인공 합성 과정을 가능하게 했을지 궁금해진 준익이는, 깊은 고심 끝에 <strong>소수 두 개의 합으로 나타낼 수 있는 원자 번호</strong>에 그 이유가 있을 것이라는 엉뚱한 가설을 내세웠다! 자신의 엄청난 발견에 스스로 감탄한 준익이는, 각 원소가 인공 합성이 가능할지에 대한 여부를 마구 따져보고자 한다. 준익이를 위해 주어진 원자 번호를 가진 원소가 인공 합성이 가능한 원소인지 알아보자!</p>

### 입력 

 <p>첫째 줄에 물어볼 원자 번호의 개수 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>118</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le N \le 118$</span></mjx-container>)</p>

<p>이후 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>개의 줄에 걸쳐 원자 번호 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>a</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$a$</span></mjx-container>가 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D44E TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c38"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>a</mi><mo>≤</mo><mn>118</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \le a \le 118$</span></mjx-container>)</p>

<p>이때 같은 원자 번호는 두 번 이상 주어지지 않는다.</p>

### 출력 

 <p>각 원자 번호를 가진 원소가 인공 합성이 가능한 원소라면 <span style="color:#e74c3c;"><code>Yes</code></span>, 아니라면 <code><span style="color:#e74c3c;">No</span></code>를 주어진 순서대로 한 줄에 하나씩 출력한다.</p>

## 풀이 코드
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
