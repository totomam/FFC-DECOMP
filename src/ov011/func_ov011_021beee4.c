#include "ffc/types.h"

extern void func_02069288(void *object);
extern void func_ov011_021bd618(void *object, int a, int b);
extern int func_0209a76c(int a, int b);
extern void func_020692a4(void *object);
extern uint32_t func_0201b924(const void *object);
extern void *data_020b93b8;

typedef struct {
    uint8_t pad[0xc4];
    void *arr[23];
    int16_t s120;
    int16_t s122;
    int16_t s124;
    uint8_t b126;
} Obj;

void func_ov011_021beee4(Obj *p)
{
    uint8_t i;
    for (i = 0; i < 3; i++) {
        func_02069288(p->arr[i]);
        if (p->s124 == i + 1) {
            func_ov011_021bd618(p->arr[i], 0, 1);
        } else {
            func_ov011_021bd618(p->arr[i], 0, 0);
        }
    }
    if (p->s122 == 1) {
        int n = p->s120 - 1;
        if (func_0209a76c(n, 3) == 0) {
            func_020692a4(p->arr[n]);
            func_ov011_021bd618(p->arr[p->s120 - 1], 1, 1);
        }
        if (p->b126 != 0) {
            func_020692a4(((void **)((uint8_t *)p + 0xc0))[func_0201b924(data_020b93b8)]);
        }
    }
}
