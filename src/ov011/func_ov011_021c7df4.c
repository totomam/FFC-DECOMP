#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov011_021c943c(void *p, uint8_t v);
extern void func_02036b3c(void *p, uint8_t v);

void func_ov011_021c7df4(uint8_t *p, uint8_t v) {
    uint8_t flag = p[964];
    if (flag == v) {
        return;
    }
    if (flag == 0) {
        p[964] = 1;
    } else {
        p[964] = 0;
    }
    func_02021338(0xbb);
    func_ov011_021c943c(p, p[964]);
    func_02036b3c(p + 0x350, p[964]);
}
