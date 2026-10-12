/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" void *data_02139d24;
extern "C" void *func_0205681c(uint32_t size);
extern "C" void *func_02039120(void *p);
extern "C" uint32_t func_0203915c(void *p);
extern "C" void func_020870a0(void *object);
extern "C" void *func_02056830(uint32_t v);
extern "C" void func_02090380(void *destination, const void *source, uint32_t length);
extern "C" void func_0203916c(void *p);
extern "C" void *func_ov014_02146f1c(void *p);
extern "C" void *func_02039168(void *p);
extern "C" void *func_02039160(void *p);
extern "C" uint32_t func_02039164(void *p);
extern "C" void func_ov014_021478ec(void *a, void *b, void *c, uint32_t d, uint32_t e, int32_t f);
extern "C" void func_02039178(void *p);
extern "C" void func_02056858(void *p);
extern "C" void func_02039154(void *p);

#define FIELD_U8(off) (*(uint8_t *)(self + (off)))
#define FIELD_U32(off) (*(uint32_t *)(self + (off)))
#define FIELD_PTR(off) (*(void **)(self + (off)))

#define ENSURE_G() do { \
    if (data_02139d24 == 0) { \
        void *_p = func_0205681c(0x48); \
        if (_p != 0) { \
            _p = func_02039120(_p); \
        } \
        data_02139d24 = _p; \
    } \
} while (0)

struct Obj { virtual void a(); virtual void b(); };
extern "C" void func_020494ec(void *a0) {
    uint8_t *self = (uint8_t *)a0;

    if (FIELD_U8(0xe4) == 0) {
        ENSURE_G();
        if (func_0203915c(data_02139d24)) {
            FIELD_U8(0xe5) = 1;
        } else {
            func_020870a0(self + 0x18);
        }
    }
    if (FIELD_U8(0xe5) == 0) {
        return;
    }
    FIELD_U8(0xe5) = 0;
    FIELD_U8(0xe4) = 1;
    FIELD_PTR(0xd8) = func_02056830(FIELD_U32(0xe0));
    func_02090380(FIELD_PTR(0xd8), FIELD_PTR(0xdc), FIELD_U32(0xe0));

    ENSURE_G();
    func_0203916c(data_02139d24);
    {
        void *r6 = func_0205681c(0x94);
        if (r6 != 0) {
            r6 = func_ov014_02146f1c(r6);
        }
        {
            void *g1, *g2, *a, *b;
            ENSURE_G();
            g1 = data_02139d24;
            ENSURE_G();
            g2 = data_02139d24;
            ENSURE_G();
            a = func_02039168(g1);
            b = func_02039160(g2);
            func_ov014_021478ec(r6, a, b, func_02039164(data_02139d24), 0, -1);
        }
        if (r6 != 0) {
            if (r6 != 0) {
                ((Obj *)r6)->b();
            }
        }
    }

    ENSURE_G();
    func_02039178(data_02139d24);
    FIELD_U8(0xe4) = 0;
    func_02090380(FIELD_PTR(0xdc), FIELD_PTR(0xd8), FIELD_U32(0xe0));
    if (FIELD_PTR(0xd8) != 0) {
        func_02056858(FIELD_PTR(0xd8));
        FIELD_PTR(0xd8) = 0;
    }

    ENSURE_G();
    func_02039154(data_02139d24);
}
