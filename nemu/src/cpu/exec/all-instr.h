#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/push.h"
#include "data-mov/pusha.h"
#include "data-mov/pop.h"
#include "data-mov/popa.h"
#include "data-mov/movext.h"
#include "data-mov/cltd.h"
#include "data-mov/leave.h"
#include "data-mov/lgdt.h"
#include "data-mov/lidt.h"

#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"
#include "arith/cmp.h"
#include "arith/sub.h"
#include "arith/add.h"
#include "arith/adc.h"
#include "arith/sbb.h"

#include "control-trans/call.h"
#include "control-trans/je.h"
#include "control-trans/ret.h"
#include "control-trans/jmp.h"
#include "control-trans/jle.h"
#include "control-trans/jbe.h"
#include "control-trans/jge.h"
#include "control-trans/jne.h"
#include "control-trans/jg.h"
#include "control-trans/jl.h"
#include "control-trans/ja.h"
#include "control-trans/js.h"
#include "control-trans/jns.h"
#include "control-trans/jo.h"
#include "control-trans/jno.h"
#include "control-trans/jb.h"
#include "control-trans/jnb.h"
#include "control-trans/jp.h"
#include "control-trans/jnp.h"



#include "io/in.h"
#include "io/out.h"

#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"
#include "logic/test.h"
#include "logic/setne.h"
#include "logic/sete.h"
#include "logic/setge.h"
#include "logic/std.h"
#include "logic/cld.h"

#include "string/rep.h"
#include "string/movs.h"
#include "string/lods.h"
#include "string/scas.h"
#include "string/stos.h"

#include "misc/misc.h"

#include "special/special.h"
