#include "ffc/types.h"

typedef struct {
    uint32_t w[3];
} Tmp;

typedef struct {
    int32_t x;
    int32_t y;
} Pos;

typedef struct {
    int32_t a;
    int32_t b;
} Ent;

extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, void *b, Pos p, uint32_t s0, uint32_t s1, uint32_t s2);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern int32_t func_020367bc(void *p, uint32_t idx);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, void *node);
extern void func_02031754(void *obj, int32_t id, void *b);
extern void *func_020059cc(void *object);
extern void *func_ov010_021ca340(void *a, Pos w);
extern Ent data_ov010_021d1cfc[];
extern int32_t data_ov010_021d1bd4[];
extern Ent data_ov010_021d1d00[];
extern void *data_020b8e44;
extern Pos data_ov010_021d1e84;

void func_ov010_021ca50c(uint8_t *a, uint32_t idx)
{
    Pos pos;
    Tmp t40, t34, t28, t1c;
    void *r6;
    void *obj;
    void *res;
    void *ret;
    void *q;

    *(uint32_t *)(a + 0x2c4) = 0;
    obj = *(void **)(a + 0x17c);
    ((void (*)(void *))((void **)*(void **)obj)[11])(obj);

    int32_t t = data_ov010_021d1cfc[idx].a;
    t += data_ov010_021d1bd4[0x1a];
    pos.x = t;
    int32_t u = data_ov010_021d1d00[idx].a;
    u += data_ov010_021d1bd4[0x1b];
    pos.y = u;
    if (idx == 4) {
        pos.x -= 0x10;
    }

    r6 = func_0205681c(0x118);
    if (r6 != 0) {
        r6 = func_02031624(r6, a + 0x2c4, pos, 0, 0, 0);
    }

    res = func_02062a30(*(void **)(a + 0x17c));
    q = a;
    q = a + 0x14;
    func_02056bc0(q, r6);
    func_02056bc0(q, res);

    if (func_020367bc(a + 0x220, idx) != 0) {
        ret = func_020159c8(data_020b8e44, 0x184);
        func_02005988(&t40, ret);
        func_02031754(r6, 0xb, &t40);
        func_020059cc(&t40);
        ret = func_020159c8(data_020b8e44, 0xaa);
        func_02005988(&t34, ret);
        func_02031754(r6, 0xc, &t34);
        func_020059cc(&t34);
    } else {
        ret = func_020159c8(data_020b8e44, 0xa9);
        func_02005988(&t28, ret);
        func_02031754(r6, 0xc, &t28);
        func_020059cc(&t28);
    }

    ret = func_020159c8(data_020b8e44, 0xb0);
    func_02005988(&t1c, ret);
    func_02031754(r6, -2, &t1c);
    func_020059cc(&t1c);

    res = func_ov010_021ca340(a, data_ov010_021d1e84);
    func_02056bc0(a + 0x14, res);
}
