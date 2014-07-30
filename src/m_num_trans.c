#include <stdio.h>
#include "m_num_trans.h"

int mDecToHex(unsigned int dec, char *hex, unsigned size)
{
	if (dec <= 0xff){
		return snprintf(hex, size, "0x%02x", dec);
	} else if (dec <= 0xffff) {
		return snprintf(hex, size, "0x%04x", dec);
	} else if (dec <= 0xffffffff) {
		return snprintf(hex, size,"0x%08x", dec);
	}
	return 0;
}


