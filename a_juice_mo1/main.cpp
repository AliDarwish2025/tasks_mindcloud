#include <iostream>
using namespace std;

int main() {
    int n, p, total = 0;
    while(1){
		//  n is the number of orange-containing drinks in Vasya's fridge.
     cin >> n;
     if( n >= 1 && n <= 100)break;
     else{ continue ; }
    }
    for (int i = 0; i < n; i++) {
     while(1){
		 // p is the volume fraction of orange juice in the i-th drink, in percent.
     cin >> p;
     if( p >= 0 && p <= 100)break;
     else{ continue ; }
    }
    total += p;
    }
	// total is the volume fraction in percent of orange juice in Vasya's cocktail.
    cout.precision(12);
    cout << (double)total / n << endl;
    return 0;
}
