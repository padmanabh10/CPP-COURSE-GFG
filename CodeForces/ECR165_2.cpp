#include <iostream>
#include <string>

using namespace std;

int minimum_cost(string& s) {
    int n = s.size();
    int tempCount=0;
    int cost=0;
    int minind=0;
    int flag=0;
    for(int j=0;j<n;j++)
    {
        if(s[j]=='1')
        {
            minind=j;
            break;
        }

    }
    for(int j=0;j<n-1;j++)
    {

        if(s[j]=='1' && s[j+1]=='0')
            flag++;
    }
    if(flag==0)
        return 0;
    for(int i=minind;i<n;i++)
    {
        if(s[i]=='1')
        {
            tempCount++;
        }
        else{
            cost=cost+tempCount+1;
        }

    }
    return cost;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << minimum_cost(s) << endl;
    }

    return 0;
}