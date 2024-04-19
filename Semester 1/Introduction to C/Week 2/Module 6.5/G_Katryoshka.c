// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    long long int n, m, k;
    long long int min = 0, ans;
    scanf("%lld %lld %lld", &n, &m, &k);
        
            if(n <= m && n <= k) {
                min = n;
            }
            else if (m <= n && m <= k){
                min = m;
            }
            else min = k;
                
                n -= min;
                n /= 2; // Pair of Eyes
                m -= min;
                k -= min;
            

        if (n <= k) 
        {
            ans = n + min;
        }
        else {
            ans = k + min;
        }
        
    
    printf("%lld", ans);
}