/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/reset_by_type_021ABE58.c, externs renamed. */
/* MATCHED: 021ABE58 (size 0x98 / 152 bytes), ov2, mwccarm -O4
 * Type-gated reset: if type in {1,2,5} call func_ov002_021aac9c(self,0/1,0);
 * otherwise iterate two containers (func_ov002_021aa850, then func_ov002_021a1ac4 of the first)
 * calling func_ov002_021aac9c on each element. */
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


extern int func_ov002_021aa780(void* p);
extern void func_ov002_021aac9c(void* p, int a, int b);
extern void* func_ov002_021aa850(void* p);
extern void* func_ov002_021a1ac4(void* p);
extern int func_ov002_021a18bc(void* p);
extern void* func_ov002_021a18c4(void* p, int i);

void func_ov002_021abe58(void* self)
{
    int type; int ok; void* c; int i; int j;
    type = func_ov002_021aa780(self);
    if (type == 1 || type == 2 || type == 5) ok = 1;
    else ok = 0;
    if (ok != 0) {
        func_ov002_021aac9c(self, 0, 0);
        func_ov002_021aac9c(self, 1, 0);
    } else {
        c = func_ov002_021aa850(self);
        i = 0;
        if (func_ov002_021a18bc(c) > 0) { do { func_ov002_021aac9c(func_ov002_021a18c4(c, i), 0, 0); i++; } while (i < func_ov002_021a18bc(c)); }
        c = func_ov002_021a1ac4(c);
        j = 0;
        if (func_ov002_021a18bc(c) > 0) { do { func_ov002_021aac9c(func_ov002_021a18c4(c, j), 1, 0); j++; } while (j < func_ov002_021a18bc(c)); }
    }
}
