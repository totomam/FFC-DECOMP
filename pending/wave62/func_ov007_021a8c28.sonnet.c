#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void func_02056c4c(void *);
extern void *func_0205681c(int);
extern void *func_020159c8(void *, int);
extern void func_02005988(void *, void *);
extern void *func_02033338(void *, void *, void *, int);
extern void *func_020059cc(void *);
extern void func_02033438(void *, int);
extern void func_02056bc0(void *, void *);
extern void *data_020b8e44;
extern Pair data_ov007_021c4768;
void func_ov007_021a8c28(uint8_t *p) {
    uint32_t tmp[3];
    int f;
    void *o;
    func_02056c4c(*(void **)(p + 0xd4));
    *(uint32_t *)(p + 0xd0) = 1;
    f = 0;
    o = func_0205681c(0xb8);
    if (o != 0) {
        func_02005988(tmp, func_020159c8(data_020b8e44, 0x3b));
        f = 1;
        o = func_02033338(o, tmp, p + 0xd0, 0);
    }
    if (f) func_020059cc(tmp);
    func_02033438(o, 1);
    func_02056bc0(p + 0x14, o);
    *(Pair *)(p + 0xb8) = data_ov007_021c4768;
}
