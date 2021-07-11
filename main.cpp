#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[5];
    for (int i = 0; i < 5; i++) cin >> a[i];
    for (int i = 0; i < 5; i++){
        for (int j = 4; j > 0; j--){
            if (a[j] > a[j - 1])
                swap (a[j], a[j - 1]);
        }
    }
    int z = 0, p = 0, pp = 0;
    for (int i = 0; i < 4 - z; i++){
        if (a[i] == a[i + 1] && pp != a[i] && a[i]){
            p++; pp = a[i];
            i++;
        }
        else if (!a[4] && pp != a[i]){
            p++; z++;
        }
        if (p == 2 || !a[3] && !a[4]){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
