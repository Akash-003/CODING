#include <bits/stdc++.h>
#define veci vector<int>
#define loop(a,b) for (int i = a; i < b; i++)
#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 
using namespace std;
/*
veci needPlacement;

int dumpit(int maxSize)
{
  //loop(0,needPlacement.size())
  //while(!needPlacement.empty())
  for(int i=needPlacement.size()-1;!needPlacement.empty();i--)
  { if(needPlacement[needPlacement.size()-1]==maxSize)
    {
      cout << needPlacement[i] << " ";
      needPlacement.pop_back();

      maxSize--;
    }
    else
    {
      break;
    }
    
  }

  cout << endl;
  return maxSize;
}
int main()
{
    int days;

    cin >> days;
    int maxSize = days;
    int todaySize;
    loop(1,days+1)
    {
      cin >> todaySize;
      if(todaySize==maxSize)
      {
        cout << todaySize << " ";
        maxSize--;
        maxSize = dumpit(maxSize);
      }
      else
      {
        needPlacement.push_back(todaySize); 
        sort(needPlacement.begin(),needPlacement.end());
        cout << "\n";
      }
      
    } 
    return 0;
}
*/
// better solution as above one exceeds time limit on a TC
int arr[100005];
int main()
{
  memset(arr,0,sizeof(arr));
  int days,todaySize;

  for(scanf("%d",&days);days;)
  {
    scanf("%d",&todaySize);
    arr[todaySize]=1;
    while (arr[days])
    {
      cout << days << " ";
      days--;
    }
    cout << "\n";
    
  }
  return 0;
}
