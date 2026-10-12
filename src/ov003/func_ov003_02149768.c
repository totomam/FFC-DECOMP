#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_0203b688(void);
extern void *func_ov003_0214d514(uint8_t *a, int x);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov003_0214d454(uint8_t *a);
extern void *func_02022e58(void *p);
extern void *func_0205681c(uint32_t x);
extern void *func_ov003_021763f8(void *v, uint8_t *obj, uint32_t sel, int flag, int c, int d);

void func_ov003_02149768(uint8_t *a, uint32_t sel, int flag, int c, int d)
{
    void *r5;
    void *n;
    void *v;

    func_02056c4c(*(void **)(a + 0x1a8));
    switch (sel) {
    case 0:
    case 2:
    case 4:
    case 6:
        r5 = func_0203b688();
        if (flag != 2) {
            n = func_ov003_0214d514(a, 1);
            func_02056bc0(r5, n);
            n = func_ov003_0214d454(a);
            func_02056bc0(r5, n);
        }
        n = func_02022e58(*(void **)(a + 0x178));
        func_02056bc0(r5, n);
        v = func_0205681c(0x94);
        n = v;
        if (v) {
            n = func_ov003_021763f8(v, a, sel, flag, c, d);
        }
        func_02056bc0(r5, n);
        if (flag != 2) {
            n = func_ov003_0214d514(a, 0);
            func_02056bc0(r5, n);
        }
        func_02056bc0(*(void **)(a + 0x1a8), r5);
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 9:
        v = func_0205681c(0x94);
        n = v;
        if (v) {
            n = func_ov003_021763f8(v, a, sel, flag, c, d);
        }
        func_02056bc0(*(void **)(a + 0x1a8), n);
        break;
    default:
        break;
    }
}
