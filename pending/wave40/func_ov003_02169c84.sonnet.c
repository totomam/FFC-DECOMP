#include "ffc/types.h"

extern void func_020424e0(uint32_t v);
extern uint8_t *func_ov003_02146494(void);
extern void func_0201d014(uint32_t a, uint32_t b, void *c);
extern uint32_t func_02018104(uint32_t a, uint32_t b);
extern void func_02036c80(void *a, uint32_t b);
extern void func_0201805c(void *a, uint32_t b, uint32_t c);
extern void func_02036ca8(void *a, void *b);
extern void func_0201cff8(uint32_t a, uint32_t b, void *c);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t data_ov003_0217b264[2];

typedef struct {
    int32_t x;
    int32_t y;
} Pair;

typedef struct {
    int32_t x;
    int32_t y;
    int32_t z;
} Vec3;

typedef struct {
    int32_t x;
    int32_t y;
    Pair s;
} Tmp;

void func_ov003_02169c84(uint8_t *a) {
    struct { uint32_t pad[4]; Pair tmp; Pair s; Pair t; Vec3 p; int32_t z; } L;
    uint8_t *obj;
    uint32_t r4;
    uint32_t r1;

    func_020424e0(*(uint32_t *)(a + 0x88));
    obj = func_ov003_02146494();
    *(uint32_t *)(obj + 0xe0) = 0;
    r4 = *(uint32_t *)(obj + 0xb0);
    func_0201d014(data_020b93b8, r4, &L.p);
    r1 = func_02018104(data_020b8e44, *(uint32_t *)(a + 0x94));
    func_02036c80(&L.p, r1);
    func_0201805c(&L.s, data_020b8e44, *(uint32_t *)(a + 0x94));
    L.tmp.x = L.s.x;
    L.t.y = L.s.y << 12;
    L.tmp.y = L.s.y;
    L.t.x = L.s.x << 12;
    func_02036ca8(&L.p, &L.t);
    func_0201cff8(data_020b93b8, r4, &L.p);
    uint32_t d1 = data_ov003_0217b264[1];
    uint32_t d0 = data_ov003_0217b264[0];
    *(uint32_t *)(a + 0x80) = d0;
    *(uint32_t *)(a + 0x84) = d1;
}
