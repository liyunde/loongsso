#ifndef __LOONG_LOG_H_
#define __LOONG_LOG_H_


void lonng_log_init();

void loong_destroy_log();

void loong_write_log(const char *arg, ...);

#endif

