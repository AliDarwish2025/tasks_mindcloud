#include <iostream>
#include <vector>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> app, vector<int> oran);


int main() {
    int s, t , a, b , m, n;
	/*s: integer, starting point of Sam's house location.
      t: integer, ending location of Sam's house location.
      a: integer, location of the Apple tree.
      b: integer, location of the Orange tree.
	  m is the number of  apples in the tree
	  n the number of oranges in teh trre */
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;
    vector<int> app(m);
    vector<int> oran(n);
    for (int i = 0; i < m; i++) {
        cin >> app[i];
        }
    for (int i = 0; i < n; i++) {
        cin >> oran[i];
    }
    countApplesAndOranges(s, t, a, b, app, oran);
    return 0;
}
void countApplesAndOranges(int s, int t, int a, int b, vector<int> app, vector<int> oran) {
    int appleCount = 0;
    int orangeCount = 0;
    for (int i = 0; i < app.size(); i++) {
        int P = a + app[i];
        if (P >= s && P <= t) {
            appleCount++;
        }
    }
    for (int i = 0; i < oran.size(); i++) {
        int P = b + oran[i];
        if ( P >= s && P <= t) {
            orangeCount++;
        }
    }
    cout << appleCount << endl;
    cout << orangeCount << endl;
}
