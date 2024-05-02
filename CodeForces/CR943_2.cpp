#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution{
public:
    int maxPrefixLength(const string& a, const string& b) {
        int maxPrefix = 0;
        int aLen = a.length();
        int bLen = b.length();
        int j = 0;

        for (int i = 0; i < bLen && j < aLen; ++i) {
            if (a[j] == b[i]) {
                ++j;
                ++maxPrefix;
            }
        }

        return maxPrefix;
    }
};

int main() {
    int tc;
    cin >> tc;
    while(tc--) {
        string a, b;
        int n, m;
        cin >> n >> m;
        cin >> a >> b;
        Solution ob;
        cout << ob.maxPrefixLength(a, b) << endl;
    }
    return 0;
}
