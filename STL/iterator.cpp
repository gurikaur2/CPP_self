#include <bits/stdc++.h>

using namespace std;

int main ()
{
    
    
    
    //option 1
    for (auto it = v.begin(); it!=v.end(); it++) //auto means automatically assigning the data type
    {
        cout<<*(it)<<endl;
        cout<<&(*(it))<<endl;
    }
    //option 2
    /* for (vector <int> :: iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<endl;
        cout<<&(*(it))<<endl;
    } */

    //for each loop
    for (auto it :v){
        cout<<it<<endl;
    }
    return 0;
}