#include "ffc/types.h"

extern void func_02087620(void *object);
extern char data_020b0bd8[];
extern char data_020b0b68[];
extern char data_020b0b7c[];
extern char data_020b0b54[];
extern uint32_t data_0213df20;

typedef struct T {
    uint32_t pad[3];
    uint32_t w:8;
    uint32_t w2:24;
    uint8_t a:8;
    uint8_t b:8;
    uint8_t c:8;
    uint8_t d:8;
    uint32_t e;
    void *f;
} T;

uint8_t *func_02056c9c(uint8_t *p, uint32_t r6) {
    T *r5;
    void *vt68 = data_020b0b68;

    *(uint32_t *)(p + 0xc) &= ~0xffu;
    *(void **)p = data_020b0bd8;
    r5 = (T *)(p + 0x14);
    r5->w = 0;
    *(void **)(p + 0x14) = vt68;
    func_02087620((uint8_t *)r5 + 0x1c);
    r5->e = 0;
    r5->f = &r5->e;
    r5->a = 0;
    *(void **)(p + 0x48) = vt68;
    r5->b = 0;
    r5->c = 0;
    *(void **)(p + 0x14) = data_020b0b7c;
    r5->b = 0;

    r5 = (T *)(p + 0x48);
    r5->w = 0;
    func_02087620((uint8_t *)r5 + 0x1c);
    r5->a = 0;
    r5->b = 0;
    r5->c = 0;
    r5->e = 0;
    r5->f = &r5->e;
    *(void **)(p + 0x48) = data_020b0b54;
    r5->b = 0;

    *(uint8_t *)(p + 0x24) = (*(uint8_t *)(p + 0x24) & ~0xffu) | 1;
    *(uint8_t *)(p + 0x58) = (*(uint8_t *)(p + 0x58) & ~0xffu) | 1;
    if (r6 == 0) {
        r6 = data_0213df20;
    }
    *(uint32_t *)(p + 0x7c) = r6;
    return p;
}
