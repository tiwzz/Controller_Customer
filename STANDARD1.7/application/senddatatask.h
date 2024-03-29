#ifndef __SEND_DATA_TASK__
#define __SEND_DATA_TASK__

#define FRAME_HEADER_LENGTH 5 // 帧头数据长度
#define CMD_ID_LENGTH 2       // 命令码ID数据长度
#define DATA_LENGTH 30        // 数据段长度
#define FRAME_TAIL_LENGTH 2   // 帧尾数据长度

#define DATA_FRAME_LENGTH (FRAME_HEADER_LENGTH + CMD_ID_LENGTH + DATA_LENGTH + FRAME_TAIL_LENGTH) // 整个数据帧的长度

#define CONTROLLER_CMD_ID 0x0302 // 自定义控制器命令码   
#endif
