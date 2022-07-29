#include"bitmap.h"
#define MAX_CHAR 256


/*        The function returns length of given string.
 Student is expected to design without using string length function strlen(). */

                int arrLength(const char* str)
                {
                    int i=0;
                    for (i=0; str[i]!='\0'; ++i);
                    return i;
                }

/*The function returns 1 or 0.  
Input is string of lowercase character from â€˜a â€“ zâ€™ 
the function will check repeated character in a given string, 
if itâ€™s found, then return 1 or else 0.*/


                int repCharaCheck(const char* str1)
                {
                    int p = -1, i, k;
                    int arr[MAX_CHAR] = { 0 };
                    int pos[MAX_CHAR];
 
                    for (i = 0; i < strlen(str1); i++) 
                    {
                        k = (int)str1[i];
                        if (arr[k] == 0) 
                        {
                            arr[k]++;
                            pos[k] = i;
                        }
                        else if (arr[k] == 1)
                            arr[k]++;
                    }
 
                    for (i = 0; i < MAX_CHAR; i++) 
                    {
                        if (arr[i] == 2) 
                            return 1;
                    }
                    return 0;
                }


/*The function returns 1 or 0. It has two arguments one is string 
and other one is an index position. In this case, the function will 
identify whether value at index position is a character or a Number.
If the value at index position is numbered it returns 1else it return 0
*/

                int checkAnyIndex(const char* str, int indexPosition)
                {
                    if (str[indexPosition]>='0' && str[indexPosition]<='9')
                        return 1;
                    else          
                        return 0;
                }
/*The function returns middle character in given string.
Case 1: odd
If the length of the string is odd, itâ€™s easy to identify the middle character in given string.

Case2: Even.
If the length of the string is even, then there would be two middle character we need compare 
those two middle character and the greater one has to print.
Ex: Input string is â€œabcdâ€ here â€˜bâ€™ and â€˜ câ€™are the middle character so we need compare 
â€˜bâ€™ element and â€˜câ€™ which is greater that has to print. In above example c is greater, then output will be â€˜câ€™
*/

                char checkMidChara(const char* str)
                {
                    int mid=strlen(str)/2;
                    if (strlen(str)%2 == 0)
                    {
                        if (str[mid]>str[mid+1])
                            return str[mid];
                        else
                            return str[mid+1];
                    }
                    else
                    {
                        return str[mid];
                    }
                }