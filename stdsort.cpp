#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <fstream>
#include <iomanip>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)



using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin >> n;
    _for(i, 1, n + 1) cin >> a[i];
}

int main(int argc, char* argv[])
{

    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();

    sort(a + 1, a + n + 1);

    return 0;
}
