#include<iostream>
#include <cmath>
using namespace std;

class Solution{
public:
    int turtleFingers(int a,int b,int l)
    {
        if(a>l && b>l)
            return 1;
        else if(b==a) {
            int c = 0;
            int k;
            for (k = 0; k < l; k++)
            {
                if(pow(a,k) == l)
                {
                    c=k;
                    break;
                }
                int m=pow(a,k);
                if(l % m==0 && k!=0)
                    c++;

            }

            return c+1;
        }
        else{
            int kExp;
            int count=0;
            for(int i=0;i<l;i++)
            {
                if(pow(a,i)<=l){
                    for(int j=0;j<l;j++)
                    {
                        if(pow(b,j)<=l){
                            kExp=pow(a,i)*pow(b,j);
                            if(l % kExp == 0)
                                count++;
                        }
                        else
                            break;
                    }
                }
                else
                    break;
            }
            return count;
        }
    }
};
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int a,b,l;
        cin>>a>>b>>l;
        Solution ob;
        cout<<ob.turtleFingers(a,b,l)<<"\n";
    }
}