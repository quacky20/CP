#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while (n--){
        int passengers = 0;
        char choice;
        int num;
        int seats;
        cin >> choice >> num;
        if (choice == 'P') passengers += num;
        else if (choice == 'B'){
            num -= passengers;
            seats = num;
        }

        if (num>=1 && choice == 'B'){
            cout << "YES" << endl;
            passengers -= seats + 1;
        }
        else if (num<1 && choice == 'B'){
            cout << "NO" << endl;
            passengers -= seats;
        }
    }
}