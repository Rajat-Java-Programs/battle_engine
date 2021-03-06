#ifndef BATTLE_PICK_MESSAGES_H_
#define BATTLE_PICK_MESSAGES_H_

#include <pokeagb/pokeagb.h>

enum battle_string_ids {
    STRING_ATTACK_USED = 0,
    STRING_INFATUATED,
    STRING_BIDE_CHARGE,
    STRING_LOST_FOCUS,
    STRING_CANT_USE,
    STRING_DISABLED,
    STRING_FAILED,
    STRING_CURSE_RESIDUAL,
    STRING_MAGNITUDE_AMOUNT,
    STRING_NO_TARGET,
    STRING_FAILED_ALONE,
    STRING_IMMUNE_ABILITY,
    STRING_RAZORWIND = 13,
    STRING_SOLARBEAM,
    STRING_FREEZE_SHOCK,
    STRING_ICE_BURN,
    STRING_GOEMANCY,
    STRING_SKULL_BASH,
    STRING_RAINING,
    STRING_STURDY_IMMUNE,
    STRING_DAMP_BLOCKED,
    STRING_STATUS_CURED,
    STRING_EFFECT_ENDED,
    STRING_WEATHER_GONE,
    STRING_GAINED_TYPE,
    STRING_CONFUSION_ENDED,
    STRING_DRAGGED_OUT_FAILED,
    STRING_STAT_MOD_HARSH_DROP,
    STRING_STAT_MOD_DROP,
    STRING_STAT_MOD_HARSH_RISE,
    STRING_STAT_MOD_RISE,
    STRING_AILMENT_APPLIED,
    STRING_AILMENT_IMMUNE,
    STRING_AILMENT_CURED,
    STRING_DELTA_STREAM,
    STRING_DESOLATE_LAND,
    STRING_PRIMORDIAL_SEA,
    STRING_PROTEAN,
    STRING_ATTACK_MISSED,
    STRING_ATTACK_AVOIDED,
    STRING_FLEE,
    STRING_FLEE_FAILED = 42,
    STRING_MOVE_CRIT,
    STRING_MOVE_IMMUNE,
    STRING_MOVE_NVE = 46,
    STRING_MOVE_SE,
    STRING_RECOIL,
    STRING_DRAIN,
    STRING_FAINTED,
    STRING_EXP_GAIN,
    STRING_LEVEL_UP,
    STRING_HEAL,
    STRING_FLINCHED,
    STRING_MULTI_HIT,
    STRING_OHKO,
    STRING_CHARGE_SKY_ATTACK,
    STRING_CHARGE_DIG,
    STRING_CHARGE_DIVE,
    STRING_CHARGE_FLY,
    STRING_CHARGE_PHANTOM_FORCE,
    STRING_CHARGE_SHADOW_FORCE,
    STRING_CHARGE_BOUNCE,
    STRING_CHARGE_SKY_DROP,
    STRING_CHARGE_SOLAR_BLADE,
    STRING_INVULNERABLE,
    STRING_RESIDUAL_DMG,
    STRING_STAT_MOD_CANT_GO_LOWER,
    STRING_STAT_MOD_CANT_GO_HIGHER,
    STRING_STAT_MOD_SEVERELY_FELL,
    STRING_STAT_MOD_ROSE_DRASTICALLY,
    STRING_RESIDUAL_STATUS_DMG,
    STRING_FAST_ASLEEP,
    STRING_WOKE_UP,
    STRING_SNAPPED_OUT,
    STRING_CONFUSION_HURT,
    STRING_IS_CONFUSED,
    STRING_NO_PP,
    STRING_DISABLED_PICKED,
    STRING_FROZEN_SOLID,
    STRING_FREEZE_THAWED,
    STRING_FULL_PARA,
    STRING_CLEAR_SMOG,
    STRING_BOUNCED_BACK,
    STRING_SHROUDED_MAGICCOAT = 86,
    STRING_SNATCH_WAITING,
    STRING_SNATCHED_MOVE,
    STRING_MUST_RECHARGE,
    STRING_CONVERSION_TYPE,
    STRING_REFLECT_TYPE_MATCHED,
    STRING_TYPE_ADDED,
    STRING_ION_DELUGE,
    STRING_ELECTRIFIED,
    STRING_BURNT_OUT = 96,
    STRING_PROTECTED_SELF,
    STRING_ENDURED,
    STRING_BRACED_ITSELF,
    STRING_KICKED_UP_MAT,
    STRING_PROTECTED_TEAM,
    STRING_PROTECTED_MON,
    STRING_BROKE_PROTECT,
    STRING_RAIN_FALLING,
    STRING_RAIN_STOPPED,
    STRING_HEAVY_RAIN_FIZZLE,
    STRING_HEAVY_RAIN_LIFTED,
    STRING_SUNLIGHT_HARSH,
    STRING_SUNLIGHT_STRONG,
    STRING_SUNLIGHT_FADE,
    STRING_HARSH_SUN_WATER,
    STRING_HARSH_SUN_END,
    STRING_SANDSTORM_KICKED,
    STRING_SANDSTORM_RAGE,
    STRING_SANDSTORM_BUFFET,
    STRING_SANDSTORM_END,
    STRING_DELTA_STREAM_EFFECT,
    STRING_DELTA_STREAM_END,
    STRING_DELTA_STREAM_IMM,
    STRING_PRIMORDIAL_SEA_IMM,
    STRING_DESOLATE_LAND_IMM,
    STRING_AURORA_VEIL,
    STRING_REFLECT,
    STRING_LIGHTSCREEN,
    STRING_SHATTER_BARRIER,
    STRING_FUTURE_FORESAW,
    STRING_TOOK_ATTACK,
    STRING_DOOM_DESIRE,
    STRING_WISH_TRUE,
    STRING_GREW_DROWSY,
    STRING_MOVE_ENDED,
    STRING_ELECTRIC_TERRAIN_START,
    STRING_PSYCHIC_TERRAIN_START,
    STRING_GRASSY_TERRAIN_START,
    STRING_MISTY_TERRAIN_START,
    STRING_LEARNED_MOVE,
    STRING_SLOT_ATTACK,
    STRING_TAILWIND_BLEW,
    STRING_TAILWIND_PETER,
    STRING_TWISTED_DIM,
    STRING_TWISTED_DIM_NORM,
    STRING_WONDER_AREA,
    STRING_SAFE_GUARD_VEIL,
    STRING_SHIELDED_CRITS,
    STRINGS_TABLE_MAX,
};

