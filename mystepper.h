
/*** 
 * @Author: HideMe
 * @Date: 2021-11-17 11:09:50
 * @LastEditTime: 2022-04-24 13:46:45
 * @LastEditors: your name
 * @Description: 
 * @FilePath: \Sex_Arm\mystepper.h
 * @e-mail: 1269724114@qq.com
 */
#ifndef MYSTEPPER_H_
#define MYSTEPPER_H_
#include <Arduino.h>
class mystepper
{
private:
    /* data */
    int stepPin;
    int dirPin;
    int stepperStepTargetPosition;
    int stepperStepPosition;
    int speed;
    int radToStepFactor;

public:
    mystepper(int StepPin, int DirPin,int delay_time);
    ~mystepper();
    void update();
    void setReductionRatio(float gearRatio, int stepsPerRev);
    void stepnum_turns(float quan_num); 
};
#endif
