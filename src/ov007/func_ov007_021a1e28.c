#include "ffc/types.h"

extern void func_020376e0(void);
extern void func_ov015_021d77d8(void);
extern void func_ov015_021d77e0(void *fn, void *arg);
extern void *func_ov015_021d78c8(void *obj, uint32_t flag);
extern void *func_ov015_021d7924(void *obj, uint32_t flag);
extern void func_020376f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov007_021a1e10(void);
extern void func_ov007_021a1df4(void);
extern void func_ov007_021a1df8(void);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t data_ov007_021c3bbc[2];

void func_ov007_021a1e28(void *a)
{
    uint8_t *s = (uint8_t *)a;
    void *r4;

    func_020376e0();
    func_ov015_021d77d8();
    func_ov015_021d77e0((void *)func_ov007_021a1df4, (void *)func_ov007_021a1e10);
    r4 = func_ov015_021d78c8(s + 0x90, 0);
    if (r4 == 0) {
        func_ov015_021d77e0((void *)func_ov007_021a1df8, (void *)func_ov007_021a1e10);
        r4 = func_ov015_021d7924(s + 0x90, 0);
    }
    func_020376f0();
    func_02056bc0(s + 0x14, r4);
    *(Pair *)(s + 0x80) = *(Pair *)data_ov007_021c3bbc;
}
