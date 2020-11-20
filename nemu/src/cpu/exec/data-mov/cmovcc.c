#include "cpu/exec/helper.h"
static inline bool check_cc_b() {
	return cpu.CF;
}

static inline bool check_cc_e() {
	return cpu.ZF;
}

static inline bool check_cc_ne() {
	return !cpu.ZF;
}

static inline bool check_cc_be() {
	return cpu.CF | cpu.ZF;
}

static inline bool check_cc_a() {
	return !(cpu.CF | cpu.ZF);
}

