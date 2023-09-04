#include "stdint.h"
#include "furi_hal_i2c.h"
#include <stddef.h>
#include <stdint.h>
#include <notification/notification_messages.h>


void write_dump(uint8_t* buffer, size_t size);
void dump(uint8_t* out);
void write_credit(float value, float prev_value);
float read_credit();
void calc_credit(float value, uint8_t* result);
