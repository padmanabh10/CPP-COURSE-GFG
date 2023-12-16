//
// Created by ppkkv on 16-12-2023.
//
#include <bits/stdc++.h>
using namespace std;


long long int countStr(long long int n){
    //complete the function here
    long long T = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            if(i + j > n)
                continue;

            long long D = 1;

            long long total = n;
            if(j == 2){
                D = (total * (total - 1)) / 2;
                total -= 2;
            }
            else if(j){
                D = total;
                --total;
            }

            if(i)
                D *= total;

            T += D;
        }
    }

    return T;
}
int main()
{
    long long int x;
    cin>>x;
    cout<<countStr(x)<<endl;

}