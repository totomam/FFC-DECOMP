#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, uint32_t v);
extern void func_ov007_0219ed08(void *obj, void *self, void *tmp, Pair v);
extern void *func_020059cc(void *object);
extern void func_020695ec(void *self, void *obj);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern void func_020697ac(void *self, void *obj);
extern uint32_t data_ov007_021c3040[];
extern uint32_t data_ov007_021c3200[];
extern uint32_t data_ov007_021c31cc[];
extern uint32_t data_ov007_021c3198[];

void func_ov007_0219ebe4(uint8_t *self, int flag)
{
    uint8_t *obj;

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        uint32_t tmp[3];
        uint32_t *d = data_ov007_021c3040;
        func_02005988(tmp, d[1]);
        func_ov007_0219ed08(obj, self, tmp, *(Pair *)&d[8]);
        func_020059cc(tmp);
        *(void **)obj = data_ov007_021c3200;
    }
    *(void **)(self + 0xc0) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        uint32_t tmp[3];
        uint32_t *d = data_ov007_021c3040;
        func_02005988(tmp, d[3]);
        func_ov007_0219ed08(obj, self, tmp, *(Pair *)&d[6]);
        func_020059cc(tmp);
        *(void **)obj = data_ov007_021c31cc;
    }
    *(void **)(self + 0xc4) = obj;
    func_020695ec(self, obj);

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        uint32_t tmp[3];
        uint32_t *d = data_ov007_021c3040;
        func_02005988(tmp, d[2]);
        func_ov007_0219ed08(obj, self, tmp, *(Pair *)&d[4]);
        func_020059cc(tmp);
        *(void **)obj = data_ov007_021c3198;
        func_02069320(obj, 2);
        func_02069404(obj, 4);
        {
            void *inner = *(void **)(obj + 0x98);
            void (*fn)(void *, uint32_t, uint32_t) =
                (void (*)(void *, uint32_t, uint32_t))(((void **)*(void **)inner)[14]);
            fn(inner, 2, 0);
        }
    }
    *(void **)(self + 0xc8) = obj;
    func_020695ec(self, obj);

    if (flag != 0) {
        func_020697ac(self, *(void **)(self + 0xc0));
    } else {
        func_020697ac(self, *(void **)(self + 0xc4));
    }
}
