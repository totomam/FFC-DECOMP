#include "ffc/types.h"

extern void func_02053234(void *object);
extern uint32_t func_020356d8(uint32_t index, void *object);
extern void func_02005988(void *a, void *b);
extern void func_020357c4(void *a, void *b);
extern void func_020532a4(void *a, void *b);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void func_02052be0(void);
extern void func_02052d10(void *a, uint32_t b);
extern void *func_02053290(void *object);
extern void *func_020059cc(void *object);

typedef struct {
    uint32_t a;
    void *p;
    uint32_t q;
    uint8_t flag;
} Obj;

Obj *func_020356fc(Obj *obj, uint32_t idx) {
    uint32_t arr[3];
    uint32_t h[3];
    Obj tmp;
    void *p;
    uint32_t i;

    func_02053234(obj);
    obj->p = 0;
    obj->flag = 0;
    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    func_020356d8(idx, arr);
    if ((arr[0] << 31) >> 31) {
        p = (void *)arr[2];
    } else {
        p = (uint8_t *)arr + 1;
    }
    func_02005988(h, p);
    func_020357c4(&tmp, h);
    func_020532a4(obj, &tmp);

    if (&tmp.p != &obj->p) {
        if (obj->p != 0) {
            if (obj->flag) {
                func_02052d3c(obj->p, obj->q);
            }
            func_02052c04(obj->p);
        }
        obj->p = tmp.p;
        obj->q = tmp.q;
        obj->flag = tmp.flag;
        if (obj->p != 0) {
            func_02052be0();
            if (obj->flag) {
                func_02052d10(obj->p, obj->q);
            }
        }
    }
    if (tmp.p != 0) {
        if (tmp.flag) {
            func_02052d3c(tmp.p, tmp.q);
        }
        func_02052c04(tmp.p);
    }
    func_02053290(&tmp);
    func_020059cc(h);
    func_020059cc(arr);
    return obj;
}
