#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_0202795c(void *out, void *a, void *b);
extern void func_02058048(void *a, void *b, int32_t c);
extern void func_0202a860(void *out, void *a, void *b);
extern void func_02087678(void *p);
extern uint8_t data_021394c4[];
extern uint8_t data_021394b4[];
extern void *data_02139450;

struct Frame {
    void *x;
    void *y;
    void *obj;
    void *lock;
    uint8_t flag;
};

void func_02027b70(void *p)
{
    struct Frame f;
    int32_t *q;

    f.lock = data_021394c4;
    f.flag = 1;
    if (f.flag != 0) {
        func_0208763c();
    }
    func_0202795c(&f.obj, data_021394b4, p);
    q = (int32_t *)((uint8_t *)f.obj + 0xc);
    q[3] = q[3] - 1;
    if (q[3] <= 0) {
        func_02058048(data_02139450, *(void **)((uint8_t *)f.obj + 0x1c), 0);
        func_0202a860(&f.y, data_021394b4, f.obj);
    }
    if (f.flag != 0) {
        func_02087678(f.lock);
    }
}
