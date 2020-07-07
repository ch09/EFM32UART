#include "em_device.h"
#include "em_chip.h"
//Defined USER LIB

//*Defined USER LIB
#include "em_i2c.h"

typedef struct accel_sample_data
{
	int16_t x;
	int16_t y;
	int16_t z;
} accel_sample_struct;

accel_sample_struct sample;


int main(void)
{
  /* Chip errata */
  CHIP_Init();




  //ADXL_init();
  print(" \n  x      y    z\r\n");



  /* Infinite loop */
  while (1) {

	 // sample = read_accel_data();
	 // print("\r%5d %5d %5d", sample.x, sample.y, sample.z);
	  //delay(100);
  }
}
