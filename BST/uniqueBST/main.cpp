#include <iostream>
#include <vector>
class Solution{
public:
    int uniqueBST(int n){
        if (n==0) return 0;
        if (n==1) return 1;
        std::vector<int> G(n+1, 0);
        for(int i = 2;i<=n;++i){
            for(int j=1;j<=i;++j){
                G[i] = G[j-1]*G[i-j];
            }
        }
    }
};
int main() {
    Solution s;
    int res = s.uniqueBST(10);
    std::cout << res << std::endl;
    return 0;
}
