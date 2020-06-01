#include <bits/stdc++.h>
#define veci vector<int>
#define loop(a,b) for (int i = a; i < b; i++)
#define printVeci(v) for(int i = 0; i < v.size(); i++) {cout << v[i] << endl;} 
using namespace std;

int main()
{
    int cases;

    cin >> cases;

    while (cases--)
    {
      int size,selection;
      cin >> size >> selection;

      int oddFreq = 0,evenFreq = 0,element;
      while(size--)
      {
        cin >> element;
        if(element&1)
        {
          oddFreq++;
        }
        else
        {
          evenFreq++;
        }
      }
      bool ans=false;
      for (int i = 1; i <= oddFreq; i+=2)
      {
        if(i==selection)
          ans = true;
        if(i<selection && evenFreq>=selection-i)
          ans=true;
      }
      if(ans)
      {
        printf("Yes\n");
      }
      else
      {
        /* code */
        printf("No\n");
      }
      
      
    }
    
    return 0;
}
