#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> freq;
        for(char c : s){
            freq[c]++;
        }
        int maxf = INT_MIN;
        int minf = INT_MAX;
        char maxChar, minChar;
        for(auto it : freq){
            if(it.second > maxf){
                maxf = it.second;
                maxChar = it.first;
            }
            if(it.second < minf){
                minf = it.second;
                minChar = it.first;
            }
        }
        if(maxChar == minChar){
            for(auto it : freq){
                if(it.first != maxChar){
                    minChar = it.first;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==minChar){
                s[i]=maxChar;
                break;
            }
        }
        cout<<s<<endl;
    }
}