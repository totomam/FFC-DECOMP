#include "ffc/types.h"

extern uint32_t func_02005f1c(void *object, void *third);
extern void func_020095b8(void *a, void *b);
extern void func_02016120(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint8_t data_020ace50;
extern uint8_t data_020ace64;
extern uint8_t data_020ace78;
extern uint8_t data_020ace90;
extern uint8_t data_020acea4;
extern uint8_t data_020aceb4;
extern uint8_t data_020acecc;

void func_02016074(void *p, uint32_t unused, uint32_t sel)
{
    uint32_t arr[3];
    uint32_t obj[3];
    uint32_t i;
    void *d;

    for (i = 0; i < 3; i++) {
        arr[i] = i;
    }

    d = 0;
    switch (sel) {
    case 1:
        d = &data_020ace50;
        break;
    case 4:
        d = &data_020ace64;
        break;
    case 7:
        d = &data_020ace78;
        break;
    case 8:
        d = &data_020ace90;
        break;
    case 11:
        d = &data_020acea4;
        break;
    case 12:
        d = &data_020aceb4;
        break;
    case 18:
        d = &data_020acecc;
        break;
    }
    if (d != 0) {
        func_02005f1c(arr, d);
    }

    func_020095b8(obj, arr);
    func_02016120(p, obj);
    func_020059cc(obj);
    func_020059cc(arr);
}
