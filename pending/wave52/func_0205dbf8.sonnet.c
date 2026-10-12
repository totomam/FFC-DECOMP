#include "ffc/types.h"

typedef struct Rec {
    uint32_t a;
    uint32_t flags;
    uint32_t kind;
} Rec;

typedef struct Ctx {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint8_t *buf;
} Ctx;

extern void *func_02052d90(const void *mar, uint32_t index);
extern int func_0205dbd0(void *p);
extern int func_0205dbd8(void *p);
extern void *func_02056830(int size);
extern uint8_t *func_0205da5c(void *p);

void *func_0205dbf8(Ctx *p) {
    int i;
    int n;
    int size;
    int a;
    uint8_t *src;
    uint8_t *dst;

    if ((((Rec *)func_02052d90((void *)p->f4, p->f8))->flags & 1) == 0) {
        if (((Rec *)func_02052d90((void *)p->f4, p->f8))->kind == 3) {
            if (p->buf == 0) {
                a = func_0205dbd0(p);
                size = a;
                n = func_0205dbd8(p);
                size = size * n;
                p->buf = func_02056830(size);
                src = func_0205da5c(p);
                dst = p->buf;
                n = size / 2;
                for (i = 0; i < n; i++) {
                    uint8_t b = src[i];
                    dst[i * 2] = b & 0xf;
                    dst[i * 2 + 1] = b >> 4;
                }
            }
            return p->buf;
        }
    }
    return func_0205da5c(p);
}
