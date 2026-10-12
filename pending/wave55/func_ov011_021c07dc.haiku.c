#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Vec2;

extern int func_ov011_021c1234(void *self);
extern void func_020212a4(int code);
extern void func_ov011_021bff9c(void *self);
extern int func_ov011_021bd204(void *obj);
extern void *func_0205681c(int size);
extern void *func_020159c8(void *obj, int id);
extern void func_02005988(void *buf, void *src);
extern void *func_02032d24(void *obj, Vec2 pos, void *buf, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern int func_ov005_02197a1c(void *a, void *b);
extern void *func_ov011_021c0c6c(void *self);
extern void func_0201f1a8(void *a, uint8_t b, void *c);
extern void *func_0203bf90(int x);
extern void *func_0203bf7c(int x);
extern void *func_0203b6fc(void);
extern void *func_ov009_0219d374(void *obj);
extern void *func_02056aec(void *self);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov011_021c07dc(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t buf1[3];
    uint32_t buf2[3];
    Vec2 v1;
    Vec2 v2;
    void *o;
    void *r6;
    int r4f;
    uint32_t zero;

    if (func_ov011_021c1234(self)) {
        func_020212a4(15);
    }
    if (s[0x27a]) {
        s[0x27a] = 0;
        func_ov011_021bff9c(self);
        {
            uint32_t *x = *(uint32_t **)(s + 0x174);
            x[3] = (x[3] & ~0xffu) | 2;
        }
        return;
    }
    o = *(void **)(s + 0x17c);
    ((void (*)(void *))(*(void ***)o)[11])(o);

    if (func_ov011_021bd204(*(void **)(s + 0x32c)) != 1) {
        if (func_ov011_021bd204(*(void **)(s + 0x32c)) == 2) {
            func_0201f1a8(data_020b93b8, s[0x2c9], s + 0x220);
        } else if (s[0x324]) {
            zero = 0;
            r4f = 0;
            r6 = func_0205681c(0xb0);
            if (r6) {
                func_02005988(buf1, func_020159c8(data_020b8e44, 0xba));
                v1.x = 0x80;
                v1.y = 0x60;
                r6 = func_02032d24(r6, v1, buf1, 4, zero);
                r4f = 1;
            }
            func_02056bc0(s + 0x14, r6);
            if (r4f) {
                func_020059cc(buf1);
            }
        } else {
            if (func_ov005_02197a1c(s + 0x220, s + 0x2cc)) {
                zero = 0;
                r4f = 0;
                r6 = func_0205681c(0xb0);
                if (r6) {
                    func_02005988(buf2, func_020159c8(data_020b8e44, 0xb9));
                    v2.x = 0x80;
                    v2.y = 0x60;
                    r6 = func_02032d24(r6, v2, buf2, 4, zero);
                    r4f = 1;
                }
                func_02056bc0(s + 0x14, r6);
                if (r4f) {
                    func_020059cc(buf2);
                }
                func_02056bc0(s + 0x14, func_ov011_021c0c6c(self));
            }
            func_0201f1a8(data_020b93b8, s[0x2c9], s + 0x2cc);
        }
    }

    if (func_ov011_021bd204(*(void **)(s + 0x32c)) == 1) {
        func_02056bc0(s + 0x14, func_0203bf90(0x1e));
    } else {
        void *a = func_0203bf90(0x1e);
        void *b = func_0203bf7c(0x1e);
        void *c = func_0203b6fc();
        func_02056bc0(c, b);
        func_02056bc0(c, a);
        func_02056bc0(s + 0x14, c);
    }

    if (func_ov011_021bd204(*(void **)(s + 0x32c)) != 1) {
        func_02056bc0(s + 0x14, func_ov009_0219d374(*(void **)(s + 0x2b8)));
    }
    func_02056bc0(s + 0x14, func_02056aec(self));
}
