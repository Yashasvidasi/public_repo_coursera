#include <stdio.h>
#include <string.h>


int pali(char a1[],int m){
    static int n = 0;
    static int x;
    if (n>=m){
        return x;
    }
    else if (a1[n] == a1[m]){
        n++;
        m--;
        x = 1;
        pali(a1, m);
    }
    else
    {
        return 0;
    }

    }

int main()
{
    int x1, count, n=0;
    char s1[100];
    gets(s1);
    while(s1[n]!='\0'){
        count++;
        n++;
    }
    x1 = pali(s1,count-1);
    if (x1 == 1){
        printf("yes palindrome");
    }
    else{
        printf("not");
    }
    return 0;
}

