#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//Function swap_bytes_in_word with pointers 
uint16_t swapBytes(int16_t word, uint16_t *byte);

//Function create_mask_for_byte with pointers 
uint8_t createMask(uint8_t size, uint8_t shift, uint8_t *byte);

//Function apply_mask_to_byte with pointers 
uint8_t applyMask(char mode[], uint8_t byte, uint8_t mask, uint8_t *pByte);

//Function swap_bits_in_byte with pointers
uint8_t swapBitsInByte(uint8_t byte, uint8_t *pByte);

//Function combine_nibbles_to_byte with pointers
bool combineNibbles(uint8_t low_nibble, uint8_t high_nibble, uint8_t *byte);

//Function swap_bytes_in_word
uint16_t swapBytes(int16_t word, uint16_t *byte)
{
    if (byte == NULL)
    {
        return false;
    }
    *byte = (word >> 8) | (word << 8);
    return true;
}

//Function create_mask_for_byte 
uint8_t createMask(uint8_t size, uint8_t shift, uint8_t *byte)
{
    if (byte == NULL)
    {
        return false;
    }
    *byte = (1 << size) - 1;
    *byte = *byte << shift;
    return true;
}

//Function apply_mask_to_byte 
uint8_t applyMask(char mode[], uint8_t byte, uint8_t mask, uint8_t *pByte)
{
    if (pByte == NULL)
    {
        return false;
    }
    if (mode == "clear")
    {
        *pByte = byte & ~mask;
    }
    else if (mode == "set")
    {
        *pByte = byte | mask;
    }
    else if (mode == "flip")
    {
        *pByte = byte ^ mask;
    }
    else
    {
        return false;
    }
    return true;
}

//Function swap_bits_in_byte 
uint8_t swapBitsInByte(uint8_t byte, uint8_t *pByte)
{
    if (pByte == NULL)
    {
        return false;
    }
    uint8_t temp = 0;
    for (int i = 0; i < 8; i++)
    {
        temp = temp << 1;
        temp = temp | (byte & 1);
        byte = byte >> 1;
    }
    *pByte = temp;
    return true;
}

//Function combine_nibbles_to_byte with pointers
bool combineNibbles(uint8_t low_nibble, uint8_t high_nibble, uint8_t *byte)
{
    if (byte == NULL)
    {
        return false;
    }
    *byte = (high_nibble << 4) | low_nibble;
    return true;
}