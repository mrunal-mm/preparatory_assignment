#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "sample";
    int len = strlen(str);

    printf("\nOriginal String: %s", str);
    
    int new = len / 2;
    for (int i = 0; i < new; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("\nReversed String: %s\n", str);

    return 0;
}
