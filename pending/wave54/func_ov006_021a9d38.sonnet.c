#include "ffc/types.h"
typedef struct { uint8_t state; uint8_t pad; uint16_t h; uint8_t *p; } D;
extern D data_ov006_021bc778;
extern void func_ov006_021b0600(int);
extern int func_ov006_021b570c(int, void *, int, int);
extern void func_ov006_021a9be0(void);
extern void func_ov006_021a9e48(void);
extern void func_ov006_021a99cc(void);
extern void func_ov006_021af668(int);
extern void func_ov006_021a9d04(void);
void func_ov006_021a9d38(int a)
{
    D *d = &data_ov006_021bc778;
    int r5 = 1;
    int s = d->state;
    switch (s) {
    case 0:
        if (a == 1) {
            if (d->h == 0) { d->state = 4; break; }
            func_ov006_021b0600(0x13);
            *(int *)(d->p + 0x38) = func_ov006_021b570c(0, (void *)func_ov006_021a9be0, 0, 0x78);
            return;
        }
        if (d->p[0x51] > 1) d->state = s + 1; else r5 = 0;
        break;
    case 1:
    case 2:
        if (a == 1) { d->state = s - 1; break; }
        if (d->p[0x51] > s + 1) d->state = s + 1; else r5 = 0;
        break;
    case 3:
        if (a == 1) { d->state = s - 1; break; }
        func_ov006_021a9e48();
        return;
    case 4:
        if (a == 1) { r5 = 0; break; }
        d->h = 0;
        d->state = 0;
        func_ov006_021a99cc();
        func_ov006_021af668(0);
        break;
    }
    if (r5 == 0) {
        D *e = &data_ov006_021bc778;
        if (e->p[0x59] == 0) {
            func_ov006_021b0600(9);
            e->p[0x59] = 1;
        }
        return;
    }
    func_ov006_021b0600(8);
    func_ov006_021a9d04();
}
