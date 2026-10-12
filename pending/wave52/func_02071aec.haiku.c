#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t zero);
extern void func_0205234c(void *a, void *b);
extern void *func_0205681c(uint32_t size);
extern void *func_0205f60c(void *p, void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02005988(void *dst, uint32_t v);
extern void *func_02063c94(void *p, void *buf, void *q, uint32_t c, uint32_t d);
extern void func_020059cc(void *object);
extern void func_02056bc0(void *object, void *node);
extern char data_020b2220[];
extern void *data_0213df20;
extern char data_020b226c[];
extern char data_020a0e00[];
extern uint32_t data_020b220c[];

void *func_02071aec(uint8_t *self, void *a, void *b) {
    uint32_t buf[3];
    void *r7;
    void *r6;
    int used;
    uint8_t *p;

    func_02056c9c(self, 0);
    *(void **)self = data_020b2220;
    *(void **)(self + 0x84) = a;
    if (b == 0) {
        b = data_0213df20;
    }
    func_0205234c(data_020b226c, data_020a0e00);
    r7 = func_0205681c(0x50);
    if (r7 != 0) {
        r7 = func_0205f60c(r7, b, 1, 1, 0);
    }
    used = 0;
    r6 = func_0205681c(0x80);
    if (r6 != 0) {
        func_02005988(buf, data_020b220c[2]);
        used = 1;
        r6 = func_02063c94(r6, buf, r7, 2, 1);
    }
    *(void **)(self + 0x80) = r6;
    if (used != 0) {
        func_020059cc(buf);
    }
    p = self + 0x48;
    func_02056bc0(p, *(void **)(self + 0x80));
    func_02056bc0(p, r7);
    return self;
}
