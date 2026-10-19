#include <iostream>
using namespace std;
int sum=0;
int sumDigits(int n) {
    if (n == 0)
        return 0;
   
    return n%10+ sumDigits(n / 10);
}

int main() {

    int n;
    std::cout<<"enter the number"<<endl;
    cin >> n;

    cout << sumDigits(n);
}