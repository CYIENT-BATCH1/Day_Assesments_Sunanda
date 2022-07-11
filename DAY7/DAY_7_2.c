#include <stdio.h>
int main()
{
  Unsigned long int x = 0x17;
    int result;
	// Get all even bits of x
	unsigned int even_bits = x & 0xAAAAAAAAAAAAAAAA;

	// Get all odd bits of x
	unsigned int odd_bits = x & 0x5555555555555555;

	even_bits >>= 1; // Right shift even bits
	odd_bits <<= 1; // Left shift odd bits
    
   // Combine even and odd bits
	result = (even_bits | odd_bits); 
	printf("%x ", result);
}
