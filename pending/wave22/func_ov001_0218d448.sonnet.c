#include "ffc/types.h"
typedef struct { uint32_t x, y; } V;
typedef struct { uint8_t pad[0xb0]; V v; } O;
extern uint32_t func_02037748(void);
extern void func_02037728(void);
extern void func_020375b0(void);
extern V data_ov001_021948fc;
void func_ov001_0218d448(O *p)
{
    if (func_02037748() != 0) {
        func_02037728();
    }
    func_020375b0();
    p->v = data_ov001_021948fc;
}
