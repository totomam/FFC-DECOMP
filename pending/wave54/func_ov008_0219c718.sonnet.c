#include "ffc/types.h"

extern void *func_0205681c(void);
extern uint32_t func_0204f7ec(const void *object);
typedef struct { int32_t x, y; } V2;
extern void *func_020316bc(void *a, uint32_t b, void *c, V2 d, int32_t f, int32_t g, int32_t h);
extern void *func_020159c8(void *object, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void func_020059cc(void *object);
extern void *func_02062a30(void *owner);
extern void *func_ov008_0219c86c(void *owner, uint32_t a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

typedef struct { uint8_t p0[0x18]; int32_t a18, a1c; uint8_t p1[0x24]; int32_t a40, a44, a48, a4c, a50, a54; } D;
extern D data_ov008_021a7cbc;
typedef struct { uint8_t p0[0x14]; uint8_t list[0xd0]; void *o; uint8_t pad[0x14]; int32_t f1; int32_t f2; uint8_t pad2; } P;
extern void *data_0213df18;
extern void *data_020b8e44;
extern uint32_t data_ov008_021a7eb4[];

void func_ov008_0219c718(uint8_t *p, int32_t x)
{
    void *r4;
    void *r6;
    uint32_t s1[3];
    uint32_t s2[3];
    int32_t m;
    int32_t f;
    uint32_t t;
    struct { void *h; V2 v; } L;
    D *d = &data_ov008_021a7cbc;

    ((void (*)(void *))(*(void ***)*(void **)(p + 0xe4))[0x2c / 4])(*(void **)(p + 0xe4));

    *(int32_t *)(p + 0xfc) = x + ((int32_t)p[0x105] << 3);
    *(int32_t *)(p + 0x100) = 0;

    L.h = func_0205681c();
    if (L.h != 0) {
        int32_t q = x / 4;
        int32_t ex = q * data_ov008_021a7cbc.a48;
        int32_t ey = q * data_ov008_021a7cbc.a4c;
        m = x % 4;
        int32_t fy = (m == 3);
        int32_t ty = (m - fy) * data_ov008_021a7cbc.a44;
        int32_t fx = (m == 3);
        int32_t tx = (m - fx) * data_ov008_021a7cbc.a40;
        L.v.x = data_ov008_021a7cbc.a18 + tx + ex + data_ov008_021a7cbc.a50;
        L.v.y = data_ov008_021a7cbc.a1c + ty + ey + data_ov008_021a7cbc.a54;
        t = func_0204f7ec(data_0213df18);
        L.h = func_020316bc(L.h, t, p + 0x100, L.v, 0, 0, 0);
    }

    r4 = func_020159c8(data_020b8e44, 0xc9);
    func_02005988(s1, r4);
    func_02031754(L.h, 1, s1);
    func_020059cc(s1);

    r4 = func_020159c8(data_020b8e44, 0xca);
    func_02005988(s2, r4);
    func_02031754(L.h, (uint32_t)-2, s2);
    func_020059cc(s2);

    r4 = func_02062a30(*(void **)(p + 0xe4));
    r6 = func_ov008_0219c86c(p, data_ov008_021a7eb4[0], data_ov008_021a7eb4[1]);
    func_02056bc0(p + 0x14, L.h);
    func_02056bc0(p + 0x14, r6);
    func_02056bc0(p + 0x14, r4);
}
