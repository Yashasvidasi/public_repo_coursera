#include <stdio.h>
#include <string.h>


void copy_char(char a1[], char a2[]){
    static int n = 0;
    if (a1[n] == '\0'){
        return;
    }
    a2[n] = a1[n];
    n++;
    copy_char(a1,a2);
    }

int main()
{
    char s2[100];
    char s1[] = "pop lolol ko";
    copy_char(s1,s2);
    puts(s2);
    return 0;
}
