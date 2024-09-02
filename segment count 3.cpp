Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà số lượng phần từ khác nhau trong mảng con này không vượt quá K.

Đầu vào
• Dòng đầu tiên là N và K

• Dòng thứ 2 là N số trong mảng A[]

Giới hạn
• 1<=K<=N<=10^5

• 1<=A[i]<=10^6

Đầu ra
In ra số lượng mảng con thỏa mãn đề bài

Ví dụ :
Input 01
Copy
4 2
1 1 2 4
Output 01
Copy
8

#include<bits/stdc++.h>
using namespace std;
int d[1000005];
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int &x :a) cin>>x;
    int l=0;
    long long cnt=0;
    long long cur_cnt =0;
    for(int r=0;r<n;r++){
        d[a[r]]++;
        if(d[a[r]] ==1) cur_cnt++;
        if(cur_cnt > k){
            while(cur_cnt >k){
                d[a[l]] --;
                if(d[a[l]] == 0) cur_cnt--;
                l++;
            }
        }
        cnt += r-l+1;
    }
    cout<<cnt;

}
