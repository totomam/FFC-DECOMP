#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_02035f58(void *p);
extern void *func_02035e10(void *object);
extern void func_02053234(void *object);
extern void func_02005988(void *out, void *src);
extern void func_02018c48(void *out, void *in);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02052be0(void);
extern void func_02052d10(uint32_t a, uint32_t b);
extern void func_02053290(void *object);
extern void *func_020059cc(void *object);
extern uint32_t *data_0213df18;
extern char data_020af1c8[];
extern char data_020af258[];
extern uint32_t data_020af270[];

void *func_0203f650(uint8_t *self, uint32_t p1, uint32_t p2) {
    uint32_t loc[4];
    uint32_t in[3];

    func_02056c9c(self, data_0213df18[8]);
    *(void **)self = data_020af1c8;
    *(uint32_t *)(self + 0x88) = p1;
    func_02035f58(self + 0xa4);
    func_02035f58(self + 0x104);
    func_02035e10(self + 0x164);
    func_02053234(self + 0x18c);
    *(uint32_t *)(self + 0x190) = 0;
    *(uint8_t *)(self + 0x198) = 0;
    *(uint32_t *)(self + 0x1a8) = 0;
    *(uint32_t *)(self + 0x1ac) = 0;
    *(uint32_t *)(self + 0x1b0) = 0;
    *(uint32_t *)(self + 0x1bc) = 0;
    *(uint32_t *)(self + 0x1c0) = p2;

    func_02005988(in, data_020af258);
    func_02018c48(loc, in);
    func_020532a4(self + 0x18c, loc);

    if ((void *)&loc[1] != (void *)(self + 0x190)) {
        if (*(uint32_t *)(self + 0x190) != 0) {
            if (*(uint8_t *)(self + 0x198)) {
                func_02052d3c(*(uint32_t *)(self + 0x190), *(uint32_t *)(self + 0x194));
            }
            func_02052c04(*(uint32_t *)(self + 0x190));
        }
    }

    *(uint32_t *)(self + 0x190) = loc[1];
    *(uint32_t *)(self + 0x194) = loc[2];
    *(uint8_t *)(self + 0x198) = *(uint8_t *)&loc[3];
    if (loc[1] != 0) {
        func_02052be0();
        if (*(uint8_t *)(self + 0x198)) {
            func_02052d10(*(uint32_t *)(self + 0x190), *(uint32_t *)(self + 0x194));
        }
    }

    if (loc[1] != 0) {
        if (*(uint8_t *)&loc[3]) {
            func_02052d3c(loc[1], loc[2]);
        }
        func_02052c04(loc[1]);
    }

    func_02053290(loc);
    func_020059cc(in);
    *(uint32_t *)(self + 0x80) = data_020af270[0];
    *(uint32_t *)(self + 0x84) = data_020af270[1];
    return self;
}
