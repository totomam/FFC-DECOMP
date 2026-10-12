#include "ffc/types.h"

typedef struct { uint32_t x; uint32_t y; } Pair;
typedef struct { uint8_t v; } Flag8;
typedef struct { Flag8 f0; void *ptr; uint8_t flag; Pair s; } Local;

extern void func_0208763c(void);
extern void func_0205b7e8(void *dst, Pair *src, Flag8 f);
extern void func_02087678(void *p);
extern uint8_t data_0213e118[];

void func_0205b14c(uint8_t *p, uint32_t a, uint32_t b) {
    Local L;
    L.s.x = b;
    L.s.y = a;
    L.ptr = data_0213e118;
    L.flag = 1;
    if (L.flag) {
        func_0208763c();
    }
    L.f0.v = 0;
    func_0205b7e8(p + 0xf4, &L.s, L.f0);
    if (L.flag) {
        func_02087678(L.ptr);
    }
}
