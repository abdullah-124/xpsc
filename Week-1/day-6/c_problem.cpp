#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = false;
        while (true)
        {
            if (a > b)
            {
                a--,b++;
                
                if(a<b) break;
            }
            else if(a<b){
                b--;
                a += 3;
                if(a>b)break;
            }
            else{
                flag = true;
                break;
            }
        }
        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
