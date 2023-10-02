# 環境
- Arduino IDE 1.8.57
- Arduino Leonardo(互換品)
- ステッピングモータ(28BYJ-48)
- モータドライバ(ULN2003)

# 使い方
1. Arduino IDEでstepping_motor_program/program.inoを開く
2. ステッピングモータを以下のように接続する
```
Arduino 5V -> +
Arduino GND -> -
Arduino 8 -> IN1
Arduino 9 -> IN2
Arduino 10 -> IN3
Arduino 11 -> IN4
```
3. マイコンをPCに接続して書き込む
4. シリアルモニタを開く
5. 0.5回転ごとに首振りする
