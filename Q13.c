#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][50] = {"This","is", "a","string","duplicate","duplicate","string"};
    int len = 10;
    
    for (int i = 0; i < len-1; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (strcmp(str[i],str[j])==0)
            {
                printf("%s\n",str[i]);
                break;;
            }
        }
    }
    
    return 0;
}
