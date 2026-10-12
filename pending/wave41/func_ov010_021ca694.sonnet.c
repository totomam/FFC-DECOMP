#include "ffc/types.h"

extern uint32_t data_020b8e44;
typedef struct { uint32_t a, b; } S;
extern S data_ov010_021d1c9c;
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern uint32_t func_0203bda0(S s, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02032640(uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern void func_ov005_02197514(uint32_t a);
extern void func_ov010_021ca718(void *p);
extern void func_ov009_0219a358(uint32_t a);

void func_ov010_021ca694(uint8_t *p) {
    uint32_t ret;
    if (p[0x27a] != 0) {
        return;
    }
    p[0x27a] = 1;
    ret = func_020159c8(data_020b8e44, 0x91);
    ret = func_0203bda0(data_ov010_021d1c9c, ret, 4, 0, 0);
    *(uint32_t *)(p + 0x174) = ret;
    func_02032640(ret, 1);
    func_02056bc0(p + 0x48, *(void **)(p + 0x174));
    if (p[0x279] < 3) {
        func_ov005_02197514(*(uint32_t *)(p + 0x180));
    }
    func_ov010_021ca718(p);
    func_ov009_0219a358(*(uint32_t *)(p + 0xd8 + (p[0x279] << 2)));
}
