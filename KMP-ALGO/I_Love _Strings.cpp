#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int k_table[mx];

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

bool kmp_matcher(string txt,string pat){
    int i = 0, j = 0,cnt = 0;
    int txt_len = txt.size();
    int pat_len = pat.size();
    failure(pat,pat_len);
    while(i < txt_len){

        if(txt[i] == pat[j]){
            i++;
            j++;
            if(j == pat_len){
                return 1;
                //j = k_table[j-1];
            }
        }
        else{

            if(j){
                j = k_table[j-1];
            }
                else { i++; }
        }
    }
    return 0;
}
int main()
{
    int t,q;
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        string txt,pat;
        cin >> txt;
        cin >> q;
        while(q--){
            cin >> pat;
            if(kmp_matcher(txt,pat) == true){
                puts("y");
            }
            else puts("n");
        }

    }
    return 0;
}

