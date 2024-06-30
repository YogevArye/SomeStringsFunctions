#include <stdio.h>
#include <assert.h>

size_t StringLength(const char* str);/*const char*: Pointer to constant data.*/
    
    
   int main() 
{
 const char* str1 = "Yogev Arye";
 size_t str1_length = StringLength(str1);
 printf("Length of str1 using StringLength: %zu\n", str1_length);    
    return 0;
}

size_t StringLength(const char* str) 
{
     size_t length = 0;
     assert(str != NULL);
     while (*str != '\0') 
{
     length++;
     str++;
}
    return length;
}

