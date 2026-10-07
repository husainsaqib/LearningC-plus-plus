#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0)
        return 0;

    return 1 + countDigits(n / 10);
}

int main() {

    int n;
    std::cout<<"enter the number"<<endl;
    cin >> n;

    cout << countDigits(n);
}