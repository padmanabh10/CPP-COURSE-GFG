//
// Created by ppkkv on 30-03-2024.
//
#include <iostream>
using namespace std;

void printCheckerboard(int n) {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
                cout<<"##";
            else
                cout<<"..";
        }
        cout<<endl;
        for(int k=0;k<n;k++)
        {
            if((i+k)%2==0)
                cout<<"##";
            else
                cout<<"..";
        }
        cout<<endl;

    }
}

int main() {
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin >> n;
        printCheckerboard(n);
        }
    return 0;
}