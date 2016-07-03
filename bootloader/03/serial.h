#ifndef _LIB_H_INCLUDED_
#define _LIB_H_INCLUDED_

int serial_init(int index); /* initialize device */
int serial_is_send_enable(int index); /* check enable */
int serial_send_byte(int index, unsigned char b); /* 1 character send */

#endif
