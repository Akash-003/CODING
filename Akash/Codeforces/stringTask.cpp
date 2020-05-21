#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s,temp;
    cin >> s;
    transform(s.begin(),s.end(),s.begin(),::tolower); 
    
    for(int i=0; i<s.length(); i++)
    {   
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') {
            continue;
        }
        cout << "." << s[i]; 
    }
    return 0;
}
