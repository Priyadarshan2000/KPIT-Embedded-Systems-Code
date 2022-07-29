# include "bitmap.h"

/* The function returns integer value. It has two arguments one is integer 
   array and other is array length(size of an array ).In this case, the 
   function will count the total number of even element in the array and display them as output.  
Ex:
   {20,22, 24,19}, In this integer array  3 even numbers are present. Hence function will return â€˜3â€™.
 
*/


int EvenNoCount(unsigned int arr[],unsigned int arrLength)

{
    
   int i,count=0;
   for(i=0;i<arrLength;i++){
      if(arr[i]%2==0){
         count++;
      }
   }

   return count;
}


/* The function return unsigned integer  either â€˜1â€™ or â€˜0â€™.

Two string are given as input (lowercase character from â€˜a â€“ zâ€™), 
in this case, the function has to check the frequency of each character
should be same in the both strings(in any order). 

Ex 1: â€œkpitâ€ , â€œkpitâ€ â€“ 
The above example strings are same. Hence it will return 0.

Ex 2: â€œwhiteâ€ , â€œithewâ€ â€“ 
The above example strings are same but only their order is different.
Hence it will return 0. 
*/



int StrCompare(const char *str, const char *str1)
{
   int i,count1[26],count2[26];
   for(i=0;i<26;i++){
      count1[i]=0;
      count2[i]=0;
   }

   while(*str!='\0'){
      int ind=(int)(*str-'a');
      count1[ind]++;
      str++;
   }

   while(*str1!='\0'){
      int ind=(int)(*str1-'a');
      count2[ind]++;
      str1++;
   }

   int temp=0;
   for(i=0;i<26;i++){
      if(count1[i]!=count2[i]){
         temp=1;
         break;
      }
   }

   return temp;
} 

/* The function returns unsigned integer.

It takes string as input, the string contains combination of 
digits and alphabets as shown in below example. 
In this case the function has to find the sum of all digits in strings. 

Ex: â€œ103Jackâ€
In above example 1,0,3 are the digits. 
Hence the function will return the value is  4 (1+0+3 = 4).
*/

int NumCount(const char *str)
{
  
  int sum=0;
  while(*str!='\0'){
   if(*str>='0' && *str<='9'){
      sum+=(int)(*str-'0');
   }
   str++;
  }

   return sum;
}




/*The function return toggled character.

It has two arguments one is string and other one is an index position. In this case, the 
function will read a string and toggle any character in a string
(meaning lower case to upper case or upper case to lower case) that can be decided by index position.

Ex. â€œBlackâ€ , 3

Output : â€˜Câ€™  because, it points to 3rd index position, hence the lower case â€˜câ€™ toggled to upper case â€˜Câ€™.
.*/


char ToggleCharCase(const char *str, unsigned int indexposition)
{
    int count=0;
    char ch;
    while(*str!='\0'){
      ch=*str;
      if(count==indexposition){
         break;
      }

      count++;
      str++;
    }

    if(ch>='a' && ch<='z'){
      ch=ch-32;
    }
    else{
      ch=ch+32;
    }

    return ch;
}