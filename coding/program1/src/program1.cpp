//============================================================================
// Name        : program1.cpp
// Author      : stephy baby
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct word_record_t {

      string word;
      vector<string>::size_type num;
}a;

int main()
{
    cout<<"enter some words"<<endl;
    string token;
    vector<string>word;
    while(cin>>token)
    {

        word.push_back(token);
    }
sort (word.begin(),word.end());
int vsize= a.num;
if(vsize==0)
{
    cout<<"Empty file "<<endl;
    return 1;
}
int count=1;
token=word[0];
for(int i=1; i<vsize; i++)
{
    if(token!=word[i])
    {
        cout<<token<<" appeared "<<count<<" : "<<endl;
    count =0;
    token=word[i];
    }
    count++;
}
cout<< token<< " :"<<count<<endl;
return 0;
}
