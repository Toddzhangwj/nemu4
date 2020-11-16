#include "cpu/exec/helper.h"
#include "nemu.h"

make_helper(hlt) {
	extern void device_update(); 
	if(cpu.INTR == 0){
		device_update();
	
	}
	return 1;
}