#include "ffc/types.h"

extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];

extern void func_020849c4(uint32_t a, uint32_t b, uint32_t c);
extern void func_020849f4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084a58(uint32_t a, uint32_t b, uint32_t c);
extern void func_020878ac(uint32_t a, uint32_t c);
extern void func_020845a8(uint32_t x, uint32_t a, uint32_t b, uint32_t c, uint32_t one);
extern void func_020844ec(uint32_t x, uint32_t a, uint32_t b, uint32_t c, uint32_t one);
extern void func_02056858(uint32_t a);

typedef struct {
    uint8_t pad[0x14];
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t f;
} S;

void func_0205693c(S *s) {
    uint32_t b = s->b;
    uint32_t a = s->a;
    uint32_t c = s->c;

    if (data_020b055c == 0 || data_0213e018[3] != 0 || (c & 0x1f) != 0) {
        if (((b | a | c) & 3) != 0) {
            func_020849c4(b, a, c);
        } else if ((c & 0x1f) != 0) {
            func_020849f4(b, a, c);
        } else {
            func_02084a58(b, a, c);
        }
    } else {
        func_020878ac(b, c);
        func_020878ac(a, c);
        if (((b | a | c) & 3) != 0) {
            func_020845a8(b | a, b, a, c, 1);
        } else {
            func_020844ec(b | a, b, a, c, 1);
        }
    }

    if (s->f != 0) {
        func_02056858(b);
    }
}
