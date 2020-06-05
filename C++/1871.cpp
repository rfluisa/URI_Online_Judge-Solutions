//1871	Zero vale Zero	Accepted	C++	0.000	04/01/2019 23:13:42
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long int n=1, m=1;
    string res;
    
    while(n != 0 && m != 0){
        cin >> n >> m;
        res = to_string(n+m);
        res.erase(remove(res.begin(), res.end(), '0'), res.end());
        if(n != 0 && m != 0)
            cout << res << "\n";
    }
    
    return 0;
}