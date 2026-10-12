#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d, e; } Sub;
typedef struct { uint32_t tag; uint32_t size; Sub s; } Sec;
typedef struct { uint8_t pad[0xc]; uint16_t off; uint16_t cnt; } Hdr;

void func_0207960c(Hdr *h) {
    Sec *e = (Sec *)((uint8_t *)h + h->off);
    int i;
    for (i = 0; i < h->cnt; i++) {
        switch (e->tag) {
        case 0x43574448: {
            Sub *s = &e->s;
            if (s->b) s->b += (uint32_t)h;
            break; }
        case 0x434d4150: {
            Sub *s = &e->s;
            if (s->c) s->c += (uint32_t)h;
            break; }
        case 0x43474c50:
            break;
        case 0x46494e46: {
            Sub *s = &e->s;
            s->c += (uint32_t)h;
            if (s->d) s->d += (uint32_t)h;
            if (s->e) s->e += (uint32_t)h;
            break; }
        }
        e = (Sec *)((uint8_t *)e + e->size);
    }
}
