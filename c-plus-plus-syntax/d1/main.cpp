#include <bits/stdc++.h>

using namespace std;

int main(){
    int x = 10;

    int& ref1 = x;
    cout << ref1;
    cout << &ref1 << " " << &x ;
}
