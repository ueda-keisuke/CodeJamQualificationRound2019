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
        string N;
        cin >> N;

        string N2;

        for( int n = 0; n < N.length(); n++ )
        {
            if( N[n] == '4' )
            {
                N[n] = '2';
                N2 += '2';
            }
            else
            {
                if( N2.length() != 0 )
                    N2 += '0';
            }
        }

        cout << "Case #" << t + 1 << ": " << N << " " << N2 << endl;
    }

    return 0;
}