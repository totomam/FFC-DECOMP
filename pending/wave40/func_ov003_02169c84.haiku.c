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
    Tmp tmp;
    Pair t;
    Vec3 p;
    uint8_t *obj;
    uint32_t r4;
    uint32_t r1;

    func_020424e0(*(uint32_t *)(a + 0x88));
    obj = func_ov003_02146494();
    *(uint32_t *)(obj + 0xe0) = 0;
    r4 = *(uint32_t *)(obj + 0xb0);
    func_0201d014(data_020b93b8, r4, &p);
    r1 = func_02018104(data_020b8e44, *(uint32_t *)(a + 0x94));
    func_02036c80(&p, r1);
    func_0201805c(&tmp.s, data_020b8e44, *(uint32_t *)(a + 0x94));
    tmp.x = tmp.s.x;
    tmp.y = tmp.s.y;
    t.x = tmp.s.x << 12;
    t.y = tmp.s.y << 12;
    func_02036ca8(&p, &t);
    func_0201cff8(data_020b93b8, r4, &p);
    *(uint32_t *)(a + 0x80) = data_ov003_0217b264[0];
    *(uint32_t *)(a + 0x84) = data_ov003_0217b264[1];
}
