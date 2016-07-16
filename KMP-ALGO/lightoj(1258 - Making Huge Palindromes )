//prob http://lightoj.com/volume_showproblem.php?problem=1258
#include<bits/stdc++.h>
using namespace std;
#define MAXX 1000005
int f[MAXX];
int len;
string txt,pattern;
void failure(string pattern,int len_p)
{
    int k=1,len=0,m;
    f[0]=0;
    while(k<len_p){
    if(pattern[k]==pattern[len]){
        f[k++]=++len;

    }
    else{
        if(len)
            len=f[len-1];
        else f[k++]=0;
    }
  }
  //for(int a=0; a<k; a++){
    //    cout<<f[a]<<"    "<<a<<endl;
    //}
}
int kmp(string txt,string pattern)
{
    int i=0,j=0;
    for(j=0,i=0;i<len;i++)
    {
        while(j!=0 && txt[i] != pattern[j])//pattern ar 1st index ke kokono aikane asbe na
        {
            //cout<<"i=== "<<i<<"    j=== "<<j<<endl;
            j=f[j-1];
            //cout<<"j failure index   "<<j<<endl;
        }
        if(txt[i] == pattern[j]){
            j++;
           // cout<<"j=====  "<<j<<endl;
        }
    }
     return len - j;
}

int main()
{
    int T,a;
    scanf("%d",&T);
    for(a=1;a<=T;a++){
    cin>>txt;
    len = txt.size();
    pattern = txt;
    reverse(pattern.begin(),pattern.end());
  //  cout<<pattern<<endl;
    failure(pattern,len);
    printf("Case %d: %d\n",a,len+kmp(txt,pattern));
}
   return 0;
}
/**
input:
1
abababccbaba
output:
0    0
0    1
1    2
2    3
0    4
0    5
0    6
1    7
2    8
3    9
4    10
3    11
j=====  1
j=====  2
j=====  3
j=====  4
i=== 4    j=== 4
j failure index   2
j=====  3
j=====  4
j=====  5
j=====  6
j=====  7
j=====  8
j=====  9
j=====  10
Case 1: 14
**/
