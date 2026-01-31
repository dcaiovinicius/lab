#include <bits/stdc++.h>

using namespace std;

unsigned int countBits(unsigned long long n){
    int count = 0;

    while(n) {
        count +=  n & 1;
        n >>= 1;
    }

    return count;
}

int main(void) {
    cout << countBits(1234) << "\n";

    string binary = bitset<32>(32).to_string();
    
    cout << binary << "\n";

    return 0;
}
