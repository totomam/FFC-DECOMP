#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0203b688(void);
extern void *func_020315ac(void *owner, Pair p);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020ae050;

void *func_02031574(void *a)
{
    void *obj = func_0203b688();
    void *n = func_020315ac(a, data_020ae050);
    void *m = func_02062a30(*(void **)((uint8_t *)a + 0x94));
    func_02056bc0(obj, m);
    func_02056bc0(obj, n);
    return obj;
}
