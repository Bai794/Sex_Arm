
/*
 * @Author: HideMe
 * @Date: 2022-04-23 20:05:16
 * @LastEditTime: 2022-04-24 15:56:45
 * @LastEditors: your name
 * @Description:
 * @FilePath: \Sex_Arm\arm.ino
 * @e-mail: 1269724114@qq.com
 */
#include "Arm.h"
#include "command.h"
#include "pinout.h"
#include "mystepper.h"
Arm Sex_dof(0.15485, 0, 0.17, 0.2186, 0.0759, 0.12525);
Arm::Joint6D_t jiont{0, 0, 90, 180, 0, 0};
Arm::Pose6D_t out_pose;
Arm::IKSolves_t Result_pose;
uint32_t time = 0,time2=0;
void setup()
{
    Serial.begin(115200);
    Sex_dof.SolveFK(jiont, out_pose);
   
    time = millis();
}

void loop()
{
    Sex_dof.SolveIK(out_pose, jiont, Result_pose);
    time2 = millis()-time;
    time=millis();
    // Serial.print(out_pose.X);
    Serial.println(time2);
    // Sex_dof.SolveFK(jiont, out_pose);
}
