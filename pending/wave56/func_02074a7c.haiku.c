#include "ffc/types.h"

extern void func_02074c04(void *p);
extern void func_0208763c(void);
extern int32_t func_02073868(void *p);
extern void *func_0205681c(uint32_t v);
extern void func_02087678(void *p);
extern void func_02074b28(void *p);

void func_02074a7c(uint8_t *self) {
    struct L {
        uint8_t *p;
        uint8_t f;
    } loc;
    int32_t i, j;
    uint32_t off;
    uint8_t *q;
    uint8_t *base;

    func_02074c04(self);
    loc.p = self + 0x4238;
    *((uint8_t *)&loc + 4) = 1;
    if (*((uint8_t *)&loc + 4)) {
        func_0208763c();
    }

    i = 0;
    if (func_02073868(*(void **)(self + 0x2c)) > 0) {
        off = 0x4138;
        off += 0x80;
        do {
            j = 0;
            base = self + i * 4;
            for (; j < 2; j++) {
                *(void **)(base + 0x30 + j * 0x80) = func_0205681c(0x2004);
            }
            *(void **)(base + 0x4138) = func_0205681c(0xc04);
            q = func_0205681c(0xc);
            if (q != 0) {
                uint8_t *h;
                *(uint32_t *)q = 0;
                h = q + 4;
                *(uint8_t **)(h + 4) = h;
                *(uint8_t **)h = h;
            }
            *(uint8_t **)(base + off) = q;
            i++;
        } while (i < func_02073868(*(void **)(self + 0x2c)));
    }

    if (*((uint8_t *)&loc + 4)) {
        func_02087678(loc.p);
    }
    func_02074b28(self);
}
