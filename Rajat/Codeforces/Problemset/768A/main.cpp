#include <bits/stdc++.h>
#define veci vector<int>
#define loop(i,a,b) for (int i = a; i < b; i++)
#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 
using namespace std;

int main()
{
    int stewards;

    cin >> stewards;

    veci strengths;
    int temp,count=0;
    loop(i,0,stewards)
    {
        cin >> temp;
        strengths.push_back(temp);
    }
    sort(strengths.begin(),strengths.end());
    //printVeci(strengths);
    //for(int i = 0; i < strengths.size(); i++) 
    //    {
    //        cout << strengths[i] << endl;
    //    }
    loop(i,1,stewards-1)
    {
        if(strengths[i]>strengths[0] && strengths[i]<strengths[stewards-1] )
        {
            count++;
        }
    }
    cout<< count;
    return 0;
}