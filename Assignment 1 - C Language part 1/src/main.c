#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "bit_handler.h"

int main(int argc, char const *argv[])
{
    //Function combine_nibbles_to_byte 
    combiningNibbles(0x08, 0x0D);

    //Function swap_bytes_in_word 
    swapBytes(0x3E5B);

    //Function create_mask_for_byte 
    createMask(5, 2);
    
    //Function apply_mask_to_byte 
    applyMaskToByte("clear", 0x3F, 0x0F);
    applyMaskToByte("set", 0x3F, 0x0F);
    applyMaskToByte("flip", 0x3F, 0x0F);

    //Function Test_bit_in_byte
    bool result = TestBitInByte(0x55, 1);
    printf("Result: %d\n", result);

    //function count_ones_in_byte
    countOnesInByte(0xff);

    //Function swap_bits_in_byte 
    swapBitsInByte(0xAA);

    return 0;
}
