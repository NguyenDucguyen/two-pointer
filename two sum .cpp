Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 2 phần tử A[i], A[j] với i khác j và A[i] + A[j] = K hay không ? Bài này các bạn có thể giải theo 3 cách : Binary search, Hai con trỏ, Map.

Đầu vào
• Dòng đầu tiên là N và K

• Dòng thứ 2 là N số trong mảng A[]

Giới hạn
• 1<=N<=5000

• 1<=A[i],K<=10^9

Đầu ra
In ra YES nếu tồn tại, ngược lại in ra NO

Ví dụ :
Input 01
Copy
5 28
2 1 10 5 9
Output 01
Copy
NO

#include<bits/stdc++.h>
using namespace std;
bool check ( int n , vector<long long> a, int k){
   int l = 0;
   int r = n-1;

   while(l<r){
    int sum = a[l] + a[r];
    if(sum == k) return true;
    else if(sum< k ) l ++;
    else r --;
   }
return false;
}
int main(){
 int n,k;
 cin>>n>>k;
 vector<long long> a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 if(check(n,a,k)) cout<<"YES";
 else cout<<"NO";
}
