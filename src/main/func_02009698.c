#include "ffc/types.h"

typedef struct { uint8_t b; } S;
extern void func_02005af4(int a, int b, int c, uint32_t d, uint32_t e, S f);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t w1;
    uint32_t w2;
} Hdr;

typedef struct {
    uint8_t flag : 1;
    uint8_t len : 7;
} Byt;

void func_02009698(int a, int b, int c, void *p) {
    uint32_t r4;
    uint32_t sum;
    S s;

    if (!((Hdr *)p)->flag) {
        r4 = (uint32_t)p + 1;
        sum = r4 + ((Byt *)p)->len;
    } else {
        r4 = ((Hdr *)p)->w2;
        sum = r4 + ((Hdr *)p)->w1;
    }
    func_02005af4(a, b, c, r4, sum, s);
}
