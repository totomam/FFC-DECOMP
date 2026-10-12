#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t v);
extern void func_0203be8c(void *p);
extern void func_0203bed8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_0203c33c(void);
extern void func_0203c264(void);
extern void func_0204f550(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_ov008_02199640(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern uint8_t data_ov008_021a783c[];
extern uint32_t data_0213df18;

void *func_ov008_0219a614(void **obj)
{
    void *node;
    void *p;

    func_02056c9c(obj, 0);
    *obj = data_ov008_021a783c;
    func_0203be8c(data_ov008_021a783c);
    func_0203bed8(5, 3, 4, 1, 0, 0);
    func_0203c33c();
    func_0203c264();
    func_0204f550(data_0213df18);
    p = func_0205681c(0x150);
    node = p;
    if (p != 0) {
        node = func_ov008_02199640(p);
    }
    func_02056bc0((uint8_t *)obj + 0x14, node);
    node = func_02056aec(obj);
    func_02056bc0((uint8_t *)obj + 0x14, node);
    return obj;
}
