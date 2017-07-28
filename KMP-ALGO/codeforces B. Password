//KMP complexity 0(m + n) m = text size,n = pattern size
//codeforces.com/contest/126/problem/B
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
        string txt,pat;
        cin >> txt;
        failure(txt,txt.size());
        int id = k_table[txt.size()-1];

        if(id == 0){
          cout << "Just a legend" << endl;
          return 0;
        }
        int cnt = 0;
        for(int i = 0; i < txt.size(); i++){
            if(k_table[i] == id){
               cnt++;
               if(cnt >= 2){
                 cout<<txt.substr(0,id) << endl;
                 return 0;
               }
            }
        }

        if(k_table[id-1] != 0){
            cout <<txt.substr(0, k_table[id-1])<<endl;
            return 0;
        }
        cout << "Just a legend" << endl;
    return 0;
}


