#include<bits/stdc++.h>
using namespace std;
int main()
{    
     int n;
    cin>>n;
    
    vector<int>vect; 
     for(int i=0; i<n; i++)
     {
         int ele;
         cin>>ele;
       vect.push_back(ele);
     }
     int i=n-1;
    while(i>=0 && vect[i]<vect[i-1])
    {
        
          i--;
    }
    if(i>0)
    { int j=n-1;
    while(vect[j]<vect[i-1])
    {
        j--;
    }    
    int temp=vect[i-1];
        vect[i-1]=vect[j + 1];  //swapping
        vect[j+1]=temp;
        reverse(vect.begin()+i,vect.end());
    }
    else
     cout<<"not valid number";
        for(auto x :vect)
        {
            cout<< x << " ";
        }
    }    