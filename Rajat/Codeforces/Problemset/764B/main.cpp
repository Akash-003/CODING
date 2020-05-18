#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int cubes;
    cin >> cubes;
    vector<int> cubeNum;

    int temp;
    for(int i=0;i<cubes;i++)
    {
        cin >> temp;
        cubeNum.push_back(temp);
    }
            
    for (int i = 0; i <= ceil(cubes/2); i++)
    {
        for (int j = i; j<=ceil(cubes/2); j++)
        {
            if(j == ceil(cubes/2))
            {
                continue;
            }
            cubeNum[j] ^=  cubeNum[cubes-j-1];  
            cubeNum[cubes-j-1] ^=  cubeNum[j];  
            cubeNum[j] ^=  cubeNum[cubes-j-1];  

        }
    }    
    /*for (int p = 0; p < cubes; p++)
    {
       cout << cubeNum[p] << " ";
    }
    cout << endl;
    }*/



    for (int i = 0; i < cubes; i++)
    {
       cout << cubeNum[i] << " ";
    }
        

    return 0;
}