#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,a,b;
    cin >> k >> a >> b;
    /*
    if(((a+b)/k)==0)
    {
        cout << -1;
    }       
    else
        if(a==b)
            cout << (a+b)/k - 1;
        else
            cout << (a+b)/k; 
            */
    int sPoints=0,bPoints=0;
    int i=0,sets=0;
    int totalPoints=a+b;
    do
    {   totalPoints--;

        sPoints++;
        if(sPoints==k)
        {
            sPoints=0;
            bPoints=0;
            sets++;
            continue;
        }
        bPoints++;
        i+=2;

    }while (i<=(a+b) && totalPoints-2>=0);

    cout << sets;

    return 0;
}