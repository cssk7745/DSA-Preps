#include<iostream>
using namespace std;

int countDigits(int n) {
    int d, count = 0, temp = n;

    while (temp > 0) {
        d = temp % 10;

        if (d != 0 && n % d == 0) {
            count++;
        }

        temp = temp / 10;
    }

    return count;
}

int main() {
    int x;
    cin >> x;
    cout << "Number of digits are  " << countDigits(x);
    return 0;
}
