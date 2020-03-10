#include<bits/stdc++.h>
using namespace std;
vector<string> kataWebtoon;
map<string, int> cekAnagram;
map<string, bool> cekKata;
int main(){
        int n;
        int ctr = 0;

        cin>>n;
        while(n--){
            string kata;
            cin>>kata; 
            transform(kata.begin(), kata.end(), kata.begin(), ::tolower);
            sort(kata.begin(), kata.end());
            cekAnagram[kata]++; 
            if(!cekKata[kata]){kataWebtoon.push_back(kata);}
            cekKata[kata]=true;
        }

        for(int i = 0 ; i < kataWebtoon.size();i++){
            cout<<kataWebtoon[i]<<" "<<cekAnagram[kataWebtoon[i]]<<endl;
            if(cekAnagram[kataWebtoon[i]] > 1){
                ctr+= cekAnagram[kataWebtoon[i]];
            }
        }
        cout<<"Jumlah anagram : "<<ctr<<endl;
    return 0;
}