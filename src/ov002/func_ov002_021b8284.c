/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/getstruct_1b8284.c, externs renamed. */
/* Matched: 021B8284 (0x2A). Hidden-return-pointer form of struct-returning virtual (vt slot 7). -O4. */
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

typedef void (*Fn2)(void*, void*);
void func_ov002_021b8284(u32* out, void* obj) {
    if (*((u8*)obj + 0xAC) != 0) {
        out[0] = 0;
        out[1] = 0;
        out[2] = 0x100;
        out[3] = 0xC0;
    } else {
        void* o;
        o = *(void**)((u8*)obj + 0x94);
        (*(Fn2**)o)[7](out, o);
    }
}
