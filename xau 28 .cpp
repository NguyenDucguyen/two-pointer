28tech rất yêu thích con số 28 vì thế anh ta có bài toán sau và nhờ bạn tìm lời giải. Cho một xâu kí tự S chỉ bao gồm kí tự 2 và kí tự 8, bạn hãy tìm xâu con liên tiếp có độ dài lớn nhất mà trong đó chứa nhiều nhất X kí tự 2 và Y kí tự 8.

Đầu vào
• Dòng 1 chứa xâu S

• Dòng 2 chứa 2 số X, Y

Giới hạn
• 2 <=len(S) <= 10^6

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
8228282888
3 3
Output 01
Copy
6

#include<bits/stdc++.h>
using namespace std;
int d[258];
int main(){
   string s;
   cin>>s;
   int n =s.size();
   int x,y;
   cin>>x>>y;
   int l=0;
   int cnt =0;
   for(int r =0 ;r<n;r++){
      d[s[r]] ++;
      while(d['2'] >x || d['8'] >y){
         d[s[l]]--;
         l++;
      }
      cnt = max(cnt,r-l+1);
   }
   cout<<cnt;

}
