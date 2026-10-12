#include "ffc/types.h"

extern void func_ov000_021653f4(uint32_t arg);
extern void func_ov000_021673d0(uint32_t arg);

void func_ov001_021734f4(uint32_t *p)
{
    uint32_t t;

    if (p[0] != 3) {
        func_ov000_021653f4(p[1]);
    }
    t = p[0];
    if (t == 0) {
        func_ov000_021653f4(p[2]);
    } else if (t == 1) {
        func_ov000_021653f4(p[2]);
        func_ov000_021653f4(p[3]);
        func_ov000_021653f4(p[4]);
    } else if (t == 2) {
        func_ov000_021653f4(p[4]);
        func_ov000_021653f4(p[5]);
    } else if (t == 3) {
        func_ov000_021673d0(p[2]);
    }
}
