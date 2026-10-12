#include "ffc/types.h"

typedef struct {
    uint32_t w[3];
} Obj;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern char data_ov012_021d4680[];
extern char data_ov012_021d4684[];

extern void func_02036750(void *obj);
extern void func_0201f1f0(void *a, uint32_t b, void *c);
extern int func_02036890(void *obj);
extern int func_02019ff0(void *a, uint8_t b);
extern void *func_020367b8(void *object);
extern void *func_0200a630(void *dst, const void *src);
extern void *func_0200a678(void *object);
extern void func_ov005_02197140(void *a, void *b);
extern void func_02068e18(void *a, void *b);
extern void func_02069288(void *object);
extern void func_02005988(void *a, const void *b);
extern void func_02068ddc(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_020692a4(void *object);
extern uint32_t func_0201b924(const void *object);
extern void func_ov005_021971b4(void *a);
extern void func_ov005_021971c4(void *a);
extern void func_020367a8(void *object);

typedef struct { uint8_t pad[0xcc]; void *a[3]; void *b[3]; void *c[3]; void *d[3]; uint32_t sel; } P;

void func_ov012_021d2284(P *pp)
{
    struct { Obj o[4]; uint32_t b[22]; } L;
#define o0 L.o[0]
#define o0c L.o[1]
#define o18 L.o[2]
#define o24 L.o[3]
#define o30 L.b
    int i;
    int id;
    uint8_t *q;
    void *obj;

    func_02036750(L.b);
    for (i = 0; i < 3; i++) {
                id = i + 1;
        func_0201f1f0(data_020b93b8, id, L.b);
        if (func_02036890(L.b) != 0 && func_02019ff0(data_020b8e44, (uint8_t)(i + 1)) == 0) {
            func_0200a630(&o24, func_020367b8(L.b));
            q = (uint8_t *)pp + (i << 2);
            func_ov005_02197140(*(void **)(q + 0xd8), &o24);
            func_0200a678(&o24);
            func_0200a630(&o18, func_020367b8(L.b));
            func_02068e18(*(void **)(q + 0xe4), &o18);
            func_0200a678(&o18);
            obj = *(void **)(q + 0xf0);
            ((void (*)(void *))((void **)(*(void ***)obj))[11])(obj);
            func_02069288(*(void **)(q + 0xcc));
            if (((uint32_t *)pp)[0x45] == 0) {
                ((uint32_t *)pp)[0x45] = id;
            }
        } else {
            func_0200a630(&o0c, data_ov012_021d4680);
            q = (uint8_t *)pp + (i << 2);
            func_ov005_02197140(*(void **)(q + 0xd8), &o0c);
            func_0200a678(&o0c);
            func_02005988(&o0, data_ov012_021d4684);
            func_02068ddc(*(void **)(q + 0xe4), &o0);
            func_020059cc(&o0);
            obj = *(void **)(q + 0xf0);
            ((void (*)(void *))((void **)(*(void ***)obj))[10])(obj);
            func_020692a4(*(void **)(q + 0xcc));
        }
        if (i + 1 == func_0201b924(data_020b93b8)) {
            func_ov005_021971b4(*(void **)(q + 0xd8));
            obj = *(void **)(q + 0xe4);
            ((void (*)(void *))((void **)(*(void ***)obj))[11])(obj);
        } else {
            obj = *(void **)(q + 0xe4);
            ((void (*)(void *))((void **)(*(void ***)obj))[10])(obj);
            func_ov005_021971c4(*(void **)(q + 0xd8));
        }
    }
    func_020367a8(L.b);
}
