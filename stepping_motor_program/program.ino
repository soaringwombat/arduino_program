#include <Stepper.h>

const int number_of_steps = 32;
const int steps_output_rev = 32 * 64; // 2048
const int CW = 1;
const int CCW = -1;

Stepper stepper(number_of_steps, 8, 10, 9, 11);

void setup() {
    stepper.setSpeed(300);
}

void loop() {
    int steps;

    // 0.5回転分のステップ数を取得する
    steps = get_step_by_rev(CW, 0.5);

    // 右に首を振る
    stepper.step(steps);
    delay(1000);

    // 1回転分のステップ数を取得する
    steps = get_step_by_rev(CCW, 0.5);

    // 左に首を振る
    stepper.step(steps);
    delay(1000);  
}

// 回転方向と回転数からステップ数を計算する関数
int get_step_by_rev(int direction, float rev) {
    return steps_output_rev * rev * direction;
}
