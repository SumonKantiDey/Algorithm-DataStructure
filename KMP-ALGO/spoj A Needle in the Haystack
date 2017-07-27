//spoj A Needle in the Haystack
#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
int k_table[mx];
vector <int> v;
void failure(string txt,int txt_len){
    memset(k_table,0,sizeof(k_table));
    int pos = 1,idx = 0;
    k_table[0] = 0;
    while(pos < txt_len) {

        if(txt[idx] == txt[pos]){
            k_table[pos] = ++idx;
            pos++;
        }

        else{
            if(idx) idx = k_table[idx-1];
            else {
                k_table[pos] = 0;
                pos++;
            }
        }
    }
}

void kmp_matcher(string txt,string pat){
    int i = 0, j = 0,cnt = 0;
    int txt_len = txt.size();
    int pat_len = pat.size();
    failure(pat,pat_len);
    while(i < txt_len){

        if(txt[i] == pat[j]){
            i++;
            j++;
            if(j == pat_len){
                v.push_back(i);
                j = k_table[j-1];
            }
        }
        else{

            if(j){
                j = k_table[j-1];
            }
                else { i++; }
        }
    }
}
int main()
{
    int n;
    while(cin >> n){
        string txt,pat;
        cin >> pat;
        cin >> txt;
        kmp_matcher(txt,pat);
        if(v.size() == 0){
            cout << "\n";
        }
        else{
            for(int i = 0; i < v.size(); i++){
                cout << v[i] - pat.size() << endl;
            }
        }
        v.clear();
    }
    return 0;
}


