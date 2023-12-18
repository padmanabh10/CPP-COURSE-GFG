/*
  Given an array A of size N.
  The value of an array is denoted by the bit-wise XOR of all elements it contains.
  Find the bit-wise XOR of the values of all subarrays of A.
  */
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int gameOfXor(int N , int A[]) {

            int res = 0;
            for (int i = 0; i < N; i++)
            {
                int freq = (i + 1) * (N - i);

                if (freq % 2 == 1)
                    res = res ^ A[i];
            }
            return res;
        }
};
int main()
{
    Solution s;
    int N;
    cout<<"Enter No of elements in Array:";
    cin>>N;
    int A[N];
    cout<<"Enter Array:";
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<"Bitwise XOR of values of all subarrays:"<<s.gameOfXor(N,A)<<endl;
}