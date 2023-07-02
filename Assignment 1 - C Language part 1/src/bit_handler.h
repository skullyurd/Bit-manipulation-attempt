#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

//Function combine_nibbles_to_byte 
uint8_t combiningNibbles(uint8_t low_nibble, uint8_t high_nibble);

//Function swap_bytes_in_word 
uint16_t swapBytes(uint16_t word);

//Function create_mask_for_byte 
uint8_t createMask(uint8_t size, uint8_t shift);

//Function apply_mask_to_byte 
uint8_t applyMaskToByte(char mode[], uint8_t byte, uint8_t mask);

//Function Test_bit_in_byte
bool TestBitInByte(uint8_t byte, uint8_t position);

//function count_ones_in_byte
uint8_t countOnesInByte(uint8_t byte);

//Function swap_bits_in_byte 
uint8_t swapBitsInByte(uint8_t byte);

//Function combine_nibbles_to_byte 
uint8_t combiningNibbles(uint8_t high_nibble, uint8_t low_nibble)
{
    uint8_t result = 0;
    result = (high_nibble << 4) | low_nibble;
    printf("Result: %x\n", result);
    return result;
}

//Function swap_bytes_in_word
uint16_t swapBytes(uint16_t a)
{
    uint16_t result = 0;
    result = (a << 8) | (a >> 8);
    printf("Result: %x\n", result);
    return result;
}

//Function create_mask_for_byte 
uint8_t createMask(uint8_t size, uint8_t shift)
{
    uint8_t result = 0;
    result = (1 << size) - 1;
    result = result << shift;
    printf("Result: %x\n", result);
    return result;
}

//Function apply_mask_to_byte 
uint8_t applyMaskToByte(char mode[], uint8_t byte, uint8_t mask)
{
    uint8_t result = 0;
    if (mode == "clear")
    {
        result = byte & mask;
    }
    else if (mode == "set")
    {
        result = byte | mask;
    }
    else if (mode == "flip")
    {
        result = byte ^ mask;
    }
    else
    {
        printf("Invalid mode\n");
    }
    printf("Result: %x\n", result);
    return result;
}

//Function Test_bit_in_byte
bool TestBitInByte(uint8_t byte, uint8_t position)
{
    uint8_t result = 0;
    result = byte & (1 << position);
    if (result == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

//function count_ones_in_byte
uint8_t countOnesInByte(uint8_t byte)
{
    uint8_t result = 0;
    for (int i = 0; i < 8; i++)
    {
        if (TestBitInByte(byte, i))
        {
            result++;
        }
    }
    printf("Result: %d\n", result);
}

//Function swap_bits_in_byte 
uint8_t swapBitsInByte(uint8_t byte)
{
    uint8_t result = 0;
    for (int i = 0; i < 8; i++)
    {
        if (TestBitInByte(byte, i))
        {
            result = result | (1 << (7 - i));
        }
    }
    printf("Result: %x\n", result);
    return result;
}