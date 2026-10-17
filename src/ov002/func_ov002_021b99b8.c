/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/sfx_cond_setfield_021B99B8.c, externs renamed. */
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


/* Matched: 0x021B99B8  size 0x3E (62)  -O4
   sfx 0x43F/0x441 ternary + strb via [s+0xD8] + func_02056bc0 */

extern void func_02033b8c(void* a);
extern s32 func_020338d4(void* b);
extern void func_02021338(u32 id);
extern u32 func_02056aec(void* s);
extern void func_02056bc0(void* p, u32 v);

void func_ov002_021b99b8(void* s, void* b)
{
    u32 v;
    func_02033b8c(s);
    func_02021338(func_020338d4(b) != 0 ? 0x43F : 0x441);
    **(u8**)((u8*)s + 0xD8) = func_020338d4(b);
    v = func_02056aec(s);
    s = (u8*)s + 0x14;
    func_02056bc0(s, v);
}
