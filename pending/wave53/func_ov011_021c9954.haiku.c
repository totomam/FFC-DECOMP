#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern void func_020095b8(void *p);
extern char data_ov011_021cbbac[];
extern char data_020ae644[];
extern char data_020ae654[];

typedef struct {
    uint32_t a0;
    void *p1;
    uint32_t a2;
    void *p3;
    uint32_t a4;
    void *p5;
    uint32_t a6;
    void *p7;
    uint32_t a8;
    void *p9;
    uint32_t a10;
    uint32_t a11;
    uint16_t h[17];
    uint32_t t54;
    uint32_t t58;
    uint32_t t5c;
} Ent;

void *func_ov011_021c9954(uint8_t *self, uint32_t a1, uint8_t *src, uint32_t a3, uint8_t a5, uint32_t a6)
{
    uint8_t *sub;
    Ent *d;
    Ent *s;
    uint32_t *ts;
    uint32_t *td;
    uint32_t *te;
    uint8_t * volatile vsrc = src;
    uint32_t volatile va3 = a3;
    int i;

    func_02056c9c(self, 0);
    *(void **)self = data_ov011_021cbbac;
    *(uint32_t *)(self + 0x80) = a1;
    sub = self + 0x84;
    func_020095b8(sub);

    d = (Ent *)(sub + 0xc);
    s = (Ent *)(vsrc + 0xc);
    do {
        d->a0 = s->a0;
        d->p1 = data_020ae644;
        d->a2 = s->a2;
        d->p3 = data_020ae644;
        d->a4 = s->a4;
        d->p5 = data_020ae644;
        d->a6 = s->a6;
        d->p7 = data_020ae644;
        d->a8 = s->a8;
        d->p9 = data_020ae644;
        d->p9 = data_020ae654;
        d->a10 = s->a10;
        d->a11 = s->a11;
        for (i = 0; i < 17; i++) {
            d->h[i] = s->h[i];
        }
        d->t54 = s->t54;
        d->t58 = s->t58;
        d->t5c = s->t5c;
        s++;
        d++;
    } while ((uint8_t *)d < sub + 0x1ec);

    ts = (uint32_t *)(vsrc + 0x1ec);
    td = (uint32_t *)(sub + 0x1ec);
    te = (uint32_t *)(sub + 0x200);
    do {
        *td++ = *ts++;
    } while (td < te);

    *(uint32_t *)(self + 0x284) = va3;
    *(uint8_t *)(self + 0x288) = a5;
    *(uint32_t *)(self + 0x28c) = a6;
    return self;
}
