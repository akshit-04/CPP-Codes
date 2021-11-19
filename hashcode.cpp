#include<bits/stdc++.h>
using namespace std;
class street {
public:
	int start;
	int end;
	string name;
	int time;
};
class car {
public:
	int countstreet;
	vector<string> l;
};
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	fstream inp("b.txt", ios::in);
	fstream out("outputb.txt", ios::out);
	int d, I, s, v, f;

	inp >> d >> I >> s >> v >> f;
	street *st = new street[s];
	car *cr = new car[v];
	for (int i = 0; i < s; i++)
	{
		int a, b, c;
		string ss;
		inp >> a >> b >> ss >> c;
		st[i].start = a;
		st[i].end = b;
		st[i].name = ss;
		st[i].time = c;

	}
	unordered_map<string, pair<bool, int > > strninc;
	for (int i = 0; i < v; i++)
	{
		int a;
		inp >> a;
		cr[i].countstreet = a;
		for (int j = 0; j < a; j++)
		{	string h;
			inp >> h;
			cr[i].l.push_back(h);
			strninc[h].first = 1;
			if (j == 0)
				strninc[h].second++;

		}
	}

	unordered_map<int, vector<string> > mp;
	for (int i = 0; i < s; i++)
	{
		if (strninc[st[i].name].first)
			mp[st[i].end].push_back(st[i].name);
	}
	unordered_map<int, vector<string > >::iterator it;

	out << mp.size() << "\n";
	for (it = mp.begin(); it != mp.end(); it++)
	{
		out << (it->first) << "\n";
		vector<string>namearray = it->second;
		out << namearray.size() << "\n";
        int count=0;

        for (int i = 0; i < namearray.size(); i++)
		{
            if (strninc[namearray[i]].second)
            count+=strninc[namearray[i]].second;
			// out << namearray[i] << " ";
            
			// if (strninc[namearray[i]].second)
            // {
            //     count+=strninc[namearray[i]].second;
            //     // out << strninc[namearray[i]].second << "\n";
            // }
				
			// else out << 1 << "\n";
		}


		for (int i = 0; i < namearray.size(); i++)
		{

			out << namearray[i] << " ";
            
			if (strninc[namearray[i]].second)
            {
                out<<(int)(count/namearray.size())<<"\n";
                //  out << strninc[namearray[i]].second << "\n";
            }
				
			else out << 1 << "\n";
		}

	}

	return 0;
}