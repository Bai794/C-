/*** 
 * @Author: HideMe
 * @Date: 2021-11-28 13:25:50
 * @LastEditTime: 2021-11-28 13:43:25
 * @LastEditors: your name
 * @Description: 
 * @FilePath: \fish\control.h
 * @e-mail: 1269724114@qq.com
 */
#ifndef CONTROL_H_
#define CONTROL_H_

enum {
    POSITION_PID=0,
    DELTA_PID,
};
class MYPID
{
private:
    /* data */
public:
    MYPID(/* args */);
    ~MYPID();
    float p,i,d;
    float set[3],get[3],err[3];//include NOW LAST LLAST
    float pout,iout,dout;
    float pos_out,last_pos_out,delta_u,delta_out£¬last_delta_out;
    uint8_t pid_mode;
    uint32_t MaxOutout;
    uint32_t IntegralLimit;
};




#endif // !CONTROL_H_
