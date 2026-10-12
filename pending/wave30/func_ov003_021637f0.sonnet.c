#include "ffc/types.h"
extern void func_020095b8(void *dst, void *src);
extern void *func_020059cc(void *object);
typedef struct { uint32_t fn; int32_t adj; } MP;
typedef void (*F)(void *, void *, uint32_t);
void func_ov003_021637f0(uint8_t *obj) {
    uint32_t local[3];
    uint32_t *lp = local;
    MP *p;
    uint8_t **q;
    uint8_t *base;
    int32_t off;
    F fn;
    func_020095b8(lp, obj + 0x90);
    p = (MP *)(obj + 0x88);
    q = (uint8_t **)(obj + 0x84);
    base = *q;
    off = p->adj >> 1;
    if (p->adj & 1) {
        fn = *(F *)(*(uint8_t **)(base + off) + p->fn);
    } else {
        fn = (F)p->fn;
    }
    fn(base + off, lp, *(uint32_t *)(obj + 0x9c));
    func_020059cc(lp);
    *(uint32_t *)(obj + 0xc) = (*(uint32_t *)(obj + 0xc) & ~0xffu) | 2;
}
