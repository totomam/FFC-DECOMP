#include "ffc/types.h"

typedef struct { uint32_t w[3]; } Str;
typedef struct { uint32_t isLong : 1; uint32_t rest : 31; } W32;
typedef struct { uint8_t isLong : 1; uint8_t len7 : 7; } B8;
typedef struct { uint8_t e[12]; } Elem;
typedef struct { Elem *data; uint32_t size; uint32_t cap; } VecE;

extern void func_020095b8(void *dst, void *src);
extern void func_02050e2c(void *dst, void *src);
extern void func_0200b65c(void *s, void *src);
extern void *func_020059cc(void *object);
extern uint32_t func_020323cc(void *s, uint32_t c, uint32_t start);
extern uint32_t func_02008f2c(void *object, void *s, uint32_t start, uint32_t len);
extern void func_02009574(void *object, void *s, uint32_t value);

#define SLEN(s) ((((W32 *)(s))->isLong == 0) ? ((B8 *)(s))->len7 : ((uint32_t *)(s))[1])

void func_02050ea4(VecE *v, void *s, uint32_t c) {
    volatile uint8_t bt[4];
    volatile uint32_t cs = c;
    Str t1, t2, e, t3, t4;
    int32_t idx;

    v->data = 0;
    v->size = 0;
    v->cap = 0;
    func_020095b8(&t1, s);
    func_02050e2c(&t2, &t1);
    func_0200b65c(s, &t2);
    func_020059cc(&t2);
    func_020059cc(&t1);

    if (SLEN(s) != 0) {
        idx = func_020323cc(s, cs, 0);
        if (idx != -1) {
            do {
                func_02008f2c(&e, s, 0, idx);
                if (v->size < v->cap) {
                    if (v->data + v->size) {
                        func_020095b8(v->data + v->size, &e);
                    }
                    v->size++;
                } else {
                    bt[2] = 0;
                    func_02009574(v, &e, bt[2]);
                }
                func_020059cc(&e);
                func_02008f2c(&t3, s, idx + 1, SLEN(s) - idx);
                func_02050e2c(&t4, &t3);
                func_0200b65c(s, &t4);
                func_020059cc(&t4);
                func_020059cc(&t3);
                idx = func_020323cc(s, cs, 0);
            } while (idx != -1);
        }
    }
    if (SLEN(s) != 0) {
        if (v->size < v->cap) {
            if (v->data + v->size) {
                func_020095b8(v->data + v->size, s);
            }
            v->size++;
        } else {
            bt[2] = 0;
            func_02009574(v, s, bt[2]);
        }
    }
}
