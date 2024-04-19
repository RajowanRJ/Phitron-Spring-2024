// Starting in the name of Almighty Allah
#include <stdio.h>

int main() {

    int i = 1, n;
    
    scanf("%d", &n);
    
    while (i <= n) {
        printf("%d ", i);
        
        if (i % 5 == 0) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
        i++;
    }
    return 0;
}
