#include "ffc/types.h"
typedef struct { uint32_t x, y; } Pair;
extern Pair data_020b290c;
typedef struct { uint32_t pad0[3]; uint32_t w; uint8_t pad1[0x78]; Pair a; uint32_t *p; uint32_t pad2; uint32_t st; } S;
void func_020776f4(S *s) {
    if (s->st != 0) {
        if (s->st == 1) {
            s->a = data_020b290c;
        }
        return;
    }
    *s->p = 0;
    s->w = (s->w & ~0xff) | 2;
}
