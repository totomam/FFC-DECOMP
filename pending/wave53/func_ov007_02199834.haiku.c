#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S8;

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, uint32_t src);
extern void *func_020059cc(void *object);
extern void func_ov007_021997c0(void *obj, void *p, void *buf, S8 s);
extern void func_020695ec(void *a, void *b);
extern void func_020692a4(void *object);
extern void func_02069328(void *object, int v);
extern void func_02069330(void *object, int v);
extern uint8_t data_ov007_021c2560[];
extern uint8_t data_ov007_021c27e8[];
extern uint8_t data_ov007_021c2780[];
extern uint8_t data_ov007_021c274c[];

int func_ov007_02199834(void *a)
{
    void *p;

    p = func_0205681c(0x9c);
    if (p != 0) {
        uint32_t *d = (uint32_t *)data_ov007_021c2560;
        uint8_t buf[12];
        func_02005988(buf, d[6]);
        func_ov007_021997c0(p, a, buf, *(S8 *)&d[12]);
        func_020059cc(buf);
        *(void **)p = data_ov007_021c27e8;
    }
    func_020695ec(a, p);
    *(void **)((uint8_t *)a + 0xbc) = p;

    p = func_0205681c(0x9c);
    if (p != 0) {
        uint32_t *d = (uint32_t *)data_ov007_021c2560;
        uint8_t buf[12];
        func_02005988(buf, d[3]);
        func_ov007_021997c0(p, a, buf, *(S8 *)&d[18]);
        func_020059cc(buf);
        *(void **)p = data_ov007_021c2780;
    }
    func_020695ec(a, p);
    *(void **)((uint8_t *)a + 0xc0) = p;
    func_020692a4(p);
    func_02069328(p, 1);
    func_02069330(p, 1);

    p = func_0205681c(0x9c);
    if (p != 0) {
        uint32_t *d = (uint32_t *)data_ov007_021c2560;
        uint8_t buf[12];
        func_02005988(buf, d[2]);
        func_ov007_021997c0(p, a, buf, *(S8 *)&d[10]);
        func_020059cc(buf);
        *(void **)p = data_ov007_021c274c;
    }
    func_020695ec(a, p);
    *(void **)((uint8_t *)a + 0xc8) = p;
    return 0;
}
