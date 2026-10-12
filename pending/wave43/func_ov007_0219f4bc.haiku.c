#include "ffc/types.h"

extern void *data_020b8e44;
extern void *func_0205681c(uint32_t size);
extern int func_020159c8(void *a, int b);
extern void func_02005988(void *buf, int v);
extern void *func_020059cc(void *object);
extern void *func_02033338(void *a, void *b, void *c, int d);
extern void func_02033438(void *obj, int b);
extern void func_ov007_0219f180(void *p, void *obj);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02033440(void *obj, Pair s);
extern Pair data_ov007_021c32a0;

void func_ov007_0219f4bc(void *param) {
    uint8_t *p = (uint8_t *)param;
    uint8_t buf[12];
    int r7 = 0x10;
    int done;
    void *obj;
    Pair pos;

    *(uint32_t *)(p + 0x8c) = 0;
    if (*(int *)(p + 0x94) == 1) {
        r7 = 0x12;
    }
    done = 0;
    obj = func_0205681c(0xb8);
    if (obj != 0) {
        int v = func_020159c8(data_020b8e44, r7);
        func_02005988(buf, v);
        done = 1;
        obj = func_02033338(obj, buf, p + 0x8c, 0);
    }
    if (done) {
        func_020059cc(buf);
    }
    pos.a = 0x80;
    pos.b = 0x88;
    func_02033440(obj, pos);
    func_02033438(obj, 1);
    func_ov007_0219f180(p, obj);
    func_02056bc0(p + 0x14, obj);
    *(Pair *)(p + 0x80) = data_ov007_021c32a0;
}
