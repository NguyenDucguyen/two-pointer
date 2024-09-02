Cho mảng A[] gồm N số nguyên và số nguyên K, nhiệm vụ của bạn là đếm xem có bao nhiêu mảng con các phần tử liên tiếp trong mảng mà độ chênh lệch giữa phần tử lớn nhất và phần tử nhỏ nhất trong mảng con đó không vượt quá K

Đầu vào
• Dòng đầu tiên là N và K

• Dòng thứ 2 là N số trong mảng A[]

Giới hạn
• 1<=N<=10^5

• 1<=A[i],K<=10^6

Đầu ra
In ra số lượng mảng con thỏa mãn đề bài

Ví dụ :
Input 01
Copy
10 1
2 3 1 3 1 4 1 3 1 2
Output 01
Copy
12
#include<bits/stdc++.h>
using namespace std;
int d[1000005];
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int &x :a) cin>>x;
    multiset<int> se;
    int l=0;
    long long cnt=0;
    for(int r=0;r<n;r++){
        se.insert(a[r]);
            while(true){
               int min = *se.begin();
               int max = *se.rbegin();
               if(max-min <=k) break;
               se.erase(se.find(a[l]));
               l++;
            }
        cnt += r-l+1;
    }
    cout<<cnt;

}
