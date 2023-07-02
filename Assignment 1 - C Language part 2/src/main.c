#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "bit_handler.h"


int main(int argc, char const *argv[])
{
    //Function swap_bytes_in_word with pointers 
    uint16_t inputSwapBytes = 0x1234;
    printf("input before the swap bytes function: %x\n", inputSwapBytes);
    swapBytes(0x3E5B, &inputSwapBytes);                
    printf("input after the swap bytes function: %x\n\n", inputSwapBytes);

    //Function create_mask_for_byte with pointers 
    uint8_t inputCreateMask = 0x00;
    printf("input before the create mask function: %x\n", inputCreateMask);
    createMask(5, 2, &inputCreateMask);
    printf("input after the create mask function: %x\n\n", inputCreateMask);
    
    //Function apply_mask_to_byte with pointers 
    uint8_t inputApplyMask = 0xD1;
    //mode clear
    printf("input before the apply mask function clear mode: %x\n", inputApplyMask);
    applyMask("clear", 0x02, 0x06, &inputApplyMask);
    printf("input after the apply mask function clear mode: %x\n\n", inputApplyMask);

    //mode set
    printf("input before the apply mask function set mode: %x\n", inputApplyMask);
    applyMask("set", 0x20, 0x60, &inputApplyMask);
    printf("input after the apply mask function set mode: %x\n\n", inputApplyMask);

    //mode flip
    printf("input before the apply mask function flip mode: %x\n", inputApplyMask);
    applyMask("flip", 0x08, 0x18, &inputApplyMask);
    printf("input after the apply mask function flip mode: %x\n\n", inputApplyMask);

    //Function swap_bits_in_byte with pointers 
    uint8_t inputSwapBits = 0x12;
    printf("input before the swap bits function: %x\n", inputSwapBits);
    swapBitsInByte(0x85, &inputSwapBits);
    printf("input after the swap bits function: %x\n\n", inputSwapBits);

    //Function combine_nibbles_to_byte with pointers
    uint8_t inputcombineNibbles = 0xAA;
    printf("input before the combine nibbles function: %x\n", inputcombineNibbles);
    combineNibbles(0x0D, 0x08, &inputcombineNibbles);
    printf("input after the combine nibbles function: %x\n\n", inputcombineNibbles);

    return 0;
}