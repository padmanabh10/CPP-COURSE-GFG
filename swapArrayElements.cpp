//
// Created by ppkkv on 04-03-2024.
//
#include <iostream>
using namespace std;
class Solution{
public:
    void swapElements(int arr[], int n){

        // Your code here
        for(int  i=0;i+2<n;i++){
            swap(arr[i], arr[i+2]);
        }
        return;
    }
};
int main() {
        int n;
        cin >> n;

        int arr[n];

        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        // calling function to swap the array swap elements
        obj.swapElements(arr, n);

        // Printing the modified array
        for(int i = 0;i<n;i++){
            cout << arr[i] << " ";
        }

        cout << endl;

    return 0;
}