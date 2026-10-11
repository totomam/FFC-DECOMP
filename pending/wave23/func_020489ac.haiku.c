#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_020489d8(void *obj, uint32_t zero, uint32_t count, const uint8_t *text, uint32_t len);

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t count;
} Obj32;

typedef struct {
    uint8_t flag : 1;
    uint8_t n : 7;
} Obj8;

void func_020489ac(void *obj, const uint8_t *text)
{
    uint32_t len = func_02092864(text);
    uint32_t count;
    if (((Obj32 *)obj)->flag == 0) goto small;
    count = ((Obj32 *)obj)->count;
    goto done;
small:
    count = ((Obj8 *)obj)->n;
done:
    func_020489d8(obj, 0, count, text, len);
}
