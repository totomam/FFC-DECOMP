#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern int func_ov013_021c1160(void *p);
extern void func_ov013_021c0aac(void *p);
extern void func_ov013_021c0acc(void *p);
extern void func_ov013_021c0aec(void *p);

void func_ov013_021c132c(uint8_t *self)
{
    uint8_t *s = *(uint8_t **)(self + 0xe4);
    uint8_t flag = s[0x12];
    uint8_t *p = s + 0x1c;
    int r4 = 1;
    void *v;

    if (flag) {
        func_0208763c(p);
    }
    v = *(void **)(s + 0x14);
    if (v == 0) {
        r4 = 1;
    } else {
        r4 = 0;
    }
    if (flag) {
        func_02087678(p);
    }
    if (r4 == 0) {
        if (func_ov013_021c1160(*(void **)(self + 0xec))) {
            func_ov013_021c0aac(*(void **)(self + 0xf0));
        } else {
            func_ov013_021c0acc(*(void **)(self + 0xf0));
        }
        func_ov013_021c0aec(*(void **)(self + 0xf0));
    }
}
