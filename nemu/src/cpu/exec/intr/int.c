#include "cpu/exec/helper.h"
#include "nemu.h"
void raise_intr(uint8_t);

make_helper(Int) {
	int no = instr_fetch(eip+1,1);
	cpu.eip+=2;
	print_asm("int %x",no);
	raise_intr(no);
	return 0;
	
}