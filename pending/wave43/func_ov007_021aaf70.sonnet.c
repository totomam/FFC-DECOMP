#include "ffc/types.h"

typedef struct {uint32_t a,b;} S;
extern uint32_t *data_020b8e44;
extern S data_ov007_021c4e84;
extern S data_ov007_021c4e8c;
extern uint64_t func_02071e64(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t *obj, uint32_t id);
extern void func_02005988(void *out, uint32_t v);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02033438(void *object, uint32_t v);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021aaf70(uint8_t *p) {
    uint32_t buf[3];
    void *obj;
    int flag;
    uint32_t a, b;

    if (func_02071e64(*(uint32_t *)((uint8_t *)*data_020b8e44 + 0x80)) == 0) {
        *(uint32_t *)(p + 0xd8) = 0;
        flag = 0;
        obj = func_0205681c(0xb8);
        if (obj != 0) {
            func_02005988(buf, func_020159c8(data_020b8e44, 0x5e));
            flag = 1;
            obj = func_02033338(obj, buf, p + 0xd8, 0);
        }
        if (flag) {
            func_020059cc(buf);
        }
        func_02033438(obj, 1);
        func_02056bc0(p + 0x14, obj);
    *(S *)(p + 0xb0) = data_ov007_021c4e84;
        return;
    }
    *(S *)(p + 0xb0) = data_ov007_021c4e8c;
}
