#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern void func_020095b8(void *obj);
extern int func_02051bc0(void *obj, S *out);
extern int func_0205210c(void *p, S s);
extern void *func_020059cc(void *object);

int func_020520d0(void *p) {
    S tmp;
    uint8_t obj[12];
    int ret;

    func_020095b8(obj);
    if (func_02051bc0(obj, &tmp) != 0 && func_0205210c(p, tmp) != 0) {
        ret = 1;
    } else {
        ret = 0;
    }
    func_020059cc(obj);
    return ret;
}
