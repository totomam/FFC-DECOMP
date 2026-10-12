#include "ffc/types.h"

extern uint8_t data_0213df10[];
extern void func_0208763c(void *x);
extern void func_0204f6b0(void *a, void *b, void *c);
extern void func_02088f30(void);
extern void *func_0205681c(uint32_t n);
extern uint32_t func_0205ffd8(void *obj, void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02087678(void *x);

typedef struct {
    void *ptr;
    uint8_t flag;
} Guard;

void func_0204ef0c(uint8_t *p, uint32_t i, uint32_t c) {
    
    
    Guard g;
    Guard *gp = &g;
    uint8_t *b;
    void *obj;
    uint32_t r6, r7;

    gp->ptr = *(uint8_t **)(data_0213df10 + 8) + 0x7c;
    gp->flag = 1;
    if (gp->flag) {
        func_0208763c(gp->ptr);
    }
    b = *(uint8_t **)(p + 8);
    func_0204f6b0(*(void **)(p + 4), *(uint8_t **)(b + 0x54) + i * 0x1c, p + 0x50);
    b = *(uint8_t **)(p + 8);
    func_0204f6b0(*(void **)(p + 4), *(uint8_t **)(b + 0x58) + c * 0x1c, p + 0x64);

    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & 0x7fffffff) | ((c == 0 ? 0u : 1u) << 31);
    r6 = 0;
    r7 = 0;

    if (c != 0) {
        switch (*(uint32_t *)(p + 0x68)) {
        default: func_02088f30(); break;
        case 6: r6 = 0x6890000; break;
        case 7: r6 = 0x6894000; break;
        case 9: r6 = 0x68a0000; break;
        }
        r7 = *(uint32_t *)(p + 0x68);
    }

    obj = func_0205681c(0x28);
    if (obj != 0) {
        b = *(uint8_t **)(p + 8);
        obj = (void *)func_0205ffd8(obj, p,
            *(uint32_t *)(b + 0x48), *(uint32_t *)(b + 0x44),
            *(uint32_t *)(p + 0x50), *(uint32_t *)(b + 0x3c),
            r6, r7);
    }
    *(void **)(p + 0x18) = obj;

    if (gp->flag) {
        func_02087678(g.ptr);
    }
}
