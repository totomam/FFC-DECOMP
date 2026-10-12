#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Blk;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_0206aed4(void *obj, int32_t a, uint32_t b, int32_t c);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203c2d0(void);
extern void func_02060548(void *obj, int32_t v);
extern void func_0206056c(void *obj, int32_t v);
extern void func_02060574(void *obj, int32_t v);
extern void func_0206b014(void *obj, int32_t v);
extern void func_0206b034(void *obj, int32_t v);
extern void func_0206b048(void *obj, int32_t v);
extern void func_0206b068(void *obj, int32_t v);
extern void func_0206b278(void *obj, Blk s);
extern void func_0206afdc(void *obj);
extern void *func_0203c094(uint32_t x);
extern void func_020211d4(void *obj, int32_t v);
typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *data_0213df18;
extern Pair data_ov003_0217a55c;

void func_ov003_021639f4(void *this)
{
    uint8_t *p = (uint8_t *)this;
    void *obj;
    void *r;
    int32_t x;
    Blk s;

    obj = func_0205681c(0x4c);
    if (obj != 0) {
        obj = func_0206aed4(obj, -1, func_0204f7ec(data_0213df18), 1);
    }
    *(void **)(p + 0x8c) = obj;
    func_02056bc0(p + 0x48, obj);
    r = func_0203c2d0();
    func_02060548(r, 2);
    func_0206056c(r, 0x10);
    func_02060574(r, 0x3f);
    func_0206b014(*(void **)(p + 0x8c), 0x3f);
    func_0206b034(*(void **)(p + 0x8c), 0x3f);
    func_0206b048(*(void **)(p + 0x8c), 0);
    x = 1;
    func_0206b068(*(void **)(p + 0x8c), 1);
    x += 0xff;
    s.a = 0;
    s.b = 0;
    s.c = x;
    s.d = 0xc0;
    func_0206b278(*(void **)(p + 0x8c), s);
    func_0206afdc(*(void **)(p + 0x8c));
    *(uint32_t *)(p + 0x90) = 0;
    r = func_0203c094(0x59);
    func_02056bc0(p + 0x48, r);
    func_020211d4((void *)(0x59 + 0xb5), 0);
    *(Pair *)(p + 0x80) = data_ov003_0217a55c;
}
