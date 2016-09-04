#include <stdio.h>



int main(int argc, char argv[])

{
  // store string in an array
  unsigned s[] = {0x54,'h',0165,0b01101110,100,
		  0x65,'r',0142,0b01101111,108,
		  0x74,' ',0157,0b01100110, 32,
		  0x6c,'i',0147,0b01101000,116,
		  0x6e,'i',0156,0b01100111, 10,
		  'V','e','r','y',' ','v','e',
		  'r','y',' ','f','r','i','g',
		  'h','t','e','n','i','n','g',
		  10, 0x00};
  // pointer to start of string
  unsigned *sp = s;

  // print one character of the string at a time
  while (*sp)
    putchar(*(sp++));
}
