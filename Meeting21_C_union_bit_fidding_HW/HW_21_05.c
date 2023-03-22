// Дефинирайте функция:
// u8 u8_set_bit(u8 num, u8bitpos pos, u8bit val);
// , която връща стойността на бит от число num на дадена позиция pos на val

u8 u8_set_bit(u8 num, u8bitpos pos, u8bit val) 
{
  return (val == 0) ? (num & ~(1u << pos)) : (num | (1u << pos));
}