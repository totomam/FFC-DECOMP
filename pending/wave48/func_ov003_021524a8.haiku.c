#include "ffc/types.h"

extern void *data_020b93b8;
extern void *data_020b8e44;
extern int func_0201bd84(void *, uint32_t);
extern void func_0201cf34(void *, void *);
extern void *func_ov003_0214649c(void *);
extern void *func_ov003_02153470(void);
extern int func_020192f4(void *, uint32_t);
extern void func_02018254(void *, void *, uint32_t);
extern void *func_02052d90(void *, uint32_t);
extern void *func_0205681c(uint32_t);
extern void *func_ov003_021518d0(void *, void *, uint32_t);
extern void func_ov003_021526d4(void *, uint32_t);
extern void func_02056bc0(void *, void *);
extern void func_02052d3c(void *, uint32_t);
extern void func_02052c04(void *);
extern void *func_02053290(void *);

typedef struct {
    uint32_t pad;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Loc;

void func_ov003_021524a8(uint8_t *self, uint32_t arg)
{
    void *obj;
    void *p;
    volatile uint8_t flag;
    Loc loc;
    uint8_t buf[0x98];
    uint16_t old;
    volatile uint16_t *ime = (volatile uint16_t *)0x04000208;
    uint32_t w;

    if (arg == 0) {
        return;
    }
    if (func_0201bd84(data_020b93b8, 0x50) != 0) {
        return;
    }
    func_0201cf34(data_020b93b8, buf);
    w = *(uint32_t *)(buf + 0x1c);
    if (((w << 24) >> 31) == 0) {
        return;
    }
    func_ov003_0214649c(*(void **)(self + 0x84));
    p = func_ov003_02153470();
    if (func_020192f4(data_020b8e44, *(uint32_t *)p) != 0) {
        return;
    }
    func_02018254(&loc, data_020b8e44, arg);
    p = func_02052d90(loc.mar, loc.idx);
    if (((uint8_t *)p)[4] == 0) {
        goto cleanup;
    }
    if (*(uint32_t *)(self + 0xa8) == arg) {
        goto cleanup;
    }
    p = func_02052d90(loc.mar, loc.idx);
    {
        uint32_t t2 = *(uint32_t *)((uint8_t *)p + 0x2c);
        uint32_t t1 = *(uint32_t *)((uint8_t *)p + 0x28);
        *(uint32_t *)(self + 0x8c) = t1;
        *(uint32_t *)(self + 0x90) = t2;
    }
    p = func_02052d90(loc.mar, loc.idx);
    *(uint32_t *)(self + 0x94) = *(uint32_t *)((uint8_t *)p + 0x14);
    p = func_02052d90(loc.mar, loc.idx);
    *(uint32_t *)(self + 0x98) = *(uint32_t *)((uint8_t *)p + 0x18);
    p = func_02052d90(loc.mar, loc.idx);
    self[0x9c] = ((uint8_t *)p)[5];

    obj = func_0205681c(0xb0);
    if (obj != 0) {
        obj = func_ov003_021518d0(obj, *(void **)(self + 0x84), arg);
    }
    func_ov003_021526d4(self, arg);

    old = *ime;
    *ime = 0;
    flag = 0;
    if (old != 0) {
        flag = 1;
    }

    func_02056bc0(*(void **)(self + 0xa4), obj);
    *(uint32_t *)(self + 0xa8) = arg;
    *(void **)(self + 0x88) = obj;
    (void)*ime;
    *ime = flag;

cleanup:
    if (loc.mar != 0) {
        if (loc.flag != 0) {
            func_02052d3c(loc.mar, loc.idx);
        }
        func_02052c04(loc.mar);
    }
    func_02053290(&loc);
}
