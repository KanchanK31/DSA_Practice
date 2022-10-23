//code to count total vovels in the string
#include<iostream>
using namespace std;

int main()
{
    string str="this is string1";
    int cnt=0;
    for(int i=0;i<str.size();i++)
    {
        if(((str[i])=='a')||((str[i])=='e')||((str[i])=='o')||((str[i])=='i')||((str[i])=='u')||
            ((str[i])=='A')||((str[i])=='E')||((str[i])=='I')||((str[i])=='O')||((str[i])=='U')
        )
        {
            cnt++;
        }
    }
    cout<<"Number of vovels in string are : "<<cnt<<endl;
    return 0; 
} 
