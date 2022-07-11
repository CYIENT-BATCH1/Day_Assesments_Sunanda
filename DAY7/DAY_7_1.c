#include <stdio.h>
int main()
{
//Declare variables
int value = 0x12345678;
int leftmost_byte;
int left_middle_byle;
int right_middle_byte;
int rightmost_byte;
int result;

//anding values with 0x000000FF and shifting towards right
leftmost_byte = (value & 0x000000FF) >> 0;
//anding values with 0x0000FF00 and shifting towards right
left_middle_byle = (value & 0x0000FF00) >> 8;
//anding values with 0x00FF0000 and shifting towards right
right_middle_byte = (value & 0x00FF0000) >> 16;
//anding values with 0xFF000000 and shifting towards right
rightmost_byte = (value & 0xFF000000) >> 24;
//left shift values
leftmost_byte <<= 24;
left_middle_byle <<= 16;
right_middle_byte <<= 8;
rightmost_byte <<= 0;
//concatenate all the results
result = (leftmost_byte | left_middle_byle
			| right_middle_byte | rightmost_byte);
		printf("big Endian to little: 0x%x\n", result);
}
