#include <stdio.h>
#include <string.h>

// Done1

int main()
{
    char *str1, *str2;
    printf("Enter two strings:");
    scanf("%s %s", str1, str2);
    printf("Length of string 1 is %d\n", strlen(str1));
    printf("Perfoming string copy and applying City to str2\n");
    printf("Str 2: %s\n", strcpy(str2, "City"));
    printf("Concatenating str1 and str2\n");
    printf("Str 1: %s\n", strcat(str1, str2));
    printf("Comparing str1 and str2\n");
    printf("Result of comparison is %d\n", strcmp(str1, str2));
    printf("Lower Case of str1 is %s\n", strlwr(str1));
    printf("Upper Case of str2 is %s\n", strupr(str2));
    printf("Reversing str1\n");
    printf("Str 1: %s\n", strrev(str1));
    printf("Duplicate of str2 is %s\n", strdup(str2));
    printf("Substring of str1 is %s\n", strstr(str1, "City"));
    printf("Set all Characters to # in str2: %s\n", strset(str2, '#'));
    getch();
    return 0;
}