#include <stdio.h>

int c =0;
void towerOfHanoi(int n, char from, char to_rod, char via)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from, to_rod);
        c++;
        return;
    }
    towerOfHanoi(n-1, from, via, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from, to_rod);
    c++;
    towerOfHanoi(n-1, via, to_rod, from);
}

int main()
{
    int n;
    scanf("%d",&n);
    towerOfHanoi(n, 'A', 'C', 'B');
    printf("%d", c);
    return 0;
}
