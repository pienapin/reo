#ifndef __RENE_FIRMWARE_CONFIG_RENE_H__
#define __RENE_FIRMWARE_CONFIG_RENE_H__

#if defined(COMPILE_LEFT) && defined(COMPILE_RIGHT)
#error "Only one of COMPILE_LEFT and COMPILE_RIGHT can be defined at once."
#endif

#ifdef COMPILE_LEFT

#define PIPE_NUMBER 0

#define C01 10
#define C02 9
#define C03 8
#define C04 7
#define C05 6
#define C06 5
// #define C07 10

#define R01 20
#define R02 18
#define R03 19
#define R04 17
// #define R05 13

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define C01 30
#define C02 0
#define C03 1
#define C04 2
#define C05 3
#define C06 4
// #define C07 6

#define R01 22
#define R02 23
#define R03 24
#define R04 25
// #define R05 29

#endif

#define COLUMNS 6
#define ROWS 4

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}

#endif /* __REDOX_W_FIRMWARE_CONFIG_REDOX_W_H__ */
