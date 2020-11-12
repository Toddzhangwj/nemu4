#include "cpu/exec/helper.h"
#include "nemu.h"
int pop() {
	uint32_t tmp = swaddr_read(reg_l(R_ESP),4,R_SS);
	reg_l(R_ESP)+=4;
	return tmp;
}