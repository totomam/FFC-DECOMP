#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void *func_0205681c(uint32_t size);
extern void func_02015e8c(void *obj, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern void *func_0203b6f0(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern char data_ov002_021d68c8[];
extern uint32_t data_020b8e44;
extern char data_ov002_021d68b0[];

struct Loc {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint8_t f12;
};

void *func_ov002_021bc15c(uint8_t *a)
{
    struct Loc loc;
    uint32_t i;
    uint8_t *obj;
    uint32_t *tbl;

    func_02056c9c(a, 0);
    *(void **)a = data_ov002_021d68c8;
    for (i = 0; i < 2; i++) {
        obj = func_0205681c(0x8c);
        if (obj != 0) {
            func_02015e8c(&loc, data_020b8e44);
            tbl = (uint32_t *)((uint8_t *)func_02052d90(loc.f4, loc.f8) + 0);
            tbl = (uint32_t *)((uint8_t *)tbl + *(uint32_t *)((uint8_t *)tbl + 0x148));
            func_02056c9c(obj, 0);
            *(void **)obj = data_ov002_021d68b0;
            *(uint32_t *)(obj + 0x84) = tbl[i * 2];
            *(uint32_t *)(obj + 0x88) = tbl[i * 2 + 1];
            *(void **)(obj + 0x80) = func_0203b6f0();
            func_02056bc0(obj + 0x48, *(void **)(obj + 0x80));
        }
        ((void **)(a + 0x80))[i] = obj;
        if (obj != 0) {
            if (loc.f4 != 0) {
                if (loc.f12) {
                    func_02052d3c(loc.f4, loc.f8);
                }
                func_02052c04(loc.f4);
            }
            func_02053290(&loc);
        }
        func_02056bc0(a + 0x48, ((void **)(a + 0x80))[i]);
    }
    return a;
}
