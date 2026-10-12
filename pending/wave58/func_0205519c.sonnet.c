/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void func_02054114(int a, int b);
extern "C" void func_020550c8(void *p);
extern "C" void func_0205514c(void *p);
extern "C" void func_020871d8(void *p);
extern "C" uint32_t func_020871d4(const void *object);
extern "C" void func_0208716c(void *p, int b);
extern "C" void func_02088a18(void);
extern "C" void func_02054144(int a, int b);

struct VO { virtual void v0(); virtual void v1(); virtual void v2(); };
#define FLD(T, o) (*(T *)((uint8_t *)p + (o)))
#define OBJ_FLAG(o) ((int8_t)(*(int32_t *)((uint8_t *)(o) + 0xc)))
#define EMB_CALL(o) ((VO *)((uint8_t *)p + (o)))->v2()
#define OBJ_CALL2(obj) ((VO *)(obj))->v2()
#define OBJ_CALL1(obj) ((VO *)(obj))->v1()

extern "C" void func_0205519c(void *p, void *a1)
{
    void *o;
    uint32_t r4;
    int r2;
    int v;

    FLD(void *, 0x180) = a1;
    FLD(int, 8) = FLD(int, 4);
    func_02054114(0, FLD(int, 0x14C));

    for (;;) {
        if (FLD(uint8_t, 0x10) == 0) {
            if ((int8_t)FLD(int, 0x54) == 0) {
                EMB_CALL(0x48);
            }
            o = FLD(void *, 0x180);
            if (OBJ_FLAG(o) == 0) {
                OBJ_CALL2(o);
            }
            if ((int8_t)FLD(int, 0x88) == 0) {
                EMB_CALL(0x7c);
            }
        } else {
            FLD(uint8_t, 0x10) = 0;
        }

        o = FLD(void *, 0x180);
        if (OBJ_FLAG(o) == 2) {
            if (o != 0) {
                OBJ_CALL1(o);
            }
            FLD(void *, 0x180) = 0;
        }

        {
            int f8 = FLD(int, 8);
            if (f8 <= 0) {
                v = FLD(int, 4) * 0x106;
            } else {
                int vc = *(volatile uint16_t *)0x04000006u;
                int r2;
                if (vc > 0xc0) {
                    r2 = FLD(int, 4) - f8;
                } else {
                    r2 = FLD(int, 4) - f8 + 1;
                }
                v = vc + (r2 * 0x106 - 0xc0);
            }
        }
        FLD(int, 0xc) = v;

        if (FLD(int, 0x170) == 1) {
            func_020550c8(p);
            func_0205514c(p);
        }
        FLD(uint8_t, 0x11) = 1;
        if (FLD(void *, 0x178) != 0) {
            if (FLD(void *, 0x17c) != 0) {
                func_020871d8(FLD(void *, 0x178));
            }
        }
        r4 = func_020871d4(FLD(void *, 0x168));
        if (FLD(uint8_t, 0x12) != 0) {
            func_0208716c(FLD(void *, 0x168), 3);
        }
        do {
            func_02088a18();
        } while (FLD(int, 8) > 0);
        FLD(uint8_t, 0x11) = 0;
        FLD(int, 8) = FLD(int, 4);
        FLD(int, 0x174) += 1;
        if ((int8_t)FLD(int, 0x20) == 0) {
            EMB_CALL(0x14);
        }
        if ((int8_t)FLD(int, 0xbc) == 0) {
            EMB_CALL(0xb0);
        }
        if (FLD(int, 0x170) != 1) {
            func_020550c8(p);
            func_0205514c(p);
        }
        if (FLD(uint8_t, 0x12) != 0) {
            func_0208716c(FLD(void *, 0x168), (int)r4);
        }
        o = FLD(void *, 0x180);
        if (o == 0 || OBJ_FLAG(o) != 0) {
            break;
        }
    }
    func_02054144(0, FLD(int, 0x14C));
}
