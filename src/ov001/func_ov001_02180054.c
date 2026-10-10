#include "ffc/types.h"

extern void func_ov001_02181ddc(void *);

typedef struct Inner {
    uint8_t pad0[0x14];
    int32_t m14;
    int32_t m18;
    int32_t m1c;
} Inner;

typedef struct Outer {
    uint8_t pad0[0x8];
    Inner *m8;
    uint8_t pad1[0x24 - 0xc];
    int32_t m24;
    uint8_t pad2[0x34 - 0x28];
    void (*m30)(void *, int);
} Outer;

uint32_t func_ov001_02180054(Outer *p, int a) {
    if (!p) {
        return 1;
    }
    if (p->m30 == 0) {
        return 1;
    }
    p->m24++;
    p->m8->m1c++;
    p->m30(p, a);
    p->m24--;
    p->m8->m1c--;
    if (p->m8->m14 != 0 && p->m8->m1c == 0) {
        func_ov001_02181ddc(p->m8);
        return 0;
    }
    return 1;
}
