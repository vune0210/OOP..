#include<iostream>
#include<algorithm>
#include<cstdint>
#include <cmath>
using namespace std;

// bai 12

bool isSquare(int n) {
    if (n < 0)  return false;
    
    else {
        return ((int)(sqrt(n))) * ((int)(sqrt(n))) == n;
    }
}

// bai 13

bool isPerfect(int n) {
    // Cách out tr?nh
    return n == 6 || n == 28 || n == 496 || n == 8128;

    // Cách th? hi?n m hi?u bài
    // int sum = 0;
    // for(int i = 1; i < n; i++) {
    //     if(n % i == 0) {
    //         sum += i;
    //     }
    // }
    // return sum == n;
}

bool isPrime(int n){
    if (n <= 1)
    {
        return false;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void bai_13() {
    int n;
    cin >> n;
    for (size_t i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
        
    }

    cout << endl;

    for (size_t i = 2; i <= n; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " ";
        }
        
    }
    cout << endl;
    for (size_t i = 2; i <= n; i++)
    {
        if (isSquare(i))
        {
            cout << i << " ";
        }
        
    }
     cout << endl;
}


void bai_14() {
    int n;
    cin >> n;
    int max = INT32_MIN;
    int min = INT32_MAX;

    for (size_t i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;

        max = tmp > max ? tmp : max;
        min = tmp < min ? tmp : min;
    }

    cout << max << endl;
    cout << min << endl;
    
}


void bai_15() {
    int n;
    cin >> n;

    int tmp, a, b;

    a = 1;b = 1;
    if (n <= 1)
    {
        cout << 1;
    }
    
    while (true)
    {
        tmp = a + b;
        if (tmp > n)
        {
            break;
        }
        cout << tmp << ' ';
        a = b;
        b = tmp;
    }
}

void bai_16 () {
    string num[] = {"khong", "mot", "hai", "ba", "bon", "nam", "sau", "bay","tam", "chin"};

    int n;
    while (cin >> n)
    {
        if(!(0 <= n && n <= 9)) break;

        cout << num[n] << endl;
    }
}
int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    
    return 0;
}
