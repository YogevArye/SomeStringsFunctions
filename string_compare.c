#include <stdio.h>
#include <assert.h>

int StringCompare(const char* str1, const char* str2);
    
int main() 
{
 const char* str1 = "arye";
 const char* str2 = "Arye";
 int compare_result = StringCompare(str1, str2);
 printf("The comparison result is: %d\n",compare_result);
    return 0;
}

int StringCompare(const char* str1, const char* str2)
{

  assert(str1 != NULL);
  assert(str2 != NULL);
  while (*str1 != '\0' && *str2 != '\0' && (int)*str1 == (int)*str2)
 {
    str1++;
    str2++;
 } 
  if (*str1 == '\0' && *str2 != '\0') {return -1;}
  else if (*str1 != '\0' && *str2 == '\0'){return 1;}
  else if (*str1 == '\0' && *str2 == '\0'){return 0;}
  else {return (int)*str1 - (int)*str2;}
  

  

}

