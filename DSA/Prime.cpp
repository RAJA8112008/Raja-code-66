#include<iostream>
using namespace std;

int main() {
    int n = 14;
    bool isprime = true;

    if (n <= 1) {
        isprime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isprime = false;
                break;
            }
        }
    }

    if (isprime) {
        cout << "prime no" << endl;
    } else {
        cout << "nonprime" << endl;
    }
    
    return 0;
}