static const pchar str_stat_mod_severely_fell_p[] = _("{ATTACKING_MON}’s {STAT_NAME}\nseverely fell!");
static const pchar str_stat_mod_severely_fell_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nseverely fell!");
static const pchar str_stat_mod_rose_drastically_p[] = _("{ATTACKING_MON}’s {STAT_NAME}\nrose drastically!");
static const pchar str_stat_mod_rose_drastically_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nrose drastically!");
static const pchar str_stat_mod_cant_go_lower_p[] = _("{ATTACKING_MON}’s {STAT_NAME}\nwon’t go any lower!");
static const pchar str_stat_mod_cant_go_lower_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nwon’t go any lower!");
static const pchar str_stat_mod_cant_go_higher_p[] = _("{ATTACKING_MON}’s {STAT_NAME}\nwon’t go any higher!");
static const pchar str_stat_mod_cant_go_higher_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nwon’t go any higher!");


static const pchar str_atk_used_o[] = _("{FOE}{ATTACKING_MON} used\n{ATTACK_NAME}!");
static const pchar str_infatuated_o[] = _("{FOE}{ATTACKING_MON} is in love\nwith {DEFENDING_MON}\p{FOE}{ATTACKING_MON}\nis immobolized by love!");
static const pchar str_bide_o[] = _("{FOE}{ATTACKING_MON} is charging up\n{ATTACK_NAME}!");
static const pchar str_focus_lost_o[] = _("{FOE}{ATTACKING_MON} lost its\nfocus and couldn’t move!");
static const pchar str_cant_use_o[] = _("{ATTACKING_MON} can’t use\n{ATTACK_NAME} because of {EFFECT_NAME}!");
static const pchar str_disabled_o[] = _("{FOE}{DEFENDING_MON}’s {ATTACK_NAME}\nwas disabled!");
static const pchar str_failed_o[] = _("But it failed");
static const pchar str_curse_dmg_o[] = _("{FOE}{ATTACKING_MON} is afflicted\nby {ATTACK_NAME}");
static const pchar str_magnitude_amount_o[] = _("MAGNITUDE {EFFECT_NAME}!");
static const pchar str_no_target_o[] = _("But there was no target!");
static const pchar str_failed_alone[] = _("But it failed!");
static const pchar str_immunity_p[] = _("{FOE}{DEFENDING_MON}’s {ABILITY_DEFENDER}\nmade it immune!");
static const pchar str_immunity_o[] = _("{DEFENDING_MON}’s {ABILITY_ATTACKER}\nmade it immune!");
static const pchar str_charging_up_razorwind_o[] = _("{FOE}{ATTACKING_MON} whipped\nup a whirlwind!");
static const pchar str_solarbeam_o[] = _("{FOE}{ATTACKING_MON} absorbed\nlight!");
static const pchar str_freeze_shock_o[] = _("{FOE}{ATTACKING_MON} became cloaked\nin a freezing light!");
static const pchar str_ice_burn_o[] = _("{FOE}{ATTACKING_MON} is radiating\na blazing aura!");
static const pchar str_geomancy_o[] = _("{FOE}{ATTACKING_MON} is absorbing\npower!");
static const pchar str_skull_bash_o[] = _("{FOE}{ATTACKING_MON} lowered\nits head!");
static const pchar str_started_rain[] = _("It started to {WEATHER}!");
static const pchar str_sturdy_immune_o[] = _("{FOE}{DEFENDING_MON}’s sturdy makes\nit immune to {ATTACK_NAME}!");
static const pchar str_damp_o[] = _("{FOE}{ATTACKING_MON} couldn’t use\n{ATTACK_NAME} because of {DEFENDING_MON}’s DAMP!");
static const pchar str_cure_status_o[] = _("{FOE}{ATTACKING_MON}’s cured\nits status!");
static const pchar str_effect_ended_o[] = _("{FOE}{ATTACKING_MON}’s\n{ATTACK_NAME} ended.");
static const pchar str_weather_gone[] = _("The effects of the weather\ndisappeared.");
static const pchar str_gained_type_o[] = _("{FOE}{ATTACKING_MON} gained {TYPE}\nfrom {ABILITY_DEFENDER}!");
static const pchar str_confusion_end_o[] = _("{FOE}{ATTACKING_MON} is\nno longer confused!");
static const pchar str_dragout_failed_o[] = _("{FOE}{ATTACKING_MON} couldn’t be\ndragged out of battle!");
static const pchar str_stat_mod_harsh_drop_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\ndropped harshly!");
static const pchar str_stat_mod_drop_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\ndropped!");
static const pchar str_stat_mod_harsh_rise_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nharshly rose!");
static const pchar str_stat_mod_rise_o[] = _("{FOE}{ATTACKING_MON}’s {STAT_NAME}\nrose!");
static const pchar str_ailment_applied_o[] = _("{FOE}{ATTACKING_MON} was {STATUS_NAME}!");
static const pchar str_ailment_immune_o[] = _("{FOE}{ATTACKING_MON} was immune\nto being {STATUS_NAME}!");
static const pchar str_ailment_cured_o[] = _("{FOE}{ATTACKING_MON} was cured\nof all status ailments!");
static const pchar str_delta_stream[] = _("A mysterious air current\nis protecting Flying-type Pokémon!");
static const pchar str_desolate_land[] = _("The sunlight turned\nextremely harsh!");
static const pchar str_primordial_sea[] = _("A heavy rain began to fall!");
static const pchar str_protean_o[] = _("{FOE}{ATTACKING_MON}’s Protean changed\nit’s type!");
static const pchar str_atk_missed[] = _("The attack missed!");
static const pchar str_atk_avoided[] = _("{DEFENDING_MON} avoided the attack!");
static const pchar str_fled_p[] = _("Got away safely.\p");
static const pchar str_fled_o[] = _("{ATTACKING_MON} fled\p");
static const pchar str_flee_failed[] = _("Could not flee!\p"); /* TODO: proper text and reasoning */
static const pchar str_move_crit[] = _("A critical hit!");
static const pchar str_move_immune_p[] = _("{FOE}{DEFENDING_MON} was immune!");
static const pchar str_move_immune_o[] = _("{DEFENDING_MON} was immune!");
static const pchar str_move_nve[] = _("It wasn’t very effective");
static const pchar str_move_se[] = _("It was super effective!");
static const pchar str_recoil[] =_("{ATTACKING_MON} was hurt by recoil!");
static const pchar str_drain[] = _("{DEFENDING_MON}’s energy was drained!");
static const pchar str_fainted_o[] = _("{FOE}{ATTACKING_MON}\nfainted!\p");
static const pchar str_give_exp[] = _("{ATTACKING_MON} gained {STR_VAR_1} exp!\p");
static const pchar str_level_up[] = _("{ATTACKING_MON} leveled up!\p");
static const pchar str_healed_o[] = _("{FOE}{ATTACKING_MON} restored some HP!");
static const pchar str_flinched_o[] = _("{FOE}{ATTACKING_MON} flinched\nand couldn’t move!");
static const pchar str_multi_hit[] = _("Hit {STR_VAR_1} time(s)!");
static const pchar str_OHKO[] = _("It’s a one-hit KO!");
static const pchar str_charge_solarbeam_o[] = _("{FOE}{ATTACKING_MON} absorbed\nlight!");
static const pchar str_charge_sky_attack_o[] = _("{FOE}{ATTACKING_MON} became\ncloaked in a harsh light!");
static const pchar str_charge_dig_o[] = _("{FOE}{ATTACKING_MON} became\ncloaked in a harsh light!");
static const pchar str_charge_dive_o[] = _("{FOE}{ATTACKING_MON} became\ncloaked in a harsh light!");
static const pchar str_fly_o[] = _("{FOE}{ATTACKING_MON} flew up high!");
static const pchar str_phantom_force_o[] = _("{FOE}{ATTACKING_MON} vanished instantly!");
static const pchar str_shadow_force_o[] = _("{FOE}{ATTACKING_MON} vanished instantly!");
static const pchar str_bounce_o[] = _("{FOE}{ATTACKING_MON} sprang up!");
static const pchar str_sky_drop_o[] = _("{FOE}{ATTACKING_MON} took\n{DEFENDING_MON} into the sky!");
static const pchar str_charge_solarblade_o[] = _("{FOE}{ATTACKING_MON} absorbed\nlight!");
static const pchar str_invulnerable_o[] = _("{DEFENDING_MON} was invulnerable\nto the attack!");
static const pchar str_residual_dmg[] = _("{ATTACKING_MON} took some damage from\n{ATTACK_NAME}!");
static const pchar str_residual_status_dmg[] = _("{ATTACKING_MON} took some damage from\nbeing {STATUS_NAME}!");
static const pchar str_fast_asleep_o[] = _("{FOE}{ATTACKING_MON}\nis fast asleep.");
static const pchar str_awoke_o[] = _("{FOE}{ATTACKING_MON}\nwoke up!");
static const pchar str_snapped_out_o[] = _("{FOE}{ATTACKING_MON}\nsnapped out of confusion!");
static const pchar str_hurt_itself_o[] = _("{FOE}{ATTACKING_MON}\nhurt itself in confusion");
static const pchar str_is_confused_o[] = _("{FOE}{ATTACKING_MON} is confused");
static const pchar str_no_pp[] = _("There is no PP left for\nthis move!");
static const pchar str_disabled_pick[] = _("This move is disabled!");
static const pchar str_frozen_solid_o[] = _("{FOE}{ATTACKING_MON} is\nfrozen solid!");
static const pchar str_thawed_out_o[] = _("{FOE}{ATTACKING_MON}\nthawed out!");
static const pchar str_fully_paralyzed_o[] = _("{FOE}{ATTACKING_MON} is paralyzed!\nIt can’t move!");
static const pchar str_clear_smog_o[] = _("{FOE}{DEFENDING_MON}’s stat changes\nwere removed!");
static const pchar str_bounced_back_p[] = _("Foe {DEFENDING_MON}’s {ATTACK_NAME}\nwas bounced back by Magic Coat!");
static const pchar str_bounced_back_o[] = _("{DEFENDING_MON}’s {ATTACK_NAME} was\nbounced back by Magic Coat!");
static const pchar str_shrouded_magiccoat_o[] = _("{FOE}{ATTACKING_MON} shrouded\nitself with Magic Coat!");
static const pchar str_snatch_waiting_o[] = _("{FOE}{ATTACKING_MON} waits for a target\nto make a move!");
static const pchar str_snatched_o[] = _("{FOE}{ATTACKING_MON} snatched\n{DEFENDING_MON}’s move!");
static const pchar str_must_recharge_o[] = _("{FOE}{ATTACKING_MON} must recharge!");
static const pchar str_conversion_gain_type_o[] = _("{FOE}{ATTACKING_MON} transformed\ninto the {PKMN_TYPE}-type!");
static const pchar str_reflect_type_match_o[] = _("{FOE}{ATTACKING_MON}’s type changed\nto match {THE_FOE}{DEFENDING_MON}’s!");
static const pchar str_type_added_o[] = _("The {PKMN_TYPE}-type was added\nto {THE_FOE}{DEFENDING_MON}!");
static const pchar str_ion_deluge_field[] = _("A deluge of ions showers\nthe battlefield!");
static const pchar str_electrified_p[] = _("{FOE}{DEFENDING_MON}’s moves\nhave been electrified!");
static const pchar str_electrified_o[] = _("{DEFENDING_MON}’s moves\nhave been electrified!");
static const pchar str_burnt_out_o[] = _("{FOE}{ATTACKING_MON} burnt\nitself out!");
static const pchar str_protected_itself_o[] = _("{FOE}{ATTACKING_MON} protected\nitself!");
static const pchar str_endured_hit_o[] = _("{FOE}{ATTACKING_MON} endured\nthe hit!");
static const pchar str_braced_self_o[] = _("{FOE}{ATTACKING_MON} braced\nitself!");
static const pchar str_kicked_mat[] = _("It was blocked by\nthe kicked-up mat!");
static const pchar str_protected_side[] = _("{ATTACK_NAME} protected\nthe team!");
static const pchar str_protected_mon[] = _("{ATTACK_NAME} protected {ATTACKING_MON}!");
static const pchar str_broke_protect[] = _("{ATTACK_NAME} broke the\nprotection!");
static const pchar str_rain_continue[] = _("The {WEATHER} continues to fall.");
static const pchar str_rain_stop[] = _("The {WEATHER} stopped.");
static const pchar str_heavy_rain_atk[] = _("The Fire-type attack fizzled out\nin the heavy rain!");
static const pchar str_heavy_rain_lift[] = _("The heavy rain has lifted!");
static const pchar str_sun_start[] = _("The sunlight turned harsh!");
static const pchar str_sun_strong[] = _("The sunlight is strong.");
static const pchar str_sun_finish[] = _("The sunlight faded.");
static const pchar str_harsh_sun_evaporates[] = _("The Water-type attack evaporated\nin the harsh sunlight!");
static const pchar str_harsh_sun_over[] = _("The harsh sunlight faded.");
static const pchar str_sandstorm_start[] = _("A sandstorm kicked up!");
static const pchar str_sandstorm_continue[] = _("The sandstorm rages.");
static const pchar str_sandstorm_o[] = _("{FOE}{ATTACKING_MON} is buffeted\nby the {WEATHER}!");
static const pchar str_sandstorm_finish[] = _("The sandstorm subsided.");
static const pchar str_delta_stream_effectiveness[] = _("The mysterious strong winds\nweakened the attack!");
static const pchar str_delta_stream_fin[] = _("The mysterious strong winds\nweakened the attack!");
static const pchar str_delta_stream_imm[] = _("The mysterious strong winds\nblow on regardless!");
static const pchar str_harsh_sun_imm[] = _("The extremely harsh sunlight\nwas not lessened at all!");
static const pchar str_harsh_rain_imm[] = _("There is no relief\nfrom this heavy rain!");
static const pchar str_a_veil_o[] = _("Aurora Veil made {THE_FOE}team stronger\nagainst physical and special moves!");
static const pchar str_reflect_o[] = _("Reflect raised {THE_FOE}team’s\nDefense!");
static const pchar str_lightscreen_o[] = _("Light Screen raised {THE_FOE}team’s\nSpecial Defense!");
static const pchar str_shattered_barr[] = _("It shattered the barrier!");
static const pchar str_foresaw_atk_o[] = _("{FOE}{ATTACKING_MON} foresaw\nan attack!");
static const pchar str_took_attack_o[] = _("{FOE}{ATTACKING_MON} took\nthe {ATTACK_NAME}!");
static const pchar str_chose_doom_o[] = _("{FOE}{ATTACKING_MON}\nchose Doom Desire as its destiny!");
static const pchar str_wish_true_o[] = _("{FOE}{ATTACKING_MON}’s wish\ncame true!");
static const pchar str_grew_drowsy_o[] = _("{DEFENDING_MON} grew drowsy!");
static const pchar str_began_charging_o[] = _("{FOE}{ATTACKING_MON} began\ncharging power!");
static const pchar str_move_end[] = _("The {ATTACK_NAME} ended.");
static const pchar str_elec_terrain[] = _("An Electric current runs\nacross the battlefield!");
static const pchar str_psyc_terrain[] = _("The battlefield got weird!");
static const pchar str_grass_terrain[] = _("Grass grew to\ncover the battlefield!");
static const pchar str_misty_terrain[] = _("Mist swirled about\nthe battlefield!");
static const pchar str_learnt_move[] = _("{FOE}{ATTACKING_MON} learned\n{ATTACK_NAME}!");
static const pchar str_whos_attack[] = _("{SLOT_MON}’s attack!");
static const pchar str_tailwind_behind[] = _("The tailwind blew from\nbehind {THE_FOE}team!");
static const pchar str_tailwind_peter[] = _("{FOE}Tailwind petered out!");
static const pchar str_twisted_dim[] = _("{FOE}{ATTACKING_MON} twisted\nthe dimensions!");
static const pchar str_twisted_dim_n[] = _("The twisted dimensions\nreturned to normal!");
static const pchar str_wonder_area[] = _("It created a bizzare area in which\nthe Defense and Sp. Def stats\nare swapped!");
static const pchar str_safe_guard_v[] = _("{FOE}{ATTACKING_MON}’s team became\ncloaked in a mystical veil!");
static const pchar str_shield_team_crit[] = _("The {ATTACK_NAME} shielded {THE_FOE}\nteam from critical hits!");

