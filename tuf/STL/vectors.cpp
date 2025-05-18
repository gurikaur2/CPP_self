#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
   // cout<<v[1]<<endl;

    /* vector<pair<int,int>>vec;
   // vec.push_back({1,2});
    vec.emplace_back(1,2);
    cout<<vec[0].first<<endl; */

     vector<int>::iterator it=v.begin();
    for (int i = 0; i < v.size(); ++i)
    {
       cout<<v[i]<<endl;
       cout<<&v[i]<<endl;
    }


    


    return 0;

}