#include "bitmap.h"
#include<stdlib.h>
/*  In this case The function has to remove all character in string except
    alphabets.Input consist of string assume that the character in the
    string can contain both uppercase, lowercase &symbols.
    Ex:
    Input: 1@3joy
    Expected output: joy */

int arrLength(const char *str)
{
        int size = 0;
        while (*str != '\0')
        {
                size++;
                str++;
        }
        return size;
}

char *rmvExpAlpha(char *str)
{

        int l = arrLength(str);
        char *ch = (char *)malloc(l * sizeof(char));
        int i = 0;
        while (*str != '\0')
        {
                if (*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z')
                {
                        ch[i] = *str;
                        i++;
                }

                str++;
        }

        ch[i] = '\0';

        return ch;
}

/* In this case, Input is string of lowercase character from â€˜a â€“ zâ€™,
   the function will return the character of this string in sorted
   alphabetical order as per below example.
   Ex:
   Input: â€œkpitâ€
   Expected output: ikpt..*/

const char *sortStr(char *lowerCase)
{

        char temp;
        int i, j;
        int n = strlen(lowerCase);
        char *string = (char *)malloc(n * sizeof(char));
        for (i = 0; i < n; i++)
        {
                string[i] = *lowerCase;
                lowerCase++;
        }
        string[i] = '\0';

        for (i = 0; i < n - 1; i++)
        {
                for (j = i + 1; j < n; j++)
                {
                        if (string[i] > string[j])
                        {
                                temp = string[i];
                                string[i] = string[j];
                                string[j] = temp;
                        }
                }
        }

        return string;
}

/* In this case the function will return reverse digit of the unsigned number.
   Ex:
   Input: 103
   Expected output:301. */

unsigned int revDigit(unsigned int num)
{
        unsigned int remainder = 0, reverse = 0;
        while (num != 0)
        {
                remainder = num % 10;
                reverse = reverse * 10 + remainder;
                num /= 10;
        }

        return reverse;
}

/* In this case, the function will return equivalent binary value of unsigned number.
   Ex:
   Input: 5
   Expected output:101*/

unsigned int biValue(unsigned int num)
{

        unsigned int bin = 0;
        int arr[32], i = 0;
        while (num > 0)
        {
                arr[i] = num % 2;
                i++;
                num /= 2;
        }

        int len = i;

        for (i = len - 1; i >= 0; i--)
        {
                bin = bin * 10 + arr[i];
        }

        return bin;
}