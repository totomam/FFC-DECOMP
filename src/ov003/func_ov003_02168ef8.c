#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *object, void *arg);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_02032d7c(void *a, uint32_t b, Pair c, void *e, uint32_t f, uint32_t g);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_0213df18;

void func_ov003_02168ef8(uint8_t *a, void *b) {
    Pair s;
    uint8_t obj[12];
    uint8_t *p = a;
    int flag = 0;
    void *r = func_0205681c(0xb0);
    if (r) {
        func_02005988(obj, b);
        s.x = 0x80;
        s.y = 0x60;
        flag = 1;
        r = func_02032d7c(r, func_0204f7ec(data_0213df18), s, obj, 4, 0);
    }
    func_02056bc0(p + 0x14, r);
    if (flag) {
        func_020059cc(obj);
    }
}
