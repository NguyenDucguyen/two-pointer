Nhân dịp lễ Giáng Sinh 2024, 28Tech tổ chức phát quà cho các bạn nhỏ. Có N món quà được xếp thành hàng ngang, mỗi món quà đều có khối lượng cho trước. Tí là một đứa trẻ không như nhiều đứa trẻ khác, Tí chỉ muốn chọn ít phần quà càng tốt miễn là tổng các phần quà này lớn hơn hoặc bằng S. Tí chỉ có thể lựa chọn các phần quà đặt cạnh nhau, bạn hãy xác định xem Tí có thể chọn tối thiểu bao nhiêu phần quà để tổng khối lượng của các phần quà lớn hơn hoặc bằng S.

Đầu vào
• Dòng đầu tiên là N và S

• Dòng thứ 2 là trọng lượng của N phần quà

Giới hạn
• 1<=N<=10^6

• 1<=S<=10^9

• Trọng lượng các phần quà là số nguyên dương không quá 10^6

Đầu ra
In ra số lượng phần quà ít nhất có thể hoặc in ra -1 nếu không tồn tại đáp án

Ví dụ :
Input 01
Copy
14 14
4 4 5 1 3 1 3 4 1 1 5 4 1 4
Output 01
Copy
4

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    ll s;
    cin>>s;
    int a[n];
    for(int i=0;i<n;i++){
         cin>>a[i];
    }
    int l=0;
    int cur_sum =0;
    int  cnt = 1e6;
    for(int r =0;r<n;r++){
        cur_sum += a[r];
        while(cur_sum > s){
            cur_sum-= a[l];
            l++;
        }
        if(cur_sum == s){
            cnt = min(cnt,r-l+1);
        }
    }
    if(cnt == 1e6) cout<<"-1";
    else cout<< cnt;

}

