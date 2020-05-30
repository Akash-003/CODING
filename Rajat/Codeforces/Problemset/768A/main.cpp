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

/* another O(n) solution

#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n,c1=0,c2=0,mx=0,mn=1000000007;
	cin>>n;
    
    //to calculate max and min value in the input
	for(int i=0;i<n;i++) 
	{
		cin>>a[i];
		mx=max(mx,a[i]),mn=min(mn,a[i]);
	}
    
    //to find the number of times max and min exist
	for(int i=0;i<n;i++)
	{
		if(a[i]==mx) c1++;
		if(a[i]==mn) c2++;
	}
	if(mx==mn) cout<<0;
	else cout<<(n-c1-c2); 
	return 0;
}

*/
