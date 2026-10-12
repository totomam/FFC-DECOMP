#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a2588(void *a, void *b);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *obj, uint32_t v);
typedef struct { uint32_t a, b; } W2;
extern void *func_02033094(void *a, void *b, uint32_t c, W2 w, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_020b8e44;
extern uint32_t data_ov007_021c3bdc[];
extern uint32_t data_ov007_021c4218[];
extern uint32_t data_ov007_021c4220[];

void func_ov007_021a4c98(uint8_t *p) {
    void *t;
    uint32_t obj[3];
    void *r7;
    void *r6;
    int flag = 0;

    r7 = func_0205681c(0xc0);
    if (r7 != 0) {
        r7 = func_ov007_021a2588(r7, p + 0xc0 + 0x54);
    }
    *(void **)(p + 0x118) = r7;

    r6 = func_0205681c(0xa4);
    if (r6 != 0) {
        uint32_t v = func_020159c8(data_020b8e44, *(uint32_t *)(p + 0xd8));
        func_02005988(obj, v);
        flag = 1;
        r6 = func_02033094(r6, obj, 1, *(W2 *)(data_ov007_021c3bdc + 0x54 / 4), 4, 0);
    }
    t = *(void **)(p + 0xdc);
    func_02056bc0(t, r6);
    func_02056bc0(t, r7);
    if (flag) {
        func_020059cc(obj);
    }
    *(W2 *)(p + 0xc0) = *(W2 *)data_ov007_021c4218;
    *(W2 *)(p + 0xb8) = *(W2 *)data_ov007_021c4220;
}
