#include <iostream>

using namespace std;

    int main() {
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
	//  There are k2 digits 2, k3 digits 3, k5 digits 5 and k6 digits 6.
    int total = 0;
    while(k2 > 0 && k5 > 0 && k6 > 0 )
    {
        total +=256;
        k2 -- ; k5 -- ; k6 --;
    }
    while(k2 > 0 && k3 > 0 )
    {
        total += 32 ;
        k2 -- ; k3 -- ;
    }
    cout << total ;
    return 0;
}
