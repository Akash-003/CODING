#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int e, s, i;
        cin>>s>>i>>e;
        
        int minAddStr = max(0, (e + i - s + 2) / 2);
        int result = max(e - minAddStr + 1, 0);
        
        cout<<result;
    }
}