// stat names
static const pchar str_stat_atk[] = _("attack");
static const pchar str_stat_def[] = _("defense");
static const pchar str_stat_spd[] = _("speed");
static const pchar str_stat_spatk[] = _("special attack");
static const pchar str_stat_spdef[] = _("special defense");
static const pchar str_stat_acc[] = _("accuracy");
static const pchar str_stat_evn[] = _("evasion");
static const pchar str_stat_crit[] = _("critical chance");

// status names
static const pchar str_status_paralyze[] = _("paralyzed");
static const pchar str_status_burn[] = _("burned");
static const pchar str_status_poison[] = _("poisoned");
static const pchar str_status_sleep[] = _("put to sleep");
static const pchar str_status_frozen[] = _("frozen");
static const pchar str_status_bpoison[] = _("badly poisoned");
static const pchar str_status_confuse[] = _("confused");

// weather names
static const pchar str_hail_w[] = _("hail");
static const pchar str_sandstorm_w[] = _("sandstorm");
static const pchar str_rain_w[] = _("rain");


static const pchar str_thefoe[] = _("the foe ");
static const pchar str_thefoe_p[] = _("your ");
static const pchar str_nfoe[] = _("Foe ");


static const pchar* battle_strings[STRINGS_TABLE_MAX] = {
   (pchar*)&str_atk_used_o, //0
   (pchar*)&str_infatuated_o, //1
   (pchar*)&str_bide_o, // 2
   (pchar*)&str_focus_lost_o, // 3
   (pchar*)&str_cant_use_o, // 4
   (pchar*)&str_disabled_o, // 5
   (pchar*)&str_failed_o, // 6
   (pchar*)&str_curse_dmg_o, // 7
   (pchar*)str_magnitude_amount_o, // 8
   (pchar*)&str_no_target_o, // 9
   (pchar*)&str_failed_alone, // 10
   (pchar*)&str_immunity_p, (pchar*)&str_immunity_o, // 11, 12
   (pchar*)&str_charging_up_razorwind_o, // 13
   (pchar*)&str_solarbeam_o, // 14
   (pchar*)&str_freeze_shock_o, // 15
   (pchar*)&str_ice_burn_o, // 16
   (pchar*)&str_geomancy_o, // 17
   (pchar*)&str_skull_bash_o, // 18
   (pchar*)str_started_rain, // 19
   (pchar*)&str_sturdy_immune_o, // 20
   (pchar*)&str_damp_o, // 21
   (pchar*)&str_cure_status_o, // 22
   (pchar*)&str_effect_ended_o, // 23
   (pchar*)&str_weather_gone, // 24
   (pchar*)&str_gained_type_o, // 25
   (pchar*)&str_confusion_end_o, // 26
   (pchar*)&str_dragout_failed_o, // 27
   (pchar*)&str_stat_mod_harsh_drop_o, // 28
   (pchar*)&str_stat_mod_drop_o, // 29
   (pchar*)&str_stat_mod_harsh_rise_o, // 30
   (pchar*)&str_stat_mod_rise_o, // 31
   (pchar*)&str_ailment_applied_o, // 32
   (pchar*)&str_ailment_immune_o, // 33
   (pchar*)&str_ailment_cured_o, // 34
   (pchar*)&str_desolate_land, // 35
   (pchar*)&str_primordial_sea, // 36
   (pchar*)&str_protean_o, // 37
   (pchar*)&str_atk_missed, // 38
   (pchar*)&str_atk_avoided, // 39
   (pchar*)&str_fled_p, (pchar*)&str_fled_o, // 40, 41
   (pchar*)&str_flee_failed, // 42
   (pchar*)&str_move_crit, // 43
   (pchar*)&str_move_immune_p, (pchar*)&str_move_immune_o, // 44, 45
   (pchar*)&str_move_nve, // 46
   (pchar*)&str_move_se, // 47
   (pchar*)&str_recoil, // 48
   (pchar*)&str_drain, // 49
   (pchar*)&str_fainted_o, // 50
   (pchar*)&str_give_exp, // 51
   (pchar*)&str_level_up, // 52
   (pchar*)&str_healed_o, // 53
   (pchar*)&str_flinched_o, // 54
   (pchar*)&str_multi_hit, // 55
   (pchar*)&str_OHKO, // 56
   (pchar*)&str_charge_sky_attack_o, // 57
   (pchar*)&str_charge_dig_o, // 58
   (pchar*)&str_charge_dive_o, // 59
   (pchar*)&str_fly_o, // 60
   (pchar*)&str_phantom_force_o, // 61
   (pchar*)&str_shadow_force_o, // 62
   (pchar*)&str_bounce_o, // 63
   (pchar*)&str_sky_drop_o, // 64
   (pchar*)&str_charge_solarblade_o, // 65
   (pchar*)&str_invulnerable_o, // 66
   (pchar*)&str_residual_dmg, // 67
   (pchar*)&str_stat_mod_cant_go_lower_o, // 68
   (pchar*)&str_stat_mod_cant_go_higher_o, // 69
   (pchar*)&str_stat_mod_severely_fell_p, // 70
   (pchar*)&str_stat_mod_rose_drastically_p, // 71
   (pchar*)&str_residual_status_dmg, // 72
   (pchar*)&str_fast_asleep_o, // 73
   (pchar*)&str_awoke_o, // 74
   (pchar*)&str_snapped_out_o, // 75
   (pchar*)&str_hurt_itself_o, // 76
   (pchar*)&str_is_confused_o, // 77
   (pchar*)&str_no_pp, // 78
   (pchar*)&str_disabled_pick, // 79
   (pchar*)&str_frozen_solid_o, // 80
   (pchar*)&str_thawed_out_o, // 81
   (pchar*)&str_fully_paralyzed_o, // 82
   (pchar*)&str_clear_smog_o, // 83
   (pchar*)&str_bounced_back_p, (pchar*)&str_bounced_back_o, // 84, 85
   (pchar*)&str_shrouded_magiccoat_o, // 86
   (pchar*)&str_snatch_waiting_o, // 87
   (pchar*)&str_snatched_o, // 88
   (pchar*)&str_must_recharge_o, // 89
   (pchar*)&str_conversion_gain_type_o, // 90
   (pchar*)&str_reflect_type_match_o, // 91
   (pchar*)&str_type_added_o, // 92
   (pchar*)&str_ion_deluge_field, // 93
   (pchar*)&str_electrified_p, (pchar*)&str_electrified_o, // 94, 95
   (pchar*)&str_burnt_out_o, // 96
   (pchar*)&str_protected_itself_o, // 97
   (pchar*)&str_endured_hit_o, // 98
   (pchar*)&str_braced_self_o, // 99
   (pchar*)&str_kicked_mat, // 100
   (pchar*)&str_protected_side, // 101
   (pchar*)&str_protected_mon, // 102
   (pchar*)&str_broke_protect, // 103
   (pchar*)&str_rain_continue, // 104
   (pchar*)&str_rain_stop, // 105
   (pchar*)&str_heavy_rain_atk, // 106
   (pchar*)&str_heavy_rain_lift, // 107
   (pchar*)&str_sun_start, // 108
   (pchar*)&str_sun_strong, // 109
   (pchar*)&str_sun_finish, // 110
   (pchar*)&str_harsh_sun_evaporates, // 111
   (pchar*)&str_harsh_sun_over, // 112
   (pchar*)&str_sandstorm_start, // 113
   (pchar*)&str_sandstorm_continue, // 114
   (pchar*)&str_sandstorm_o, // 115
   (pchar*)&str_sandstorm_finish, // 116
   (pchar*)&str_delta_stream_effectiveness, // 117
   (pchar*)&str_delta_stream_fin, // 118
   (pchar*)&str_delta_stream_imm, // 119
   (pchar*)&str_harsh_sun_imm, // 120
   (pchar*)&str_harsh_rain_imm, // 121
   (pchar*)&str_a_veil_o, // 122
   (pchar*)&str_reflect_o, // 123
   (pchar*)&str_lightscreen_o, // 124
   (pchar*)&str_shattered_barr, // 125
   (pchar*)&str_foresaw_atk_o, // 126
   (pchar*)&str_took_attack_o, // 127
   (pchar*)&str_chose_doom_o, // 128
   (pchar*)&str_wish_true_o, // 129
   (pchar*)&str_grew_drowsy_o, // 130
   (pchar*)&str_move_end, // 131
   (pchar*)&str_elec_terrain, // 132
   (pchar*)&str_psyc_terrain, // 133
   (pchar*)&str_grass_terrain, // 134
   (pchar*)&str_misty_terrain, // 135
   (pchar*)&str_learnt_move, // 136
   (pchar*)&str_whos_attack, // 137
   (pchar*)&str_tailwind_behind, // 138
   (pchar*)&str_tailwind_peter, // 139
   (pchar*)&str_twisted_dim, // 140
   (pchar*)&str_twisted_dim_n, // 141
   (pchar*)&str_wonder_area, // 142
   (pchar*)&str_safe_guard_v, // 143
   (pchar*)&str_shield_team_crit, // 144


};

#endif /* BATTLE_PICK_MESSAGES_H_ */
