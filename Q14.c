#include<stdio.h>
#include<string.h>

int main()
{
    char arr[]="racecar";
    int len = strlen(arr),sign=0;
    for (int i = 0; i < len/2; i++)
    {
        if (arr[i]!=arr[len-i-1])
        {
            sign=1;
            break;
        }   
    }

    if (sign)
    {
      printf("\n%s is not a palindrome.\n", arr);
    }

    else
      printf("\n%s is a palindrome.\n", arr);

    return 0;
}
