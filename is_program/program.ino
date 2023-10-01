const int irPin = A0; // 赤外線距離センサのアナログピン
const float conversionFactor = 0.0048828125; // アナログ値から距離に変換するための係数

void setup() {
    Serial.begin(9600); // シリアル通信を開始する
}

void loop() {
    int irValue = analogRead(irPin); // 赤外線距離センサからアナログ値を読み取る
    float distance = 1.0 / (irValue * conversionFactor); // アナログ値から距離に変換する
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
    delay(1000); // 1秒待機する
}