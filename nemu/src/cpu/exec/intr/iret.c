#include "cpu/exec/helper.h"
#include "nemu.h"
int pop() {
	uint32_t tmp = swaddr_read(reg_l(R_ESP),4,R_SS);
	reg_l(R_ESP)+=4;
	return tmp;
}
make_helper(iret) {
	if(cpu.cr0.protect_enable==0) {
		cpu.eip=pop();
		cpu.cs.selector = pop();
		cpu.eflags = pop();	
	}
	else {
		
		cpu.eip=pop();
		cpu.cs.selector = pop();
		cpu.eflags = pop();
		
		seg_do(R_CS);
	}	
	return 0;
	
}