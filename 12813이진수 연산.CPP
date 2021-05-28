#include <iostream>
#include <bitset>
using namespace std;

int main() {
    bitset<100000>b, c;


    cin >> b >> c;
    cout << (b & c) << "\n";
    cout << (b | c) << "\n";
    cout << (b ^ c) << "\n";
    cout << ~b << "\n";
    cout << ~c << "\n";


}