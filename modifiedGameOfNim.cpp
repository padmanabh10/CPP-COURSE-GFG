//
// Created by ppkkv on 20-12-2023.
//
/*You are given an array A of n elements. There are two players player 1 and player 2.
A player can choose any of element from an array and remove it.
 If the bitwise XOR of all remaining elements equals 0 after removal of the selected element,
 then that player loses. Find out the winner if player 1 starts the game and they both play their best. */
#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
        int findWinner(int n, int A[])
        {
            int val = 0;
            for(int i=0;i<n;i++){
            val^=A[i];
            }
            if(val==0) return 1;
            if(n%2==0) return 1;
            else return 2;
        }
};
int main()
{
    Solution s;
    int N;
    cout<<"Enter No of elements in Array:\n";
    cin>>N;
    int A[N];
    cout<<"Enter Array:\n";
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    cout<<"Winner is Player "<<s.findWinner(N,A)<<endl;
}