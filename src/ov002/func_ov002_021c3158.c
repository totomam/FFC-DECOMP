/* cflags: -noO4,p -O4 */
/* From arcnid/ffc-decomp src/battle/vec_popn_20_021C3158.c, externs renamed. */
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

/* func_021C3158 — size 0x24 (36B), -O4
   Vector pop-N destructor loop, element size 0x20:
   end = data + count*0x20; count -= n; guarded do-while calls func_ov002_021c2904(--end). */
typedef struct { u8* data; u32 count; } Vec;
extern void func_ov002_021c2904(void* e);

void func_ov002_021c3158(Vec* v, u32 n) {
    u8* end;
    end = v->data + v->count * 0x20;
    v->count -= n;
    if (n != 0) {
        do {
            end -= 0x20;
            func_ov002_021c2904(end);
        } while (--n != 0);
    }
}
