#include "ffc/types.h"

typedef struct { uint8_t b[0x18]; } Slot;
typedef struct { uint8_t pad[0x6c]; uint32_t v; } Inner;
typedef struct { uint32_t pad; Inner *in; } Glob;

extern uint8_t data_020b2bb0[];
extern uint8_t data_020b2bfc[];
extern uint8_t data_020b2c48[];
extern Slot data_02144828[];
extern Glob data_02141510;
extern uint32_t data_021447e0[];
extern uint32_t data_02144804[];

extern int32_t func_020876c0(void *p);
extern void func_0208763c(void *p);
extern int32_t func_0208ffc8(void *a, uint32_t b, uint32_t c);
extern void func_02087678(void *p);

int32_t func_020900cc(void *p0, uint32_t p1, uint32_t p2)
{
    uint32_t idx;
    int32_t r;
    Slot *slot;

    if (p0 == data_020b2bb0) {
        idx = 2;
    } else if (p0 == data_020b2bfc) {
        idx = 3;
    } else {
        idx = 4;
        if (p0 != data_020b2c48) {
            idx = 5;
        }
    }

    slot = &data_02144828[idx];
    if (func_020876c0(slot) == 0) {
        data_021447e0[idx] = data_02141510.in->v;
        data_02144804[idx] = 1;
    } else {
        if (data_021447e0[idx] == data_02141510.in->v) {
            data_02144804[idx]++;
        } else {
            func_0208763c(slot);
            data_021447e0[idx] = data_02141510.in->v;
            data_02144804[idx] = 1;
        }
    }

    r = func_0208ffc8(p0, p1, p2);
    if (--data_02144804[idx] == 0) {
        func_02087678(slot);
    }
    return r;
}
