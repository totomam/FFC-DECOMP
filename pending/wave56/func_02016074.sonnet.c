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
    uint32_t *a = arr;
    uint32_t i;
    void *d;

    for (i = 0; i < 3; ) {
        uint32_t j = i;
        i++;
        a[j] = j;
    }

    switch (sel) {
    case 0:
    case 2:
    case 3:
    case 5:
    case 6:
    case 9:
    case 10:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        goto done;
    case 1:
        d = &data_020ace50;
        goto call;
    case 4:
        d = &data_020ace64;
        goto call;
    case 7:
        d = &data_020ace78;
        goto call;
    case 8:
        d = &data_020ace90;
        goto call;
    case 11:
        d = &data_020acea4;
        goto call;
    case 12:
        d = &data_020aceb4;
        goto call;
    case 18:
        d = &data_020acecc;
        goto call;
    }
    goto done;

call:
    func_02005f1c(arr, d);

done:
    func_020095b8(obj, a);
    func_02016120(p, obj);
    func_020059cc(obj);
    func_020059cc(a);
}
