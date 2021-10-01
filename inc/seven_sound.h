#ifndef _LIBSEVEN_SOUND_H
#define _LIBSEVEN_SOUND_H

#ifdef __cplusplus
extern "C" {
#endif

// TODO: Separate header? Need extra structures, plus really rarely used.
extern void svcSoundDriverMain(void);
extern void svcSoundDriverVSync(void);
extern void svcSoundChannelClear(void);
extern void svcSoundDriverVSyncOff(void);
extern void svcSoundDriverVSyncOn(void);

// TODO: MusicPlayer* functions

#ifdef __cplusplus
}
#endif

#endif /* !_LIBSEVEN_SOUND_H */
