#include "ffc/types.h"

extern void func_02035be0(void *object);
extern void func_02035c18(void *object);

typedef struct {
    uint32_t a;
    uint32_t b;
} Obj;

void *func_02035b64(Obj *obj) {
    uint32_t tmp;
    obj->a = 0;
    func_02035be0(&tmp);
    obj->b = tmp;
    func_02035c18(&tmp);
    return obj;
}
