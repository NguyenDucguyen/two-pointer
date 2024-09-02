Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là hãy đếm xem trong 2 mảng tồn tại bao nhiêu cặp i, j sao cho A[i] = B[j]

Đầu vào
• Dòng đầu tiên là N và M

• Dòng 2 là N số trong mảng A[]

• Dòng 3 là M số trong mảng B[]

Giới hạn
• 1<=N,M<=10^7

• 1<=A[i],B[i]<= 10^9

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
6 7
3 3 3 4 7 9
2 3 3 5 6 9 10
Output 01
Copy
7

#include<bits/stdc++.h>
using namespace std;
long long  kq( vector<int>a,  vector<int>b){
    long long cnt = 0;
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;

    while(i<n && j<m){
        if(a[i]==b[j]){
           int x =a[i];
           int d1=0;int d2=0;
           while(i<n && a[i] == x){
             d1++ ; i++;
           }
           while(j<m && b[j] == x){
            d2 ++; j++;
           }
           cnt += d1*d2;
        }
        else if(a[i]<b[j]){

            i++;
        }
        else{
            j++;
        }
    }

    return cnt;
}
int main(){
 int n,m;
 cin>>n>>m;
 vector<int> a(n);vector<int> b(m);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 for(int i=0; i <m;i++){
    cin>>b[i];
 }
 long long  cnt = kq(a,b);
 cout<<cnt;

}
