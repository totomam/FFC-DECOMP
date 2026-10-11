#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c60a8;
extern Pair data_ov007_021c60b0;

typedef struct {
    uint8_t pad0[0xfc];
    int32_t flag;
    uint8_t pad1[0x3114 - 0x100];
    Pair v;
} S;

void func_ov007_021b2a94(S *p) {
    if (p->flag == 0) {
        p->v = data_ov007_021c60a8;
        return;
    }
    if (p->flag > 0x40) p->flag = 0x40;
    p->v = data_ov007_021c60b0;
}
