#include "ffc/types.h"

typedef struct {
    void *field0;
    int field4;
    uint8_t state;
    uint8_t pad[0x1b];
    int counter;
} FfcObj;

extern FfcObj *func_ov000_02146820(void *a);
extern void func_02088978(void);
extern void func_0208898c(void);
extern void func_ov000_02146940(void *obj, int arg);
extern void func_020870a0(void *object);
extern void func_ov000_021469a0(void *obj);
extern void func_ov000_021469ac(void *a, void *b, void *c);

void func_ov000_021470fc(void *a, void *b, void *c)
{
    FfcObj *obj = func_ov000_02146820(a);
    if (obj == 0) {
        return;
    }
    func_02088978();
    switch (obj->state) {
    case 7:
        obj->counter++;
        obj->state = 9;
        func_0208898c();
        func_ov000_02146940(obj, 2);
        return;
    case 8:
        obj->counter++;
        func_0208898c();
        func_ov000_02146940(obj, 2);
        obj->state = 0;
        if (obj->field4 == 2) {
            obj->field4 = 0;
            func_020870a0(obj->field0);
        }
        return;
    case 4:
        obj->counter++;
        obj->state = 6;
        func_0208898c();
        func_ov000_021469a0(obj);
        return;
    default:
        func_0208898c();
        func_ov000_021469ac(a, b, c);
        return;
    }
}
