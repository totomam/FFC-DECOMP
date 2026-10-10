#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void func_ov009_021ad954(void *obj);
extern void *func_ov009_021adb7c(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov011_021c02a8(void *obj, S s);
extern S data_ov011_021cb154;

void func_ov011_021c10e8(void *obj)
{
    void *node;
    func_ov009_021ad954(obj);
    node = func_ov009_021adb7c(obj);
    func_02056bc0((uint8_t *)obj + 0x14, node);
    node = func_ov011_021c02a8(obj, data_ov011_021cb154);
    func_02056bc0((uint8_t *)obj + 0x14, node);
}
