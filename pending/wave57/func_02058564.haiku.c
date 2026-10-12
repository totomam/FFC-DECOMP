#include "ffc/types.h"

extern void *data_0213df18;
extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];
extern void func_020849c4(uint32_t, uint32_t, uint32_t);
extern void func_020849f4(uint32_t, uint32_t, uint32_t);
extern void func_02084a58(uint32_t, uint32_t, uint32_t);
extern void func_020878ac(uint32_t, uint32_t);
extern void func_020845a8(int, uint32_t, uint32_t, uint32_t, int);
extern void func_020844ec(int, uint32_t, uint32_t, uint32_t, int);
extern uint32_t func_0204f804(void *, uint32_t, uint32_t);
extern void func_02084774(int);
extern void func_02056858(uint32_t);

typedef struct {
    uint32_t x0;
    uint32_t a;
    uint32_t ret;
    uint32_t x3;
    uint32_t w;
} Locals;

static inline void gen_path(uint32_t a, uint32_t b, uint32_t c)
{
    if (((a | b | c) & 3) != 0) {
        func_020849c4(a, b, c);
    } else if ((c & 0x1f) != 0) {
        func_020849f4(a, b, c);
    } else {
        func_02084a58(a, b, c);
    }
}

void func_02058564(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint8_t flag)
{
    Locals l;

    if (*(uint32_t *)(p + 0x40) != 0) {
        ((uint8_t *)&l.w)[0] = 0;
        l.a = a;
        l.w = (l.w & ~0x7u & ~0x18u) | 0x80u;
        l.ret = func_0204f804(data_0213df18, a, l.w);
        if (data_020b055c == 0 || data_0213e018[3] != 0 || (c & 0x1f) != 0) {
            gen_path(a, b, c);
        } else {
            func_020878ac(a, c);
            func_020878ac(b, c);
            if (((a | b | c) & 3) != 0) {
                func_020845a8(3, a, b, c, 1);
            } else {
                func_020844ec(3, a, b, c, 1);
            }
            func_02084774(3);
        }
        func_0204f804(data_0213df18, l.a, l.ret);
    } else {
        if (data_020b055c == 0 || data_0213e018[3] != 0 || (c & 0x1f) != 0) {
            gen_path(a, b, c);
        } else {
            func_020878ac(a, c);
            func_020878ac(b, c);
            if (((a | b | c) & 3) != 0) {
                func_020845a8(3, a, b, c, 1);
            } else {
                func_020844ec(3, a, b, c, 1);
            }
        }
    }
    if (flag != 0) {
        func_02056858(a);
    }
}
