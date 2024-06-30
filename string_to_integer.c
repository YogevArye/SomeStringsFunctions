#include <stdio.h>
#include <assert.h>
   
int StringToInteger(const char *str);
    
int main() 
{
 const char* str = "8810980691ompzu";
 long int result = StringToInteger (str);
 printf("The result for '%s\n' is: %ld", str, result);  
 return 0;
}

int StringToInteger(const char *str)
{ 
  int sign = 1;
  long int result = 0;
  assert(str != NULL);

   while (*str == ' ')
  {
    str++;
  }
  
   if (*str == '-')
   {
        sign = -1;
        str++;
   }
  
   if (*str == '+')
    {
        str++;
    }

   if (*str < '0' || *str > '9') 
   {
        return 0; 
   }
   
   while (*str >= '0' && *str <= '9') 
   {
        result = result * 10 + *str - '0';
        str++;
   } 

  return result * sign;
 }
  
  



