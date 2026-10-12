#include "ffc/types.h"

extern void func_02056bf4(void *a, void *b);
extern void func_0214de78(void *a);
extern void *func_0201b79c(void *a);
extern void func_020375bc(uint32_t a);
extern void func_02042840(void *s);
extern void func_02053234(void *o);
extern void func_020532a4(void *dst, void *src);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, void *b);
extern void func_02053290(void *o);
extern void func_02042834(void *s);
extern void func_020427f4(void *s);
extern void *data_020b93b8;

typedef struct {
    uint32_t w0;
    void *f4;
    void *f8;
    uint8_t fc;
} Tmp;

void func_02042b18(uint8_t *s, int flag) {
    uint32_t zero;
    void *obj;
    void *r;
    uint8_t *sub;
    Tmp tmp;

    func_02056bf4(*(void **)(s + 0x154), *(void **)(s + 0x8c));
    func_02056bf4(s + 0x48, *(void **)(s + 0x154));
    func_0214de78(*(void **)(s + 0x8c));
    r = func_0201b79c(data_020b93b8);
    obj = *(void **)(s + 0x8c);
    ((void (*)(void *, void *))(*(void ***)obj)[4])(obj, r);
    obj = *(void **)(s + 0x8c);
    if (obj != 0) {
        ((void (*)(void *))(*(void ***)obj)[1])(obj);
        *(void **)(s + 0x8c) = 0;
    }

    zero = 0;
    func_020375bc(zero);
    func_02042840(s);
    func_02053234(&tmp);
    tmp.f4 = (void *)zero;
    tmp.fc = (uint8_t)zero;
    sub = s + 0xa0;
    func_020532a4(sub, &tmp);

    if ((void *)&tmp.f4 != (void *)(sub + 4)) {
        if (*(void **)(s + 0xa4) != 0) {
            if (*(uint8_t *)(s + 0xac) != 0) {
                func_02052d3c(*(void **)(s + 0xa4), *(void **)(s + 0xa8));
            }
            func_02052c04(*(void **)(s + 0xa4));
        }
        *(void **)(s + 0xa4) = tmp.f4;
        *(void **)(s + 0xa8) = tmp.f8;
        *(uint8_t *)(s + 0xac) = tmp.fc;
        if (tmp.f4 != 0) {
            func_02052be0();
            if (*(uint8_t *)(s + 0xac) != 0) {
                func_02052d10(*(void **)(s + 0xa4), *(void **)(s + 0xa8));
            }
        }
    }

    if (tmp.f4 != 0) {
        if (tmp.fc != 0) {
            func_02052d3c(tmp.f4, tmp.f8);
        }
        func_02052c04(tmp.f4);
    }
    func_02053290(&tmp);

    if (flag != 0) {
        func_02042834(s);
        s[0x128] = 0;
    } else {
        if (s[0x128] != 0) {
            s[0x128] = 0;
            func_02042834(s);
            func_020427f4(s);
        }
    }
}
