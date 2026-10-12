#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021aa770(void *p, int v);
extern void *func_ov007_021aadf8(void *p);
extern void *func_ov007_021ad044(void *p);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c49e8;

void func_ov007_021a9440(uint8_t *self)
{
    void *p;

    switch (*(uint32_t *)(self + 0x88)) {
    case 0:
        *(uint32_t *)(self + 0xc) = (*(uint32_t *)(self + 0xc) & ~0xffu) | 2;
        break;
    case 1:
        p = func_0205681c(0xa0);
        if (p != 0) {
            p = func_ov007_021aa770(p, -1);
        }
        func_02056bc0(self + 0x14, p);
        break;
    case 2:
        p = func_0205681c(0xe0);
        if (p != 0) {
            p = func_ov007_021aadf8(p);
        }
        func_02056bc0(self + 0x14, p);
        break;
    case 3:
        p = func_0205681c(0x88);
        if (p != 0) {
            p = func_ov007_021ad044(p);
        }
        func_02056bc0(self + 0x14, p);
        break;
    }

    *(Pair *)(self + 0x80) = data_ov007_021c49e8;
}
