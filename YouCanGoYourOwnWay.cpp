#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;


int main() {
    int T;
    cin >> T;

    for( int t = 0; t < T; t++ )
    {
        int N;
        string P;

        cin >> N;
        cin >> P;

        string yourRoute;

        for( int p = 0; p < P.length(); p++ )
        {
            if( P[p] == 'S' )
                yourRoute += 'E';
            else if( P[p] == 'E' )
                yourRoute += 'S';
        }

        cout << "Case #" << t + 1 << ": " << yourRoute << endl;
    }

    return 0;
}