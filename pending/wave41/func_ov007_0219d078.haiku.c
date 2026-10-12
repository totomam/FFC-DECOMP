#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_ov007_0219d108(uint8_t *a, uint32_t b, uint32_t c);
extern int func_0201ab74(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *p, int x);
extern void func_02005988(void *buf, void *v);
extern void *func_02032d24(void *obj, S s, void *buf, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c2f60[2];

void func_ov007_0219d078(uint8_t *a)
{
    void *r6;
    int flag;
    uint32_t zero = 0;
    S pair;
    uint32_t buf[3];

    func_ov007_0219d108(a, 0, 0);
    if (func_0201ab74(data_020b93b8)) {
        flag = zero;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            void *t = func_020159c8(data_020b8e44, 7);
            func_02005988(buf, t);
            pair.a = 0x80;
            pair.b = 0x60;
            flag = 1;
            r6 = func_02032d24(r6, pair, buf, 4, zero);
        }
        func_02056bc0(a + 0x14, r6);
        if (flag) {
            func_020059cc(buf);
        }
    }
    {
        uint32_t v0 = data_ov007_021c2f60[0];
        uint32_t v1 = data_ov007_021c2f60[1];
        *(uint32_t *)(a + 0x80) = v0;
        *(uint32_t *)(a + 0x84) = v1;
    }
}
