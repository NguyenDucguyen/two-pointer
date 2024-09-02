Cho 2 mảng A[] và B[] có N và M phần tử đã được sắp xếp theo thứ tự tăng dần, nhiệm vụ của bạn là đối với mỗi phần tử trong mảng B[] hãy đếm xem trong mảng A[] có bao nhiêu phần tử nhỏ hơn nó.

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
2 3 6 6 6 8
5 5 5 6 6 7 10
Output 01
Copy
2 2 2 2 2 5 6

#include<bits/stdc++.h>
using namespace std;
vector<int> kq( vector<int>a,  vector<int>b){
    vector<int> c;
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    int cnt=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            cnt++;
            i++;
        }
        else {
            c.push_back(cnt);
            j++;
        }
    }
    while(j<m){
        c.push_back(n);
        j++;
    }
    return c;
}
int main(){
     int n,m;
     cin>>n>>m;
     vector<int> a(n);
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     vector<int> b(m);
     for(int i=0;i<m;i++){
        cin>>b[i];
     }
    vector<int>c = kq(a,b);
    for(auto it : c){
        cout<<it<<" ";
    }
}
