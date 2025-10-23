#include <stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("n :");       scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
        sum = sum + i;
    
    for(int i=1; i<=n; i++) {
        if (i != n) {
            printf("%d + ", i);
        }
        else if ( i == n ) {
            printf("%d", i);
        }
    }
    
    printf(" = %d", sum);
    return 0;
}
