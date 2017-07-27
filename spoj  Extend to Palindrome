//spoj EPALIN - Extend to Palindrome
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

    string txt;
     while(cin >> txt){
        string new_txt,need_str,tmp;
        tmp = txt;
        new_txt = txt;
        reverse(txt.begin(),txt.end());
        if(txt == tmp){
            cout << txt << endl;
            continue;
        }
        txt += new_txt;
        int len = txt.size();
        failure(txt,len);
        int need_idx = k_table[len - 1];
        reverse(new_txt.begin(),new_txt.end());
        need_str = new_txt.substr(need_idx);
        cout << tmp + need_str << endl;
    }
    return 0;
}


