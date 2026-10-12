#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02005988(void *dst, uint32_t v);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern void func_ov007_021997c0(void *obj, void *self, void *tmp, Pair v);
extern void func_020059cc(void *object);
extern void func_020695ec(void *self, void *obj);
extern void func_020692a4(void *object);
extern void func_02069328(void *object, int v);
extern void func_02069330(void *object, int v);
extern uint32_t data_ov007_021c2560[];
extern char data_ov007_021c27e8[];
extern char data_ov007_021c27b4[];
extern char data_ov007_021c2780[];
extern char data_ov007_021c274c[];

uint8_t *func_ov007_02199670(uint8_t *self, uint8_t *flag)
{
    void **obj;
    uint32_t t0[3], t1[3], t2[3], t3[3];

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(t0, data_ov007_021c2560[6]);
        func_ov007_021997c0(obj, self, t0, *(Pair *)&data_ov007_021c2560[12]);
        func_020059cc(t0);
        obj[0] = data_ov007_021c27e8;
    }
    func_020695ec(self, obj);
    *(void **)(self + 0xbc) = obj;

    if (flag[0] != 0) {
        obj = func_0205681c(0x9c);
        if (obj != 0) {
            func_02005988(t1, data_ov007_021c2560[5]);
            func_ov007_021997c0(obj, self, t1, *(Pair *)&data_ov007_021c2560[18]);
            func_020059cc(t1);
            obj[0] = data_ov007_021c27b4;
        }
        func_020695ec(self, obj);
        *(void **)(self + 0xc0) = obj;
    } else {
        obj = func_0205681c(0x9c);
        if (obj != 0) {
            func_02005988(t2, data_ov007_021c2560[3]);
            func_ov007_021997c0(obj, self, t2, *(Pair *)&data_ov007_021c2560[18]);
            func_020059cc(t2);
            obj[0] = data_ov007_021c2780;
        }
        func_020695ec(self, obj);
        *(void **)(self + 0xc0) = obj;
        func_020692a4(obj);
        func_02069328(obj, 1);
        func_02069330(obj, 1);
    }

    obj = func_0205681c(0x9c);
    if (obj != 0) {
        func_02005988(t3, data_ov007_021c2560[2]);
        func_ov007_021997c0(obj, self, t3, *(Pair *)&data_ov007_021c2560[10]);
        func_020059cc(t3);
        obj[0] = data_ov007_021c274c;
    }
    func_020695ec(self, obj);
    *(void **)(self + 0xc8) = obj;
    return flag;
}
