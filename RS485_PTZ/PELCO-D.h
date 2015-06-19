#ifndef __PELCO-D_H
#define __PELCO-D_H




void PELCO_D_command_stop(unsigned char id);
void PELCO_D_command_menu(unsigned char id);
void PELCO_D_command_zoom_plus(unsigned char id);
void PELCO_D_command_zoom_minus(unsigned char id);
void PELCO_D_command_focus_plus(unsigned char id);
void PELCO_D_command_focus_minus(unsigned char id);
void PELCO_D_command_shutter_open(unsigned char id);
void PELCO_D_command_shutter_close(unsigned char id);
void PELCO_D_command_rotation_right(unsigned char id , unsigned char speed);
void PELCO_D_command_rotation_left(unsigned char id , unsigned char speed);
void PELCO_D_command_rotation_up(unsigned char id , unsigned char speed);
void PELCO_D_command_rotation_down(unsigned char id , unsigned char speed);
void PELCO_D_command_rotation_up_right(unsigned char id , unsigned char speed , unsigned char speed_y);
void PELCO_D_command_rotation_up_left(unsigned char id , unsigned char speed , unsigned char speed_y);
void PELCO_D_command_rotation_down_right(unsigned char id , unsigned char speed , unsigned char speed_y);
void PELCO_D_command_rotation_down_left(unsigned char id , unsigned char speed , unsigned char speed_y);
void PELCO_D_command_go_preset(unsigned char id , unsigned char preset);
void PELCO_D_command_set_preset(unsigned char id , unsigned char preset);
void PELCO_D_command_clean_preset(unsigned char id , unsigned char preset);





#endif
