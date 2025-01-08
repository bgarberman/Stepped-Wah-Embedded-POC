/* Header */
/**
  ******************************************************************************
  * @file           : filter.h
  * @brief          : Filter information

  ******************************************************************************
  */

typedef struct filter {
    int f_c;
    float a0;
    float a1;
    float a2;
    float b0;
    float b1;
    float b2;
    float in_z1;
    float in_z2;
    float out_z1;
    float out_z2;
} filter_t;

