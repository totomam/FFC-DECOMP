#include "ffc/types.h"

extern int func_02054200(void);
extern int func_02087460(void);
extern int func_0208d2e8(void);
extern void *func_02056aec(void *o);
typedef struct { uint32_t a, b; } P;
extern void *func_02060634(void *a, int b, int c, int d, int e, int f);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, int b);
extern void func_02005988(void *buf, void *v);
extern void *func_02032d24(void *o, P p, void *c, int d, int e);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern uint32_t data_ov007_021c4338[2];
extern uint32_t data_ov007_021c4340[2];
extern uint32_t data_ov007_021c4348[2];
extern uint8_t *data_0213df20;
extern void *data_020b8e44;

void func_ov007_021a6124(uint8_t *obj)
{
    P pair;
    uint32_t buf[4];
    void *s8;
    void *sc;
    void *r6;
    void *tmp;
            int flag;

    if (func_02054200() == 1) {
        *(P *)(obj + 0x80) = *(P *)data_ov007_021c4338;
        return;
    }
    if (obj[0xa8] == 0) {
        *(P *)(obj + 0x80) = *(P *)data_ov007_021c4340;
        return;
    }
    if (func_02087460() != 0 && func_0208d2e8() == 0) {
    {
        uint32_t *q = *(uint32_t **)(obj + 0x90);
        *q = 0;
    }
    flag = 0;
    s8 = func_02056aec(obj);
    sc = func_02060634(*(void **)(data_0213df20 + 0x20), 8, 0, 10, 0, 0);

    r6 = func_0205681c(0xb0);
    if (r6 != 0) {
        pair.a = 0x80;
        pair.b = 0x60;
        tmp = func_020159c8(data_020b8e44, 0x33);
        func_02005988(buf, tmp);
        r6 = func_02032d24(r6, pair, buf, 4, 0);
        flag = 1;
    }

    tmp = func_02060634(*(void **)(data_0213df20 + 0x20), 0, 8, 10, 0, 0);
    obj += 0x14;
    func_02056bc0(obj, tmp);
    func_02056bc0(obj, r6);
    func_02056bc0(obj, sc);
    func_02056bc0(obj, s8);
    if (flag) {
        func_020059cc(buf);
    }
    } else {
        *(P *)(obj + 0x80) = *(P *)data_ov007_021c4348;
    }
}
