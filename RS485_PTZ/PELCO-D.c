/*********************************************************************************************************
 * 												PELCO-D
 *********************************************************************************************************/
#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "PELCO-D.h"
#include "RS485.h"

void PELCO_D_command_stop(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x00 , 0x00 , 0x00 , 0x00 , id);
}

void PELCO_D_command_menu(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x00 , 0x07 , 0x00 , 0x5A , 0x61+id);
}

void PELCO_D_command_zoom_plus(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x00 , 0x20 , 0x00 , 0x00 , 0x20+id);
}

void PELCO_D_command_zoom_minus(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x00 , 0x40 , 0x00 , 0x00 , 0x40+id);
}

void PELCO_D_command_focus_plus(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x01 , 0x00 , 0x00 , 0x00 , 0x01+id);
}

void PELCO_D_command_focus_minus(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x01 , 0x80 , 0x00 , 0x00 , 0x81+id);
}

void PELCO_D_command_shutter_open(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x02 , 0x00 , 0x00 , 0x00 , 0x02+id);
}

void PELCO_D_command_shutter_close(unsigned char id) {
	rs_485_send_data(0xFF , id , 0x04 , 0x00 , 0x00 , 0x00 , 0x04+id);
}

void PELCO_D_command_rotation_right(unsigned char id , unsigned char speed) {
	rs_485_send_data(0xFF , id , 0x00 , 0x02 , speed , 0x00 , 0x02+id+speed);
}

void PELCO_D_command_rotation_left(unsigned char id , unsigned char speed) {
	rs_485_send_data(0xFF , id , 0x00 , 0x04 , speed , 0x00 , 0x04+id+speed);
}

void PELCO_D_command_rotation_up(unsigned char id , unsigned char speed) {
	rs_485_send_data(0xFF , id , 0x00 , 0x08 , 0x00 , speed , 0x08+id+speed);
}

void PELCO_D_command_rotation_down(unsigned char id , unsigned char speed) {
	rs_485_send_data(0xFF , id , 0x00 , 0x10 , 0x00 , speed , 0x10+id+speed);
}

void PELCO_D_command_rotation_up_right(unsigned char id , unsigned char speed_x , unsigned char speed_y) {
	rs_485_send_data(0xFF , id , 0x00 , 0x0A , speed_x , speed_y , 0x0A+id+speed_x+speed_y);
}

void PELCO_D_command_rotation_up_left(unsigned char id , unsigned char speed_x , unsigned char speed_y) {
	rs_485_send_data(0xFF , id , 0x00 , 0x0C , speed_x , speed_y , 0x0C+id+speed_x+speed_y);

}

void PELCO_D_command_rotation_down_right(unsigned char id , unsigned char speed_x , unsigned char speed_y) {
	rs_485_send_data(0xFF , id , 0x00 , 0x12 , speed_x , speed_y , 0x12+id+speed_x+speed_y);

}

void PELCO_D_command_rotation_down_left(unsigned char id , unsigned char speed_x , unsigned char speed_y) {
	rs_485_send_data(0xFF , id , 0x00 , 0x14 , speed_x , speed_y , 0x14+id+speed_x+speed_y);

}

void PELCO_D_command_go_preset(unsigned char id , unsigned char preset) {
	rs_485_send_data(0xFF , id , 0x00 , 0x07 , 0x00 , preset , 0x07+id+preset);

}

void PELCO_D_command_set_preset(unsigned char id , unsigned char preset) {
	rs_485_send_data(0xFF , id , 0x00 , 0x03 , 0x00 , preset , 0x03+id+preset);

}

void PELCO_D_command_clean_preset(unsigned char id , unsigned char preset) {
	rs_485_send_data(0xFF , id , 0x00 , 0x05 , 0x00 , preset , 0x05+id+preset);

}













