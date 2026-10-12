#include "ffc/types.h"

extern void func_02054218(void *);
extern void func_02054380(void);
extern void func_020211d4(uint32_t, uint32_t);
extern void *func_0205681c(uint32_t);
extern void *func_020159c8(void *, uint32_t);
extern void func_02005988(void *, void *);
extern void *func_02032d24(void *, uint32_t, uint32_t, void *, uint32_t, uint32_t);
extern void func_020059cc(void *);
extern uint32_t func_02056aec(void *);
extern uint32_t func_02060634(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern uint32_t func_0205f904(void *);
extern void func_02056bc0(void *, void *);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c45f8[];
extern void *data_0213df20;

void func_ov007_021a8d0c(void *p)
{
    uint8_t *self = (uint8_t *)p;
    void *obj;
    uint32_t flag;
    uint32_t r7;
    uint32_t t8;

    func_02054218(p);
    func_02054380();
    r7 = 0;
    func_020211d4(0x45, 0);

    if (*(void **)(self + 0xec) != 0) {
        uint8_t buf1[12];
        void *s;
        flag = r7;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            s = func_020159c8(data_020b8e44, 0x3c);
            func_02005988(buf1, s);
            obj = func_02032d24(obj, data_ov007_021c45f8[0], data_ov007_021c45f8[1], buf1, 4, r7);
            flag = 1;
        }
        if (flag != 0) {
            func_020059cc(buf1);
        }
        flag = func_02056aec(p);
        r7 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
        t8 = func_0205f904(*(void **)(self + 0xdc));
        func_02056bc0(self + 0x14, obj);
        func_02056bc0(self + 0x14, (void *)t8);
        func_02056bc0(self + 0x14, (void *)r7);
        func_02056bc0(self + 0x14, (void *)flag);
    } else {
        uint8_t buf2[12];
        void *s;
        flag = r7;
        obj = func_0205681c(0xb0);
        if (obj != 0) {
            s = func_020159c8(data_020b8e44, 0x3d);
            func_02005988(buf2, s);
            obj = func_02032d24(obj, data_ov007_021c45f8[0], data_ov007_021c45f8[1], buf2, 4, r7);
            flag = 1;
        }
        if (flag != 0) {
            func_020059cc(buf2);
        }
        flag = func_02056aec(p);
        r7 = func_02060634(*(void **)((uint8_t *)data_0213df20 + 0x20), 8, 0, 0xa, 0, 0);
        t8 = func_0205f904(*(void **)(self + 0xdc));
        func_02056bc0(self + 0x14, obj);
        func_02056bc0(self + 0x14, (void *)t8);
        func_02056bc0(self + 0x14, (void *)r7);
        func_02056bc0(self + 0x14, (void *)flag);
    }
}
