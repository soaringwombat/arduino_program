# 環境
- Arduino IDE 1.8.57
- Arduino Leonardo(互換品)
- 超音波センサ(HC-SR04)

# 使い方
1. Arduino IDEでus_program/us_program.inoを開く
2. 超音波センサを以下のように接続する
```
Arduino 5V -> VCC
Arduino GND -> GND
Arduino 2 -> Trig
Arduino 3 -> Echo
```
3. マイコンをPCに接続して書き込む
4. シリアルモニタを開く
5. 距離が表示される
