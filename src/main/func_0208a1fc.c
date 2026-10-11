#include "ffc/types.h"

extern int func_02088978(void);
extern void func_0208898c(int);

typedef struct Node {
    struct Node *next;
} Node;

typedef struct Globals {
    uint32_t pad[2];
    Node *head;
} Globals;

extern Globals data_021419a4;

uint32_t func_0208a1fc(void)
{
    uint32_t count;
    Node *n;

    int x = func_02088978();
    count = 0;
    n = data_021419a4.head;
    while (n != 0) {
        n = n->next;
        count++;
    }
    func_0208898c(x);
    return count;
}
