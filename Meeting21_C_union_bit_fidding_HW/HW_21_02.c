// Дефинирайте функция:
// u8bit u8_get_bit(u8 num, u8bitpos pos);
// , която връща стойността на бит от число num на дадена позиция pos

u8bit u8_get_bit(u8 num, u8bitpos pos)
{
    return (num & (1 << pos)) != 0;
}