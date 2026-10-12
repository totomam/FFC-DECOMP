#include "ffc/types.h"

typedef struct { uint8_t pad[0x17]; uint8_t a; uint8_t b[10]; uint8_t c; } In;
typedef struct { uint32_t x[3]; In *p; } D;
extern D data_ov000_0216e26c;
extern int func_ov000_02152ce0(void);
extern void *func_ov000_02150268(int);
extern void func_02087874(void *, int);
extern int func_ov000_021545c8(void *, void *);
extern void func_02084b2c(void *, int, int);

void func_ov000_02152ba4(void)
{
    uint8_t v;
    void *p;

    v = data_ov000_0216e26c.p->c;
    if (v == 0) {
        v = (uint8_t)func_ov000_02152ce0();
    }
    data_ov000_0216e26c.p->a = v;

    p = func_ov000_02150268(0);
    if (p != 0) {
        func_02087874(p, 0x20);
        if (func_ov000_021545c8(p, data_ov000_0216e26c.p->b) == 0) {
            func_02084b2c(data_ov000_0216e26c.p->b, 0, 10);
        }
        return;
    }
    func_02084b2c(data_ov000_0216e26c.p->b, 0, 10);
}
