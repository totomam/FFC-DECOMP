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

void func_ov012_021d2284(uint8_t *p)
{
    Obj objs[5];
#define o0 objs[0]
#define o0c objs[1]
#define o18 objs[2]
#define o24 objs[3]
#define o30 objs[4]
    uint32_t i;
    uint32_t id;
    uint8_t *q;
    void *obj;

    for (i = 0; i < 3; i++) {
        id = i + 1;
        q = p + (i << 2);
        func_02036750(&o30);
        func_0201f1f0(data_020b93b8, id, &o30);
        if (func_02036890(&o30) != 0 && func_02019ff0(data_020b8e44, (uint8_t)id) == 0) {
            func_0200a630(&o24, func_020367b8(&o30));
            func_ov005_02197140(*(void **)(q + 0xd8), &o24);
            func_0200a678(&o24);
            func_0200a630(&o18, func_020367b8(&o30));
            func_02068e18(*(void **)(q + 0xe4), &o18);
            func_0200a678(&o18);
            obj = *(void **)(q + 0xf0);
            ((void (*)(void *))((void **)(*(void ***)obj))[11])(obj);
            func_02069288(*(void **)(q + 0xcc));
            if (((uint32_t *)p)[0x45] == 0) {
                ((uint32_t *)p)[0x45] = id;
            }
        } else {
            func_0200a630(&o0c, data_ov012_021d4680);
            func_ov005_02197140(*(void **)(q + 0xd8), &o0c);
            func_0200a678(&o0c);
            func_02005988(&o0, data_ov012_021d4684);
            func_02068ddc(*(void **)(q + 0xe4), &o0);
            func_020059cc(&o0);
            obj = *(void **)(q + 0xf0);
            ((void (*)(void *))((void **)(*(void ***)obj))[10])(obj);
            func_020692a4(*(void **)(q + 0xcc));
        }
        if (id == func_0201b924(data_020b93b8)) {
            func_ov005_021971b4(*(void **)(q + 0xd8));
            obj = *(void **)(q + 0xe4);
            ((void (*)(void *))((void **)(*(void ***)obj))[11])(obj);
        } else {
            obj = *(void **)(q + 0xe4);
            ((void (*)(void *))((void **)(*(void ***)obj))[10])(obj);
            func_ov005_021971c4(*(void **)(q + 0xd8));
        }
    }
    func_020367a8(&o30);
}
