//spoj Find String Roots  like uva power string
#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int k_table[mx];

void failure(string txt,int txt_len){
    //memset(k_table,0,sizeof(k_table));
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
    while(cin >> txt && txt != "*"){
        int len = txt.size();
        failure(txt,txt.size());
        int ans =  len - k_table[len-1];
        if(len%ans == 0)
            cout << len / ans << endl;
        else cout << "1" << endl;
    }
    return 0;
}



