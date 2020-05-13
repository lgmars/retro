#ifndef MDFN_SETTINGS_H
#define MDFN_SETTINGS_H

#include <string>

extern uint32_t setting_psx_multitap_port_1;
extern uint32_t setting_psx_multitap_port_2;
extern uint32_t setting_psx_analog_toggle;
extern uint32_t setting_psx_fastboot;
extern int setting_initial_scanline;
extern int setting_initial_scanline_pal;
extern int setting_last_scanline;
extern int setting_last_scanline_pal;

// This should assert() or something if the setting isn't found, since it would
// be a totally tubular error!
uint64 MDFN_GetSettingUI(const char *name);
int64 MDFN_GetSettingI(const char *name);
bool MDFN_GetSettingB(const char *name);
std::string MDFN_GetSettingS(const char *name);
#endif
