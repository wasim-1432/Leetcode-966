#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool Check_Vowels(char ch)
    {
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U';
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> ans;
        vector<string> lowerW;
        vector<string> starV;
        vector<string> lowerQ;
        vector<string> LowerS;
        for(int i=0;i<queries.size();i++)
        {
            string s1="";
            for(int j=0;j<queries[i].size();j++)
            {
                s1+=tolower(queries[i][j]);
            }
            lowerQ.push_back(s1);
        }
        for(int i=0;i<wordlist.size();i++)
        {
            string s1="";
            for(int j=0;j<wordlist[i].size();j++)
            {
                s1+=tolower(wordlist[i][j]);
            }
            lowerW.push_back(s1);
        }
        for(int i=0;i<wordlist.size();i++)
        {
            starV.push_back(wordlist[i]);
        }
        for(int i=0;i<starV.size();i++)
        {
            for(int j=0;j<starV[i].size();j++)
            {
                if(Check_Vowels(starV[i][j]))
                {
                    starV[i][j]='*';
                }
                else
                {
                    starV[i][j]=tolower(starV[i][j]);
                }
            }
        }
        for(int i=0;i<queries.size();i++)
        {
            bool found=false;
            if(find(wordlist.begin(),wordlist.end(),queries[i])!=wordlist.end())
            {
                ans.push_back(queries[i]);
                found=true;
            }
            else if(find(lowerW.begin(),lowerW.end(),queries[i])!=lowerW.end())
            {
                int idx=find(lowerW.begin(),lowerW.end(),queries[i])-lowerW.begin();
                ans.push_back(wordlist[idx]);
                found=true;
            }
            else if(find(lowerW.begin(),lowerW.end(),lowerQ[i])!=lowerW.end())
            {
                int idx=find(lowerW.begin(),lowerW.end(),lowerQ[i])-lowerW.begin();
                ans.push_back(wordlist[idx]);
                found=true;
            }
            else if(find(lowerW.begin(),lowerW.end(),lowerQ[i])!=lowerW.end())
            {
                int idx=find(lowerW.begin(),lowerW.end(),lowerQ[i])-lowerW.begin();
                ans.push_back(wordlist[idx]);
                found=true;
            }
            else
            {
                string temp="";
                for(int j=0;j<queries[i].size();j++)
                {
                    char ch=tolower(queries[i][j]);
                    if(Check_Vowels(ch))
                    {
                        temp+='*';
                    }
                    else
                    {
                        temp+=ch;
                    }
                }
                if(find(starV.begin(),starV.end(),temp)!=starV.end())
                {
                    int idx=find(starV.begin(),starV.end(),temp)-starV.begin();
                    ans.push_back(wordlist[idx]);
                    found=true;
                }
            }
            if(found==false)
            {
                string s="";
                ans.push_back(s);
            }
        }
        return ans;
    }
};