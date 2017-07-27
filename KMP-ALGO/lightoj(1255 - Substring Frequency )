//KMP complexity 0(m + n) m = text size,n = pattern size
//http://lightoj.com/volume_showproblem.php?problem=1255
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

int kmp_matcher(string txt,string pat){
    int i = 0, j = 0,cnt = 0;
    int txt_len = txt.size();
    int pat_len = pat.size();
    failure(pat,pat_len);
    while(i < txt_len){

        if(txt[i] == pat[j]){
            i++;
            j++;
            if(j == pat_len){//if pattern match then count and go pattern kmp table find next matched pattern
                cnt++;
                j = k_table[j-1];
            }
        }
        else{

            if(j){ //if pattern index is not zero
                j = k_table[j-1];
            }
                else { i++; }//if pattern index is zero then increment txt index
        }
    }
    return cnt;
}
int main()
{
    int t;
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        string txt,pat;
        cin >> txt;
        cin >> pat;
        cout << "Case " << cs << ": " << kmp_matcher(txt,pat) << endl;
    }
    return 0;
}

