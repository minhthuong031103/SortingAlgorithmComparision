#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin>>n;
    _for(i,1,n+1)
    {
        cin>>a[i];
    }
}
void quicksort( int left, int right) {
    int i = left, j = right;
    int temp;
    int pivot = arr[(left + right) / 2];
    while (i <= j) {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;
        if (i <= j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if (left < j) quick_sort(a, left, j);
    if (i < right) quick_sort(a, i, right);
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
 
    quicksort(1, n);

    return 0;
}
