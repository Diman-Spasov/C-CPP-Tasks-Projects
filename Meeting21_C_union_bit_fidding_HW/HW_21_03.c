// Дефинирайте функция:
// u8 u8_set_bit_on(u8 num, u8bitpos pos);
// , която променя стойността на бит от число num на дадена позиция pos на 1

u8 u8_set_bit_on(u8 num, u8bitpos pos)
{
    return num | (1 << pos);
}