#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        cout << s.size() << " size" << endl;
        int n=s.size();
        vector<int> zeros_index;
        for(int i=0; i<n; i++){
            if(s[i]=='0'){
                zeros_index.push_back(i);
            }
            }
            int ans=zeros_index.size();

            int k=ans, ones=0, zeros=ans;
            int left=0, right=n-1;
            while(left<right){
                while(s[left]=='0'){
                    left++;
                    zeros--;
                }
                while(s[right]=='0'){
                    right--;
                    zeros--;
                }
                if(zeros<=0){
                    cout << 0 << endl;
                    break;
                }
            }

    }
}
