#include "ffc/types.h"

extern void *func_0204de50(void *p);
extern void *func_0204de78(void *p);
extern void *func_0204de7c(void *p);
extern void *func_0204de70(void *p);
extern void *func_0204de80(void *p);
extern int32_t func_0204aba4(void *a, void *b, void *c, int8_t *buf, int32_t len, int32_t z);
extern int32_t func_0204ae94(int8_t *p, int32_t n);
extern int32_t func_0204accc(int8_t *buf, const void *s, int32_t n);
extern uint8_t data_020b0294[];

int32_t func_0204c3fc(void *p)
{
    int8_t buf[0x200];
    uint8_t *a, *obj, *x20, *x1c, *x18, *v14, *v10;
    int32_t ret, flag, n, found, i;
    int8_t *b;

    a = (uint8_t *)func_0204de50(p);
    obj = (uint8_t *)func_0204de78(a);
    x20 = (uint8_t *)func_0204de7c(a);
    x1c = (uint8_t *)func_0204de70(a);
    x18 = (uint8_t *)func_0204de80(a);
    v14 = *(uint8_t **)(*(uint8_t **)obj + 0xc);
    v10 = *(uint8_t **)(v14 + 0x2c);
    n = 0;
    flag = 0;

L003a:
    b = buf;
    ret = func_0204aba4(x18, v14, *(void **)(x1c + 0xc), b + n, 0x200 - n, 0);
    n += ret;
    *(int32_t *)(v10 + 0x18) = func_0204ae94(&b[8] + 1, 3);
    if (func_0204accc(buf, data_020b0294, 5) == 0 && buf[8] == 0x20 &&
        *(int32_t *)(v10 + 0x18) == 0xc8) {
        flag = 1;
    }

    found = 0;
    for (i = 0; i < n; i++) {
        int8_t *q = buf + i;
        if (i > 1 && q[i - 1] == 0xd && q[0] == 0xd) {
            found = 1;
        } else if (i > 1 && q[i - 1] == 0xa && q[0] == 0xa) {
            found = 1;
        } else if (i > 3 && q[i - 3] == 0xd && q[i - 2] == 0xa && q[i - 1] == 0xd && q[0] == 0xa) {
            found = 1;
        }
    }

    if (found) {
        return flag;
    }
    if (ret < 0) {
        return 0;
    }
    if (n < 0x200) {
        goto L003a;
    }

    ret = func_0204aba4(x18, v14, *(void **)(x1c + 0xc), x20 + 0x100, 1, 0);
    if (ret < 0) {
        return 0;
    }
    if (ret == 0) {
        goto L003a;
    }
    return 0;
}
