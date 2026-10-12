#include "ffc/types.h"

extern uint32_t func_0204de50(void);
extern uint8_t *func_0204de70(void);
extern void *func_0204de78(uint32_t x);
extern void func_0204ca94(void *p);
extern int func_0204cbe0(void *p);
extern int func_0204cc34(void *p);
extern int func_0204cd10(void *p);
extern int func_0204ce30(void *p);
extern int func_0204cee4(void *p);
extern int func_0204d118(void *p);
extern int func_0204d2a0(void *p);
extern void func_0204d4b8(void *p);
extern void func_0204cae4(void *p);

typedef struct {
    uint8_t buf[0x334];
    int32_t state;
    int32_t pad[2];
} Frame;

void func_0204d8e8(void)
{
    Frame f;
    uint32_t a = func_0204de50();
    uint8_t *b = func_0204de70();
    uint32_t *c = (uint32_t *)func_0204de78(a);
    uint32_t *p;
    uint32_t *q;
    int r;

    func_0204ca94(&f);
    while (*(int32_t *)(b + 0x18) == 0) {
        if (f.state == 0) {
            if (!func_0204cbe0(&f)) {
                goto end_iter;
            }
            p = (uint32_t *)*c;
            q = (uint32_t *)p[3];
            if (*q != 0) {
                goto cleanup;
            }
            if (!func_0204cc34(&f)) {
                goto cleanup;
            }
        }
        if (f.state == 1) {
            f.state = 0;
        }
        if (!func_0204cd10(&f)) {
            goto cleanup;
        }
        r = func_0204ce30(&f);
        if (r == 1) {
            goto cleanup;
        }
        if (r == 2) {
            f.state = 1;
            goto end_iter;
        }
        switch (func_0204cee4(&f)) {
        case 1:
        case 3:
            goto cleanup;
        case 2:
            f.state = 1;
            goto end_iter;
        default:
            break;
        }
        p = (uint32_t *)*c;
        q = (uint32_t *)p[3];
        if (*q != 0) {
            goto cleanup;
        }
        if (!func_0204d118(&f)) {
            goto cleanup;
        }
        if (!func_0204d2a0(&f)) {
            goto cleanup;
        }
        func_0204d4b8(&f);
cleanup:
        func_0204cae4(&f);
end_iter:
        ;
    }
}
