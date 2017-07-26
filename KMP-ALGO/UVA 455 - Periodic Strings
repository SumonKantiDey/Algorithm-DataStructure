//UVA 455 - Periodic Strings
#include<bits/stdc++.h>
using namespace std;
#define mx 1000000
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

int main()
{
    int t;
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        string txt,s;
        cin >> s;
        txt = s + s;
        int len = s.size();
        failure(txt,txt.size());
        for(int i = 0; i < txt.size(); i++){
            if(k_table[i] == len){
               int ans = i - len + 1;
               cout << ans << endl;
               break;
            }
        }
        if(cs != t) cout << "\n";
    }
    return 0;
}
//case aksdfghjak //result = 10

