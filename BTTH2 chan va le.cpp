#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
int main() 
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i]; 
    } 
    vector<int> even, odd;
         // Chan va le
    for (int i = 0; i < n; ++i) {
        if (A[i] % 2 == 0) {
            even.push_back(A[i]);
        } else {
            odd.push_back(A[i]);
        }
    }
         // Sap xep cac mang theo thu tu tang dan
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end()); 
    for (int i = 0; i < even.size(); ++i) {
        cout << even[i] << " ";
    } 
    for (int i = 0; i < odd.size(); ++i) {
        cout << odd[i] << " ";
    }
    cout << endl;
    
    return 0;
}

