#ifndef __RS485_H
#define __RS485_H



void rs_485_init(void);
void rs_485_dir_send();
void rs_485_dir_receiving();
void rs_485_send_data(unsigned char Sync_Bajt , unsigned char Camera_Address_Bajt , unsigned char Command_1_Bajt , unsigned char Command_2_Bajt ,
		unsigned char Data_1_Bajt , unsigned char Data_2_Bajt , unsigned char Checksum_Bajt);

#endif /* __RS485_H */
