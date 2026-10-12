#include "ffc/types.h"

extern void func_ov003_0214f5e0(void *p);
extern void func_0201cf34(void *a, void *b);
extern void func_ov003_0214649c(void *p);
extern void *func_ov003_02153470(void);
extern int func_020192f4(void *a, uint32_t b);
extern void func_020095b8(void *a, void *b);
extern void func_ov003_021633dc(void *a, int b, int c, void *d, int e, int f);
extern void *func_020059cc(void *object);
extern void *data_020b93b8;
extern void *data_020b8e44;

void func_ov003_02149084(void *a) {
    char *p = (char *)a;
    uint32_t arr[3];
    uint32_t buf1[3];
    uint32_t out[38];
    void *obj;
    void *r;
    uint32_t i;

    obj = *(void **)(p + 0x208);
    ((void (*)(void *))(*(void ***)obj)[11])(obj);
    func_ov003_0214f5e0(*(void **)(p + 0x210));
    func_0201cf34(data_020b93b8, out);

    if (((out[7] << 25) >> 30) != 0) {
        func_ov003_0214649c(a);
        r = func_ov003_02153470();
        if (func_020192f4(data_020b8e44, *(uint32_t *)r) != 0) {
            obj = *(void **)(p + 0x20C);
            ((void (*)(void *))(*(void ***)obj)[11])(obj);
        }
    }

    for (i = 0; i < 3; i++) {
        arr[i] = 0;
    }
    func_020095b8(buf1, arr);
    func_ov003_021633dc(*(void **)(*(char **)(p + 0x17C) + 0xC0), 0, 0, buf1, 0, 1);
    func_020059cc(buf1);
    func_020059cc(arr);
}
