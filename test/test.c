#include <stdio.h>
#include <m_num_trans.h>

int main(void)
{
	char hex[11];
	int num;
	
	do {
		scanf("%d", &num);
		mDecToHex(num, hex, sizeof(hex));
		printf("%s\n", hex);
	} while(num);
}
