// Starting in the name of Almighty Allah
#include <stdio.h>

int main ()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);

        char a[n+1];
        int cntP = 0, cntT = 0;
        for (int i = 0; i < n+1; i++)
        {
            scanf("%c", &a[i]);
            if (a[i] == 'T')
            cntT++;
            if (a[i] == 'P') cntP++;
        }
        if (cntT == cntP)
        {
            printf("Draw\n");
        }
        else if (cntT < cntP)
        {
            printf("Pathaan\n");
        }
        else
            printf("Tiger\n");
    }
    
    return 0;
}