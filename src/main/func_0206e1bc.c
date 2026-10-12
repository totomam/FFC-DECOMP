#include "ffc/types.h"

extern void func_02054738(void *p);
extern void func_02056858(void *p);
extern void func_0206f37c(void *p);
extern void func_02056844(void *p);
extern void func_0206f3b0(void *p);
extern void func_0206f414(void *p);
extern void func_02055abc(void *p);
extern void func_02054844(void *p);
extern char data_020b1f20[];
extern char data_020b1f34[];
extern char data_020b1f4c[];

typedef struct {
    void *vt0;
    uint8_t pad04[0x10];
    void *vt14;
    uint8_t pad18[0x08];
    void *vt20;
    uint8_t pad24[0x28];
    void *arr4c;
    uint32_t cnt50;
    uint8_t pad54[0x4];
    void *p58;
    void *arr5c;
    uint8_t pad60[0x208];
    void *p268;
    uint8_t pad26c[0x0c];
    uint32_t cnt278;
} func_0206e1bc_obj;

func_0206e1bc_obj *func_0206e1bc(func_0206e1bc_obj *a)
{
    uint32_t i;
    void *x;

    a->vt0 = data_020b1f20;
    a->vt14 = data_020b1f34;
    a->vt20 = data_020b1f4c;
    func_02054738(&a->vt14);
    func_02056858(a->p268);
    for (i = 0; i < a->cnt278; i++) {
        x = *(void **)((uint8_t *)a->arr5c + i * 12);
        if (x != 0) {
            func_0206f37c(x);
            func_02056844(x);
        }
    }
    for (i = 0; i < a->cnt50; i++) {
        x = *(void **)((uint8_t *)a->arr4c + i * 8);
        if (x != 0) {
            func_0206f37c(x);
            func_02056844(x);
        }
    }
    x = a->p58;
    if (x != 0) {
        func_0206f37c(x);
        func_02056844(x);
    }
    func_0206f3b0(&a->arr5c);
    func_0206f414(&a->arr4c);
    func_02055abc(&a->vt20);
    func_02054844(&a->vt14);
    func_02056844(a);
    return a;
}
