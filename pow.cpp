#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
        if(n == 1) return x;
        if(n == -1) return 1/x;
        if(n == 0) return 1;
        double temp = myPow(x,n/2);
        if(n >= 0)
            return temp * temp * ((n % 2) ? x : 1);    
        
        else
            return temp * temp * ((n % 2) ? 1/x : 1);   
    }

int main(){
    double ans = myPow(2,-2);
    cout << ans <<"\n";
}