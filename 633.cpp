#include <bits/stdc++.h>
#include "print.h"
using namespace std;

class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        int a = 1, n = ceil(sqrt(c));
        for (; a <= n; a++)
        {
            double t=c - a * a;
            if (t>=0 and (double)sqrt(t) == (int)(sqrt(t)))
            {
                cout << a << endl;
                return true;
            }
        }
        return false;
        // int a=1,b=floor(sqrt(c)),x;
        // while(a<=b){
        //     x=a*a+b*b;
        //     if(x>c)
        //     b--;
        //     else if(x<c)
        //     a++;
        //     else
        //     {
        //         cout<<a<<" "<<b<<endl;
        //         return true;
        //     }
        // }
        // return false;
    }
};

int main()
{
    Solution s;
    cout << s.judgeSquareSum(4);
    // cout<<(2==2.0000000000000001);
}