#include<bits/stdc++.h>
using namespace std;
#define For(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin(),a.end()
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n,m;
    cin>>n>>m;
    vector<string> a(n);
    map<string,int> map;
    For(i,n)
    {
        cin>>a[i];
        map[a[i]]++;
    }
    bool ispal=false;
    vector<pair<string,int>> subs;
    for(auto& i : map)
    {
        string s=i.first;
        reverse(all(s));
        if(s==i.first)
        {
            if(i.second%2&&(!ispal))
            {
                subs.push_back({i.first,i.second});
                ispal=true;
            }
            else if(i.second!=1)
            subs.push_back({i.first,i.second-i.second%2});
        }
        else
        {
            s=i.first;
			reverse(all(s));
			if(min(map[s],i.second)>0){
				subs.push_back({i.first,2*min(i.second,map[s])});
				map[s]-=min(i.second,map[s]);
				i.second-=min(i.second,map[s]);
			}
			else
			continue;
        }
    }
    string ss="";
    for(auto itr=subs.begin();itr!=subs.end();itr++){
		int idx=itr-subs.begin();
		if(subs[idx].second%2)
		{
			For(i,subs[idx].second)
				ss+=subs[idx].first;
			subs.erase(itr);
			break;
		}
	}
	for(auto& i:subs)
	{
		string cps=ss;
		ss="";
		For(j,i.second/2)
		ss+=i.first;
		string wq=i.first;
		reverse(all(wq));
		For(j,i.second/2)
		cps+=wq;
		ss+=cps;
	}
	cout<<ss.size()<<endl;
	cout<<ss;
	return 0;
    
}