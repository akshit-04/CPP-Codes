#include <bits/stdc++.h>
#include <string>
#include <fstream>
using namespace std;
#define MAX 300
int main ()
{
    
    size_t pos1;
    size_t pos;
    string str, tmp;
    std::string filename;
    cout <<"Please enter the name of the file" << endl; 
	cin >> filename;
  
	ifstream myfile(filename.c_str());
	while(getline(myfile, tmp))
	{
	str += tmp;
    }
   
  
 stack<int> stack;
  stack.push(0);
  
  
  pos1= 0;
  pos = 0;   
                               // I believe my problem is with the below code
  while (pos != string::npos)
  {      
  
    if (pos=str.find("<" && ">",pos+1))   
    stack.push(1);
}
while (pos1 != string::npos)
  {      
   
   if (pos1=str.find("</" && ">",pos1+1))     
    stack.pop();
}
 
 
 if (stack.top() == 0)
 { 
            cout << "Legal" << endl;
            }
   else
   {
         cout << "Illegal" << endl;
}
system("pause>nul");
  return 0;
}