#include "ffc/types.h"

extern void *func_0203bfe0(uint32_t);
extern void *func_0203bfcc(uint32_t);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void func_02042b18(void *obj, uint32_t v);
extern void func_020424d4(void *obj, uint32_t v);
extern void *func_0203b75c(uint32_t v);
extern void *func_02056aec(void *obj);

void func_ov003_02168798(uint8_t *a0)
{
    uint32_t st = *(uint32_t *)(a0 + 0x84);
    *(uint32_t *)(a0 + 0x84) = *(uint32_t *)(a0 + 0x84) + 1;

    switch (st) {
    case 0: {
        void *a = func_0203bfe0(60);
        void *b = func_0203bfcc(60);
        void *obj = func_0203b6fc();
        func_02056bc0(obj, b);
        func_02056bc0(obj, a);
        func_02056bc0(a0 + 0x14, obj);
        break;
    }
    case 1: {
        void *n;
        void *r;
        uint8_t *q;
        func_02042b18(*(void **)(a0 + 0x80), 0);
        func_020424d4(*(void **)(a0 + 0x80), 0);
        n = func_0203b75c(1);
        r = func_02056aec(*(void **)(a0 + 0x80));
        q = a0 + 0x14;
        func_02056bc0(q, r);
        func_02056bc0(q, n);
        break;
    }
    }
}
