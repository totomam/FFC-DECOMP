/* cflags:  */
/* From arcnid/ffc-decomp src/battle/event_checks_sendmsgs_021a9390.c, externs renamed. */
/* Matched: 021A9390 (0xCC, -O4,p). Battle event: conditional skill checks (func_ov002_021a1af0/func_ov002_021aa820
   gate flag), func_ov002_021aa954 on mismatch, zero arr[6] fill loop (shared-zero z reused as call args),
   func_ov002_0219fff8 + 3x func_02056bc0(s+0x14, ...) via func_02055a2c/func_ov002_021c9298, final func_ov002_021a464c with s param-mutation (+0x14).
   python3 tools/match_func.py <this> 021A9390 CC --O4p */
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


extern u32 func_ov002_021a1af0(void* s, void* a);        /* 0x21a1af0 */
extern void* func_ov002_021a16d4(void* s);                 /* 0x21a16d4 */
extern void* func_ov002_02195fa4(void* b);                 /* 0x2195fa4 */
extern u32 func_ov002_02198700(void* c, u32 id);         /* 0x2198700 */
extern u32 func_ov002_021aa820(u32 x);                   /* 0x21aa820 */
extern void func_ov002_021aa954(u32 x, u32 f);           /* 0x21aa954 */
extern u32 func_ov002_0219fff8(void* s, u32* arr, u32 z);  /* 0x219fff8 */
extern void func_02056bc0(void* q, u32 m);           /* 0x2056bc0 */
extern u32 func_ov002_021c9298(u32 z);                   /* 0x21c9298 */
extern u32 func_02055a2c(void* g, u32 t);             /* 0x2055a2c */
extern u32 func_ov002_021c91dc(u32 z);                  /* 0x21c91dc */
extern u32 func_ov002_021a464c(void* s, u32 z);         /* 0x21a464c */

void func_ov002_021a9390(u8* s, u8* a) {
    u32 arr[6];
    u32 flag;
    s32 i;
    u32 z;
    u32 r;
    flag = 1;
    if (func_ov002_021a1af0(s, a) != 0) {
        if (func_ov002_021aa820(func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(s)), *(u32*)(a + 8))) != 0) {
            flag = 0;
        }
    }
    if (*(u32*)(a + 0x20) != 0) {
        flag = 0;
    }
    r = func_ov002_02198700(func_ov002_02195fa4(func_ov002_021a16d4(s)), *(u32*)(a + 4));
    if (r != 0) {
        if (*(u32*)(a + 0x2c) != 1) {
            func_ov002_021aa954(r, 1);
        }
    }
    i = 0;
    z = 0;
    do {
        arr[i] = z;
        i++;
    } while (i < 6);
    arr[0] = *(u32*)(a + 4);
    func_02056bc0(s + 0x14, func_ov002_0219fff8(s, arr, z));
    func_02056bc0(s + 0x14, func_02055a2c(*(void**)(s + 0xf0), func_ov002_021c9298(z)));
    if (flag != 0) {
        func_02056bc0(s + 0x14, func_02055a2c(*(void**)(s + 0xf0), func_ov002_021c91dc(z)));
    }
    r = func_ov002_021a464c(s, 0);
    s = s + 0x14;
    func_02056bc0(s, r);
}
