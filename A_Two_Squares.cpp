#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int xmin=INT_MAX,xmax=INT_MIN,ymin=INT_MAX,ymax=INT_MIN;
int x2min=INT_MAX,x2max=INT_MIN,y2min=INT_MAX,y2max=INT_MIN;
bool checkp(int x,int y){
	return x2min<=x && x<=x2max && y2min<=y && y<=y2max;
}
bool checki(int x,int y){
	if( x<xmin || x>xmax )
		return false;
	int xmid=(xmax+xmin)/2;
	int diff=abs(x-xmid);
	return y>=ymin+diff && y<=ymax-diff;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); 
	int  x,y;
	For(i,4){
		cin>>x>>y;
		x2min = min(x2min, x);
        x2max = max(x2max, x);
        y2min = min(y2min, y);
        y2max = max(y2max, y);
	}
	For(i,4){
		cin>>x>>y;
        xmin = min(xmin, x);
        xmax = max(xmax, x);
        ymin = min(ymin, y);
        ymax = max(ymax, y);
	}
	for(int i=-100;i<=100;i++){
		for(int j=-100;j<=100;j++){
			if(checkp(i,j) && checki(i,j)){
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
	return 0;
    }
  