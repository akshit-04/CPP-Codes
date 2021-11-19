#include <bits/stdc++.h>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    const char TAG = '<';
    const char TAGC = '/';
    char fileChar;   
    string fileName; 
    ifstream inFile;
    cin >> fileName;
    inFile.open(fileName.c_str());        

    if(inFile)                
 cout << "file IS open" << endl;
else
 cout << "file NOT open" << endl;

  /*while (!inFile) //error checking to ensure file exists
{
    inFile.clear(); //clear false file
    cout << endl << "Re-enter a valid filename: " << endl;
    cin >> fileName;
    inFile.open (fileName.c_str());
}*/

std:string line;
stack<int> s;
inFile.open(fileName.c_str()); //reopen file
bool flag=true;
while(inFile)
{
        if(fileChar == TAGC)
        {
            if(s.size())
            s.pop();
            else
            {
                flag=false;
            }
            
        }
        if (fileChar == TAG)
        {
            s.push(1);
        }
        

}
if(s.size() || !flag)
cout<<"NO";
else
{
    cout<<"YES";
}

inFile.close ();

return (0);

}