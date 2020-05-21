#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s1,s2;
    cin>> s1 >> s2;
    
    int l1 = s1.length();
    int l2 = s2.length();
 
    if(!s1.compare(s2)) {
        cout << -1;
    } else {
        cout << max(l1,l2);
    }
 
    return 0;
} 