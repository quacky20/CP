#include <bits/stdc++.h>

using namespace std;


int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << ((a^b)+(b^c)+(c^a));
}