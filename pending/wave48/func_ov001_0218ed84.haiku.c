#include "ffc/types.h"

extern int func_02071e50(void *p);
extern void func_02071e84(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *buf, void *b);
extern void *func_02033094(void *a, void *b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_020059cc(void *buf);
extern void func_02056bc0(void *obj, void *node);
extern void *func_02056aec(void *p);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_ov001_0218b650(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *data_020b8e44;
extern uint32_t data_ov001_02194bbc[];
extern void *data_020b93b8;

void func_ov001_0218ed84(void *self) {
    uint8_t *s = (uint8_t *)self;
    uint32_t zero = 0;
    uint32_t flag = 0;
    void *r4;
    void *r7;
    void *n;
    void *t;
    uint32_t lk[2];
    uint32_t buf[3];
    uint32_t extra[2];

    if (s[0xb4] != 0) {
        return;
    }
    if (func_02071e50(*(void **)((char *)*(void **)data_020b8e44 + 0x80))) {
        func_02071e84(*(void **)((char *)*(void **)data_020b8e44 + 0x80));
    }
    r4 = func_0205681c(0xa4);
    if (r4 != 0) {
        lk[0] = 0x80;
        lk[1] = 0x60;
        t = func_020159c8(data_020b8e44, 0x36);
        func_02005988(buf, t);
        r4 = func_02033094(r4, buf, zero, lk[0], lk[1], 4, zero);
        flag = 1;
    }
    if (flag != 0) {
        func_020059cc(buf);
    }
    func_02056bc0((char *)self + 0x48, r4);
    n = func_02056aec(r4);
    t = func_0205681c(0x94);
    if (t != 0) {
        t = func_02008ce8(t, r4, 0, 0);
    }
    r7 = func_ov001_0218b650(data_020b93b8, data_ov001_02194bbc[0], data_ov001_02194bbc[1], 1);
    t = func_0205681c(0x94);
    if (t != 0) {
        t = func_02008ce8(t, r4, 0, 0);
    }
    func_02056bc0((char *)self + 0x14, t);
    func_02056bc0((char *)self + 0x14, r7);
    func_02056bc0((char *)self + 0x14, t);
    func_02056bc0((char *)self + 0x14, n);
}
