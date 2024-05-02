#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int maxGCD(int x)
    {
        int MaxGCD=1;
        int index;
        for(int i=2;i<x;i++)
        {
            if((gcd(x,i)+i)>MaxGCD)
            {
                MaxGCD=(gcd(x,i)+i);
                index=i;
            }

        }
        if(MaxGCD!=1)
            return index;
        else
            return 1;

    }



};

int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        Solution ob;
        int x;
        cin>>x;
        cout<<ob.maxGCD(x)<<endl;

    }
    return 0;
}