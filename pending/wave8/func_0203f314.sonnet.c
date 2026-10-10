#include "ffc/types.h"

typedef struct {
    uint32_t fn;
    int32_t adj;
} PTMF;

void func_0203f314(void *self) {
    uint8_t *p = (uint8_t *)self;
    uint8_t *base = *(uint8_t **)(p + 0x84);
    PTMF *m = (PTMF *)(p + 0x88);
    int32_t adj = m->adj;
    int32_t off = adj >> 1;
    void (*fn)(void *, uint8_t, uint8_t);
    if (adj & 1) {
        uint8_t *vt = *(uint8_t **)(base + off);
        fn = *(void (**)(void *, uint8_t, uint8_t))(vt + m->fn);
    } else {
        fn = (void (*)(void *, uint8_t, uint8_t))m->fn;
    }
    fn(base + off, *(uint8_t *)(p + 0x90), *(uint8_t *)(p + 0x91));
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
}
