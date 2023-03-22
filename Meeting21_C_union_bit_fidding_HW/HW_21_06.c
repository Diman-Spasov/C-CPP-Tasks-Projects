// Дефинирайте функция:
// u8 u8_toggle_bit(u8 num, u8bitpos pos);
// , която променя стойността на бит от число num на дадена позиция pos на обратната й.

u8 u8_toggle_bit(u8 num, u8bitpos pos) 
{
    return num ^ (1 << pos);
}