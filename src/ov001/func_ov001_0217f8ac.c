#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x14];
    void *obj;
} DataBlock;

typedef struct {
    uint32_t type;
    uint32_t a4;
    uint32_t a8;
    uint32_t a12;
    uint32_t a16;
    uint32_t a20;
    void (*fn)(void);
} Elem;

extern DataBlock data_ov001_02194c38;
extern int func_ov000_02168768(void *obj);
extern Elem *func_ov000_0216876c(void *obj, int idx);
extern void func_ov000_02168848(void *obj, int idx);

void func_ov001_0217f8ac(int idx, uint32_t b, uint32_t c, uint32_t d, uint32_t e5)
{
    Elem *el;
    void (*fn)(void);

    if (idx < 0 || idx >= func_ov000_02168768(data_ov001_02194c38.obj)) {
        return;
    }
    el = func_ov000_0216876c(data_ov001_02194c38.obj, idx);
    fn = el->fn;
    if (fn != 0) {
        switch (el->type) {
        case 0:
            ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))fn)(el->a4, el->a8, b, d, el->a20);
            break;
        case 1:
            ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))fn)(el->a4, el->a8, el->a12, el->a16, b, c, d, e5, el->a20);
            break;
        case 2:
            ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))fn)(el->a4, el->a8, el->a12, el->a16, b, c, el->a20);
            break;
        case 3:
            ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))fn)(el->a4, el->a8, b, el->a20);
            break;
        }
    }
    func_ov000_02168848(data_ov001_02194c38.obj, idx);
}
