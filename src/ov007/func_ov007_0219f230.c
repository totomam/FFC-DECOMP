#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *src, int id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *buf, void *arg, int flag);
extern void *func_020059cc(void *object);
extern void func_02033440(void *obj, Pair p);
extern void func_02033438(void *obj, int v);
extern void func_ov007_0219f180(void *self, void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov007_021c3280;

void func_ov007_0219f230(uint8_t *self)
{
    Pair p;
    uint8_t buf[12];
    uint8_t *pb;
    void *obj;
    void *tmp;
    int r6;
    int id;

    *(int *)(self + 0x8c) = 1;
    if (*(int *)(self + 0x94) != 2) {
        r6 = 0;
        obj = func_0205681c(0xb8);
        if (obj != 0) {
            id = 15;
            if (*(uint8_t *)(self + 0x90) == 0) {
                id = 14;
            }
            tmp = func_020159c8(data_020b8e44, id);
            pb = buf;
            func_02005988(pb, tmp);
            r6 = 1;
            obj = func_02033338(obj, pb, self + 0x8c, 0);
        }
        if (r6 != 0) {
            func_020059cc(buf);
        }
        p.a = 0x80;
        p.b = 0x88;
        func_02033440(obj, p);
        func_02033438(obj, 1);
        func_ov007_0219f180(self, obj);
        func_02056bc0(self + 0x14, obj);
    }
    *(Pair *)(self + 0x80) = data_ov007_021c3280;
}
