// Name: Daniel Calderon
// Date: October 8, 2015
// Function string hw


#include<iostream>
#include<cassert>
#include<string>
using namespace std;
string initials(string strA);
int countAlpha(string strA);

int main()
{
//************First Function*****************************************

assert(initials("Daniel Calderon Manriquez")=="DCM");
assert(initials("daniel calderon manriquez")=="dcm");
assert(initials("Potato Fancy Bottom Silver John")=="PFBSJ");

//************Second Function********************************************
assert(countAlpha("Potato")==6);
assert(countAlpha("D4an56ny")==5);
assert(countAlpha("B4acon")==5);

return 0;
}
string initials(string strA)
{
int c;
string a,b,e;
    for(int i=0; i < strA.length(); i++)
    {
        if(strA[i]==' ')
        {
        i++;
        }
        if((strA[i]>='A'&&strA[i]<='Z') || (strA[i]>='a'&&strA[i]<='z'))
        {
        b+=strA.substr(i,1);
        c =strA.find(' ',i);
        e = strA.erase(i+1,c-i);   
        }
    }
return b;
}
int countAlpha(string strA)
{
int count=0;
for (int i =0; i < strA.length(); i++)
{
    if((strA[i]>='A'&&strA[i]<='Z') || (strA[i]>='a'&&strA[i]<='z'))
    {
        count +=1;
       
    }
    else
    {
    count =count;
    }
}
return count;

}












