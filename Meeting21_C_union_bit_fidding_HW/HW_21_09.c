// Дефинирайте функция:
// void u8_print_bits(FILE* f, u8 num);
// , която принтира битовете на число num на подадения й файлов поток

#include <stdio.h>
#include <limits.h>

typedef unsigned char u8;
typedef _Bool u8bit;

void u8_print_bits(FILE* f, u8 num) 
{
  for (int i = 7; i >= 0; i--) 
  {
    u8bit bit = (num >> i) & 1;
    fprintf(f, "%d", bit);
  }
}