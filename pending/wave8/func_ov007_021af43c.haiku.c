#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void *func_02032d24(void *obj, Pair p, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern void *data_020b8e44;

void *func_ov007_021af43c(void)
{
    uint32_t zero = 0;
    int inited = 0;
    void *result;
    uint32_t buf[3];

    result = func_0205681c(0xb0);
    if (result != 0) {
        Pair p;
        void *tmp = func_020159c8(data_020b8e44, 0xe6);
        func_02005988(buf, tmp);
        p.a = 0x80;
        p.b = 0x60;
        inited = 1;
        result = func_02032d24(result, p, buf, 4, zero);
    }
    if (inited) {
        func_020059cc(buf);
    }
    return result;
}
