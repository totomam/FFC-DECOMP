#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Tmp;

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, const void *src);
extern void *func_ov003_021637a4(void *obj, void *self, Pair ab, void *s, uint32_t c);
extern void *func_020059cc(void *object);

void *func_ov003_02163758(void *self, Pair ab, const void *src, uint32_t c)
{
    Tmp t;
    int flag = 0;
    void *ret = func_0205681c(0xa0);
    if (ret != 0) {
        func_020095b8(&t, src);
        flag = 1;
        ret = func_ov003_021637a4(ret, self, ab, &t, c);
    }
    if (flag) {
        func_020059cc(&t);
    }
    return ret;
}
