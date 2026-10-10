#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02030dbc(void *a, void *b, void *c, void *d);
extern void func_02087678(void *p);

typedef struct {
    uint32_t a;
    uint8_t *q;
    uint8_t *r;
    uint8_t flag;
    uint32_t cnt;
    uint32_t x;
    uint32_t y;
    uint32_t pad[2];
} Local;

void func_0202f08c(uint8_t *p, uint32_t x, uint32_t y) {
    Local L;

    L.r = p + 0x4d0;
    L.flag = 1;
    if (L.flag) {
        func_0208763c(L.r);
    }
    L.cnt = 0x12;
    L.q = p + 0x488;
    L.x = x;
    L.y = y;
    func_02030dbc(&L, p + 0x484, &L.q, &L.cnt);
    if (L.flag) {
        func_02087678(L.r);
    }
}
