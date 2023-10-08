#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
 
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        map<char,int>mp,mp2;
        for(int i=0; i<a.size(); i++)
        {
            mp[a[i]]++;
        }
        for(int i=0; i<b.size(); i++)
        {
            mp2[b[i]]++;
        }
 
        if(mp['S'] && mp2['S'])
        {
            if(mp['X']>mp2['X'])
                cout<<"<";
            else if(mp['X'] < mp2['X'])
                cout<<">";
            else
                cout<<"=";
        }
        else if(mp['S'] && mp2['M'] || mp['S'] && mp2['L']
                || mp2['L'] && mp['M'])
            cout<<"<";
        else if(mp2['S'] && mp['M'] || mp2['S'] && mp['L']
                || mp['L'] && mp2['M'])
            cout<<">";
        else if(mp['L'] && mp2['L'])
        {
            if(mp['X']>mp2['X'])
                cout<<">";
            else if(mp['X'] < mp2['X'])
                cout<<"<";
            else
                cout<<"=";
        }
        else
            cout<<"=";
 
 
 
 
        cout<<endl;
    }  
    return 0;
}
