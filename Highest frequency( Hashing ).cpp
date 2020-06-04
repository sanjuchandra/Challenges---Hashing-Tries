#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main(){
    int max_freq = 0;
    int n;
    cin>>n;
    unordered_map<int , int> freq;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        int d;
        cin>>d;
        freq[d]++;
        if(max_freq < freq[d]){
            max_freq = freq[d];
            ans = d;
        }
        //cout<<max_freq<<endl;
        //cout<<ans<<endl;
        //max_freq = max(max_freq , freq[d]);
        //cout<<d<<" -- > "<<freq[d]<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
