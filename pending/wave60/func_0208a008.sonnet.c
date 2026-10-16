/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct N { struct N *next; } N;
typedef struct { uint32_t a, b; N *head; N *tail; } L;
extern L data_021419a4;
extern void func_02088978(void);
extern void func_0208898c(void);
void func_0208a008(N *n) {
    L *l;
    N *t;
    func_02088978();
    l = &data_021419a4;
    t = l->tail;
    if (t == 0) l->head = n;
    else t->next = n;
    l->tail = n;
    n->next = 0;
    func_0208898c();
}
