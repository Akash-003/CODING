#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    int len = s.length();
    bool mark[26] = {false};

    int index;
    for (int i=0; i<len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            index = s[i] - 'A';
            mark[index] = true;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            index = s[i] - 'a';
            mark[index] = true;
        }
    }

    for (int i=0; i<26; i++) {
        if (mark[i] == false) {
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
