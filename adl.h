#ifndef __ADL_H__
#define __ADL_H__
#ifdef HAVE_ADL
void init_adl(int nDevs);
float gpu_temp(int gpu);
int gpu_engineclock(int gpu);
int gpu_memclock(int gpu);
float gpu_vddc(int gpu);
int gpu_activity(int gpu);
int gpu_fanspeed(int gpu);
void clear_adl(void);
#else /* HAVE_ADL */
void init_adl(int nDevs) {}
void clear_adl(void) {}
#endif
#endif
