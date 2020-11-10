#include <setjmp.h>
#include "nemu.h"
extern jmp_buf jbuf;
void push(int val) {
	reg_l(R_ESP)-=4;
	swaddr_write(reg_l(R_ESP),4,val,R_SS);
}
void raise_intr(uint8_t NO) {
	/*TODO: Trigger an interrupt
	 */
	Assert(NO*8<=cpu.idtr.seg_limit,"NUMBER EXCEEDED");
	GATE_descriptor gate;
	lnaddr_t addr = cpu.idtr.base_addr+NO*8;
	gate.first=lnaddr_read(addr,4);
	gate.second=lnaddr_read(addr+4,4);
	
}