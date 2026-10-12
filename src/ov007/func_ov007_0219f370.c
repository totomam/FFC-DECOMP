#include "ffc/types.h"
typedef struct { uint32_t x, y; } S;

extern void func_ov007_0219bb10(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *out, uint32_t v);
extern void *func_02033094(void *a, void *b, uint32_t c, S d, uint32_t f, uint32_t g);
extern void *func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern void *func_02008ce8(void *obj, void *a, uint32_t b, uint32_t c);
extern void *func_ov007_0219b460(void *a, S b, uint32_t d);
extern void *func_0203c0a8(uint32_t x);
extern void *func_0203c094(uint32_t x);
extern void *func_0203b6fc(void);
extern void *data_020b8e44;
extern S data_ov007_021c3290;
extern void *data_020b93b8;
extern S data_ov007_021c3298;

void func_ov007_0219f370(uint8_t *a) {
    S pair;
    uint32_t buf[3];
    void *r4;

    func_ov007_0219bb10(*(void **)(a + 0x98));
    void *r7;
    int flag = 0;
    uint32_t zero = 0;
    r4 = func_0205681c(0xa4);
    if (r4 != 0) {
        pair.x = 0x80;
        pair.y = 0x8c;
        func_02005988(buf, func_020159c8(data_020b8e44, 0x36));
        flag = 1;
        r4 = func_02033094(r4, buf, zero, pair, 4, zero);
    }
    if (flag != 0) {
        func_020059cc(buf);
    }
    func_02056bc0(a + 0x48, r4);
    void *t0 = func_02056aec(r4);
    void *r6 = func_0205681c(0x94);
    if (r6 != 0) {
        r6 = func_02008ce8(r6, r4, 0, 0);
    }
    r7 = func_ov007_0219b460(data_020b93b8, data_ov007_021c3290, 1);
    void *t1 = func_0205681c(0x94);
    if (t1 != 0) {
        t1 = func_02008ce8(t1, r4, 0, 0);
    }
    uint8_t *l = a + 0x14;
    func_02056bc0(l, t1);
    func_02056bc0(l, r7);
    func_02056bc0(l, r6);
    func_02056bc0(l, t0);

    if (*(uint8_t *)(a + 0x90) != 0 && *(int32_t *)(a + 0x94) != 1) {
        void *u7 = func_02056aec(a);
        void *u0 = func_0203c0a8(0x1e);
        void *u4 = func_0203c094(0x1e);
        void *u6 = func_0203b6fc();
        func_02056bc0(u6, u4);
        func_02056bc0(u6, u0);
        uint8_t *m = a + 0x14;
        func_02056bc0(m, u6);
        func_02056bc0(m, u7);
    } else {
        *(S *)(a + 0x80) = data_ov007_021c3298;
    }
}
