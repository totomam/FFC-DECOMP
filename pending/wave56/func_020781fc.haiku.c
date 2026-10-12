#include "ffc/types.h"

extern int func_020781c8(void *c);
extern void func_0207e4ac(void *object);
extern uint32_t func_02092864(const uint8_t *text);
extern int func_0207e4c0(void *object, const uint8_t *text, uint32_t x);
extern int func_0207fa34(void *object, uint8_t *a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_0207e558(void *object);

typedef struct {
    uint32_t tag;
    uint32_t size;
} Chunk;

typedef struct {
    uint8_t pad[0xc];
    uint16_t off;
    uint16_t count;
} Header;

uint32_t func_020781fc(void *a, const uint8_t *b, uint8_t *c)
{
    Chunk *tbaf = 0;
    Chunk *ntf = 0;
    Chunk *imgf = 0;
    uint8_t *p;
    int i;
    uint16_t n;
    uint16_t off;

    if (func_020781c8(c) == 0) {
        return 0;
    }

    off = ((Header *)c)->off;
    n = ((Header *)c)->count;
    p = c + off;
    for (i = 0; i < n; i++) {
        Chunk *ch = (Chunk *)p;
        switch (ch->tag) {
        case 0x46415442:
            tbaf = ch;
            break;
        case 0x464e5442:
            ntf = ch;
            break;
        case 0x46494d47:
            imgf = ch;
            break;
        }
        p += ch->size;
    }

    func_0207e4ac(a);
    imgf = (Chunk *)((uint8_t *)imgf + 8);
    ((uint32_t *)a)[0x5c / 4] = (uint32_t)c;
    ((uint32_t *)a)[0x60 / 4] = (uint32_t)tbaf;
    ((uint32_t *)a)[0x64 / 4] = (uint32_t)imgf;

    if (func_0207e4c0(a, b, func_02092864(b)) == 0) {
        return 0;
    }

    if (func_0207fa34(a, (uint8_t *)imgf,
                      (uint32_t)tbaf + 0xc - (uint32_t)imgf,
                      tbaf->size - 0xc,
                      (uint32_t)ntf + 8 - (uint32_t)imgf,
                      ntf->size - 8, 0, 0) == 0) {
        func_0207e558(a);
        return 0;
    }
    return 1;
}
