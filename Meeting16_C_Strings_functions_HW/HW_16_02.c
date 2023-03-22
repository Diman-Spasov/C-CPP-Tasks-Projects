// Напишете собствена версия на стандартната функция strncpy от string.h със
// същия интерфейс и функционалност.
// char* strncpy(char* dest, const char* src, size_t count);

#include <stdio.h>
#include <string.h>

#include <stdio.h>                                                              
#include <string.h>                                                             
                                                                                
#define SIZE    40                                                              
                                                                                
int main(void)                                                                  
{                                                                               
  char source[ SIZE ] = "123456789";                                            
  char source1[ SIZE ] = "123456789";                                           
  char destination[ SIZE ] = "abcdefg";                                         
  char destination1[ SIZE ] = "abcdefg";                                        
  char * return_string;                                                         
  int index = 5;                                                             
                                                                                
  printf( "destination is originally = '%s'\n", destination );                  
  return_string = strcpy( destination, source );                                
  printf( "After strcpy, destination becomes '%s'\n\n", destination );          
                                                                                
                                                                                
  printf( "destination1 is originally = '%s'\n", destination1 );                
  return_string = strncpy( destination1, source1, index );                      
  printf( "After strncpy, destination1 becomes '%s'\n", destination1 );         
}
