#include "ffc/types.h"

extern int32_t func_ov009_021ad778(void *p);
extern void func_02021338(int32_t v);
extern void func_ov010_021c9c80(void *p);
extern void func_ov010_021cabb4(void *p);

void func_ov010_021c9c60(void *p)
{
    if (func_ov009_021ad778(p) != 0) {
        func_02021338(0xbb);
        func_ov010_021c9c80(p);
        func_ov010_021cabb4(p);
    }
}
