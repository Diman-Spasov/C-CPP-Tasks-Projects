// Дефинирайте функция:
// u8 u8_scan_bits(FILE* f);
// , която парсва число на побитов принцип от следващите осем символа в подадения й файлов поток.

u8 u8_scan_bits(FILE* f) 
{
    u8 num = 0;
    int i;
    char bit;

    for (i = 0; i < 8; i++) 
    {
        fscanf(f, "%c", &bit);
        if (bit == '1') 
        {
            num |= 1 << (7 - i);
        }
    }

    return num;
}