Cho mảng A[] gồm N số nguyên và số nguyên S, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà tổng không vượt quá S.

Đầu vào
• Dòng đầu tiên là N và S

• Dòng thứ 2 là N số trong mảng A[]

Giới hạn
• 1<=N<=10^6

• 1<=A[i]<=10^6

• 1<=S<=10^9

Đầu ra
In ra số lượng mảng con thỏa mãn

Ví dụ :
Input 01
Copy
13 14
5 4 5 2 4 5 1 1 2 5 5 2 2
Output 01
Copy
47
Input 02
Copy
5 3
1 4 2 1 5
Output 02
Copy
4

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
      int n,s;
      cin>>n>>s;
      int a[n];
      ll sum =0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      int l=0;
      int cnt =0;
      for(int r =0;r<n;r++){
          sum+=a[r];
          while(sum>s){
            sum-=a[l];
            l++;
          }
          cnt+=r-l+1;
      }
      cout<<cnt;
}
