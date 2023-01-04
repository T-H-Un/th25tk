#include "print.h"
#include "btest.h"
#include "uart.h"

uint8_t LowByte(uint16_t);
uint8_t HighByte(uint16_t);
uint16_t combu8t(uint8_t,uint8_t);

void keyboard_post_init_user_kb(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

void keyboard_post_init_kb(void){
  uart_init(115200);
  }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint8_t data[5]={0};
  data[0]=0xFF;
  data[1]=0xFF;
  data[2]=HighByte(keycode);
  if(data[2]!=0x00){
    return true;
    }
  data[3]=LowByte(keycode);
  data[4]=record->event.pressed;
  uprintf("Keycode: %u ,0x%x\ndata[0]=0x%x\ndata[1]=0x%x\n",keycode,keycode,data[2],data[3]);
  uprintf("data[2]=0x%x\nPress: %u\n\n",data[4],record->event.pressed);
  uprintf("readPin(A11)=%u\nreadPin(A12)=%u\n",readPin(A11),readPin(A12));
  //Normally, A11 is 0, A12 is 1.In a special case 1,0 and 0,0. In not USB is constantly 1,1 so it is used for judge USB data connected.
  uart_transmit(data,5);
  if(uart_available()){
  uprintf("*******recive data: %u*********\n",(uint8_t)uart_read());
  }
	return true;
}

uint8_t LowByte(uint16_t u16){
  return (uint8_t)u16;
  }
  
uint8_t HighByte (uint16_t u16){
  uint8_t ans=u16>>8;
  return ans;
  }
uint16_t combu8t(uint8_t HB,uint8_t LB){
  return (HB<<8)|LB;
}
