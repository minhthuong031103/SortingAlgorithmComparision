#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin>>n;
    _for(i,1,n+1) cin>>a[i];
}

void heapify(int a[], int n, int i) {
    int la = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l<n && a[l]>a[la]) {
        la = l;
    }
    if (r<n && a[r]>a[la]) {
        la = r;
    }
    if (la != i) {
        swap(a[i], a[la]);
        heapify(a, n, la);
    }
}
void heapsort() {
    for (int i = n / 2; i >= 0; i--) {
        heapify(a, n, i);
    }
    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
void gen()
{
    n = 10;
    _for(i,1,n+1) a[i] = rand()%100;
}
int main(int argc, char * argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();

    heapsort();

    return 0;
}
