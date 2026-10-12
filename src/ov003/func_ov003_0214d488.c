#include "ffc/types.h"

extern void *func_0203c23c(void);
extern void *func_0203b688(void);
extern void *func_02060f6c(void *obj, void *q, uint32_t c, uint32_t d);
extern void *func_02060ef8(void *obj);
extern void *func_ov003_0215249c(uint32_t v);
extern void *func_ov003_02152cf4(uint32_t v);
extern void *func_02061000(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056bc0(void *object, void *node);

void *func_ov003_0214d488(uint8_t *p, void *q, uint32_t c)
{
    void *obj = func_0203c23c();
    void *list = func_0203b688();
    void *n1 = func_02060f6c(obj, q, c, 0);
    void *n2 = func_02060ef8(obj);
    void *n3 = func_ov003_0215249c(*(uint32_t *)(p + 0x184));
    void *n4 = func_ov003_02152cf4(*(uint32_t *)(p + 0x180));
    void *n5 = func_02061000(obj, 1, 0, 0);
    void *n6 = func_02060ef8(obj);
    func_02056bc0(list, n6);
    func_02056bc0(list, n5);
    func_02056bc0(list, n4);
    func_02056bc0(list, n3);
    func_02056bc0(list, n2);
    func_02056bc0(list, n1);
    return list;
}
