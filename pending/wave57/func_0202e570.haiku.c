#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void func_02056c4c(void *p);
extern void func_02030e20(void *a, void *b, void *c, void *d);

typedef struct {
    uint8_t pad[0x4b8];
} Dummy;

void func_0202e570(uint8_t *base) {
    uint8_t *p = base;
    uint8_t *r4;
    uint32_t *cnt;
    uint8_t *q;
    uint32_t sa;
    uint32_t sb;
    uint32_t *sp10;
    uint8_t flag;
    uint8_t *fp;
    void *obj;

    r4 = p + 0x4b8;
    cnt = (uint32_t *)(p + 0x4e8);
    func_0208763c(r4);
    *cnt = *cnt + 1;
    if (*cnt == 1) {
        uint32_t *a = (uint32_t *)(p + 0x54);
        uint32_t *b = (uint32_t *)(p + 0x20);
        *a = (*a & ~0xffu) | 1;
        *b = (*b & ~0xffu) | 1;
    }
    func_02087678(r4);

    q = p + 0x4d0;
    fp = &flag;
    *fp = 1;
    if (*fp != 0) {
        func_0208763c(q);
    }

    *(uint32_t *)(p + 0xac) = 0;
    *(uint32_t *)(p + 0xb0) = 0;
    *(uint32_t *)(p + 0xb4) = 0;
    *(uint32_t *)(p + 0xa0) = 0;
    *(uint32_t *)(p + 0xa4) = 0;
    *(uint32_t *)(p + 0xa8) = 0;
    *(uint32_t *)(p + 0xc4) = 1u << 12;
    *(uint32_t *)(p + 0xc8) = 0;
    *(uint8_t *)(p + 0xc0) = 1;
    *(uint16_t *)(p + 0xba) = 0x7fff;
    *(uint32_t *)(p + 0x47c) = 0;
    *(uint32_t *)(p + 0xbc) = 0;
    *(int32_t *)(p + 0xcc) = 0x0fffffff;
    *(uint32_t *)(p + 0xd0) = 0;
    *(uint32_t *)(p + 0x84) = 0;
    *(uint32_t *)(p + 0x90) = 0;
    *(uint32_t *)(p + 0x94) = 0;

    func_02056c4c(p + 0x48);

    sp10 = (uint32_t *)(p + 0x488);
    sb = *(uint32_t *)(p + 0x48c);
    func_02030e20(&sa, p + 0x484, &sb, &sp10);

    obj = *(void **)(p + 0x80);
    if (obj != 0) {
        void **vt = *(void ***)obj;
        ((void (*)(void *))vt[1])(obj);
    }
    *(uint32_t *)(p + 0x80) = 0;

    if (*fp != 0) {
        func_02087678(q);
    }

    func_0208763c(r4);
    *cnt = *cnt - 1;
    if (*cnt == 0) {
        uint32_t *a = (uint32_t *)(p + 0x54);
        uint32_t *b = (uint32_t *)(p + 0x20);
        *a = *a & ~0xffu;
        *b = *b & ~0xffu;
    }
    func_02087678(r4);
}
