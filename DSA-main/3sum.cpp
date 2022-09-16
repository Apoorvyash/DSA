#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threesum( vector<int>& v, int sum){
    vector<vector<int>> res;
    sort(v.begin(), v.end());
    int e,s;
    for(int i=0; i<v.size(); i++){
        s=i+1;e=v.size()-1;
        int target=-v[i];
        while(s<e){
            int sum=v[s]+v[e];
            if(target<sum){
                s++;
            }
            else if(target>sum){
                e--;
            }
            else{
                vector<int> triplet={v[i], v[s], v[e]};
                res.push_back(triplet);
                while(s<e && triplet[1]==v[s]){
                    s++;
                }
                while(s< && triplet[2]==v[e]){
                    e--;
                }
               
            }
            
        }
        while(i<(v.size()-1) && v[i]==v[i+1])i++;
    }
    return res;
}
int main(){
    vector<vector<int>> res={{1,2,3},{0,2,1},{-1,0,-1},{0,0,0}};
    threesum(res, 0);

    return 0;
}