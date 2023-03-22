// Дефинирайте функция:
// u8 u8_reverse_bits(u8 num);
// , която обръща стойностите на битовете на число num в обратен ред

u8 u8_reverse_bits(u8 num) 
{
  u8 reversed = 0;
  for (u8bitpos i = 0; i < CHAR_BIT; i++) {
    reversed <<= 1;
    reversed |= (num & 1);
    num >>= 1;
  }
  return reversed;
}