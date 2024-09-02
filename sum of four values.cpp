Cho mảng A[] gồm N phần tử và số nguyên K, hãy kiểm tra xem trong mảng có 3 phần tử A[i], A[j], A[k], A[l] với i, j, k, l khác nhau và A[i] + A[j] + A[k] + A[l] = K hay không ?

Đầu vào
• Dòng đầu tiên là N và K

• Dòng thứ 2 là N số trong mảng A[]

Giới hạn
• 1<=N<=1000

• 1<=A[i],K<=10^9

Đầu ra
In ra YES nếu tồn tại, ngược lại in ra NO

Ví dụ :
Input 01
Copy
6 28
3 6 7 9 1 6
Output 01
Copy
YES

#include<bits/stdc++.h>
using namespace std;
bool check ( int n , vector<long long> a, int K){
 for(int h=0;h<n-3;h++){
  for (int i=h+1;i<n-2;i++){
      int j = i+1;
      int k = n-1;
   while(j<k){
    int sum = a[h]+ a[i]+a[j] + a[k];
    if(sum == K) return true;
    else if(sum< K ) j ++;
    else k --;
   }
  }
 }
return false;
}
int main(){
 int n,K;
 cin>>n>>K;
 vector<long long> a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 if(check(n,a,K)) cout<<"YES";
 else cout<<"NO";
}
