#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_OF_WORD 32
#define HEX_ONE 0x0001
#define setbit(num, pos) (num | (HEX_ONE << pos))
#define setbitp(num, pos) (*num | (HEX_ONE << pos))
#define clearbit(num, pos) (num & ~(HEX_ONE << pos))
#define togglebit(num, pos) (num ^ (HEX_ONE << pos))
#define extractbit(num, pos) (num >> pos) & (HEX_ONE)

void printIntToBinary(unsigned int);
void uIntToBinary(char* ,unsigned int);


unsigned int setBit(unsigned int val, unsigned int pos);
unsigned int clearBit(unsigned int val, unsigned int pos);
unsigned int toggleBit(unsigned int val, unsigned int pos);
unsigned int extractBit(unsigned int val, unsigned int pos);


