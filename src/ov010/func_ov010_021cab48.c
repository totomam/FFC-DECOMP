#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void func_ov009_021ad954(void *obj);
extern void *func_ov009_021adb7c(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void *func_ov010_021ca340(void *obj, S s);
extern S data_ov010_021d1e94;

void func_ov010_021cab48(void *obj)
{
    void *node;
    func_ov009_021ad954(obj);
    node = func_ov009_021adb7c(obj);
    func_02056bc0((uint8_t *)obj + 0x14, node);
    node = func_ov010_021ca340(obj, data_ov010_021d1e94);
    func_02056bc0((uint8_t *)obj + 0x14, node);
}
