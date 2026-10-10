#include "ffc/types.h"

extern int32_t func_ov009_021ad778(void *p);
extern void func_02021338(int32_t v);
extern void func_ov011_021c1358(void *p);
extern void func_ov011_021c144c(void *p);

void func_ov011_021c06e8(void *p)
{
    if (func_ov009_021ad778(p) != 0) {
        func_02021338(0xbb);
        func_ov011_021c1358(p);
        func_ov011_021c144c(p);
    }
}
