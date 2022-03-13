#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;

string to_str(int val)
{
    string q;
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}
void testpoint(string name, vector<double> &data)
{
   
    clock_t start, end;
    double time_use;
    for(int i = 1; i<=10; ++i)
    {
        cout<<"tien hanh test "<<i<<":\n";
        start = clock();
        system((name + ".exe " + to_str(i)).c_str());
        end = clock();
        time_use = (double)(end - start)/CLOCKS_PER_SEC;
        cout<<name<<"\'thoi gian chay test "<<i<<" : "<<time_use<<"\n";
        data.push_back(time_use);
    }
    cout<<"Hoan thanh!\n";
}
int main()
{
    system("sinhtest.exe");
    cout<<"hooan tat sinh test\n";
    vector<double> d1,d2,d3,d4;
 
    chambai("heapsort", d1);
    
    chambai("mergesort", d2);
            
    chambai("quicksort", d3);

    chambai("sort_std", d4);


    cout<<"so sanh thoi gian thuc hien cac thuat toan\n";
    cout<<"*******************************************\n";
    cout<<setw(12)<<"thuat toan";
    _for(i,1,11) cout<<setw(12)<<"test " + to_str(i);
    cout<<"\n";
    cout<<setw(12)<<"heapsort";
    _for(i,0,10) cout<<setw(12)<<d1[i];
    cout<<"\n";

    cout<<setw(12)<<"mergesort";
    _for(i,0,10) cout<<setw(12)<<d2[i];
    cout<<"\n";

    cout<<setw(12)<<"quicksort";
    _for(i,0,10) cout<<setw(12)<<d3[i];
    cout<<"\n";

    cout<<setw(12)<<"sort_std";
    _for(i,0,10) cout<<setw(12)<<d4[i];
    cout<<"\n";
    system("pause");

    return 0;
}
