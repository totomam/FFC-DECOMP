/* cflags:  */
/* From arcnid/ffc-decomp src/battle/sublist_build_desc_array_021A4558.c, externs renamed. */
#ifndef BATTLE_H
#define BATTLE_H

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;

typedef struct BattleState BattleState;
typedef struct Vivosaur Vivosaur;
typedef struct AttackInfo AttackInfo;

u32 rand_range(u32* rng_state, u32 max);

u32* BattleState_GetRng(BattleState* state);
s32 BattleState_GetTeamSize(BattleState* state);
Vivosaur* BattleState_GetVivosaur(BattleState* state, s32 index);

s32 Vivosaur_GetAbilityInfo(Vivosaur* vivo);
s32 Vivosaur_CheckSkill(s32 info, s32 skill_id);
s32 Vivosaur_GetType(Vivosaur* vivo);

#endif

/* Matched: 0x021A4558  size 0xF4 (244)  -O4,p
   Builds a new sub-list: str marker func_0203bd04(0x10101,0,0,1) appended to a new
   sublist (func_0203b6fc), then 3-element Pair array each default-constructed
   (func_ov002_021c9124) and then filled via a per-slot temp (func_ov002_021c9124/copy-fields/func_ov002_021c9130) +
   func_ov002_021c916c. A second ctor object (Tmp2, 12B) built via func_ov002_021c8e38(tmp2,p1,p2,0).
   func_ov002_021c8e70(outstruct[0x5C], &tmp2, p3, 7, <15 scalar desc words: zeros except
   [6]=1,[8]=1,[9]=&arr,[12]=3>) — passing the descriptor as 15 individual u32
   args (not a struct-by-value local) avoids a double-materialized home slot.
   KEY regalloc fix: the array-fill loop body must be `arr[i].x = tmp.x;
   arr[i].y = tmp.y;` (memberwise) — `arr[i] = tmp;` (whole-struct assign)
   mismatches by 8 bytes (r1/r2 index-shift register swap).
   Tail: null-checked str+=0x14, func_ov002_021c939c(str,&outstruct), func_02055a2c(*(a+0xf0),r),
   func_02056bc0(obj,r), then func_ov002_021c8f10/func_ov002_021c8e40/func_ov002_021c9130 teardown in reverse construction
   order. Returns obj (the new sublist). */

typedef struct { u32 x, y; } Pair;
typedef struct { u32 w[3]; } Tmp2;

extern void* func_0203b6fc(void);                    /* 0x203b6fc */
extern void* func_0203bd04(u32,u32,u32,u32);        /* 0x203bd04 */
extern void func_02056bc0(void*, void*);              /* 0x2056bc0 */
extern void func_ov002_021c9124(void*);                         /* 0x21c9124 */
extern void func_ov002_021c9130(void*);                          /* 0x21c9130 */
extern void func_ov002_021c916c(void*);                    /* 0x21c916c */
extern void* func_ov002_021c8e38(void*, void*, void*, u32);        /* 0x21c8e38 */
extern void func_ov002_021c8e70(void*, void*, void*, u32,
                     u32,u32,u32,u32,u32,u32,u32,u32,u32,u32,u32,u32,u32,u32,u32); /* 0x21c8e70 */
extern void* func_ov002_021c939c(void*, void*);                      /* 0x21c939c */
extern u32 func_02055a2c(u32, void*);                           /* 0x2055a2c */
extern void func_ov002_021c8f10(void*);                                  /* 0x21c8f10 */
extern void func_ov002_021c8e40(void*);                                    /* 0x21c8e40 */

void* func_ov002_021a4558(void* a, void* p1, void* p2, void* p3)
{
    void* obj;
    void* str;
    Pair tmp;
    Pair arr[3];
    Tmp2 tmp2;
    u8 outstruct[0x5C];
    s32 i;
    void* r;

    obj = func_0203b6fc();
    str = func_0203bd04(0x10101, 0, 0, 1);
    func_02056bc0(obj, str);

    func_ov002_021c9124(&arr[0]);
    func_ov002_021c9124(&arr[1]);
    func_ov002_021c9124(&arr[2]);

    i = 0;
    do {
        func_ov002_021c9124(&tmp);
        arr[i].x = tmp.x;
        arr[i].y = tmp.y;
        func_ov002_021c9130(&tmp);
        func_ov002_021c916c(&arr[i]);
        i++;
    } while (i < 3);

    func_ov002_021c8e38(&tmp2, p1, p2, 0);

    func_ov002_021c8e70(outstruct, &tmp2, p3, 7,
            0, 0, 0, 0, 0, 0, 1, 0, 1, (u32)arr, 0, 0, 3, 0, 0);

    if (str != 0) str = (u8*)str + 0x14;

    r = func_ov002_021c939c(str, outstruct);
    a = (u8*)a + 0xf0;
    r = (void*)func_02055a2c(*(u32*)a, r);
    func_02056bc0(obj, r);

    func_ov002_021c8f10(outstruct);
    func_ov002_021c8e40(&tmp2);
    func_ov002_021c9130(&arr[2]);
    func_ov002_021c9130(&arr[1]);
    func_ov002_021c9130(&arr[0]);

    return obj;
}
