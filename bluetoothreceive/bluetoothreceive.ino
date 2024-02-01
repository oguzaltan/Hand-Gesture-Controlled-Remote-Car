int data;

void setup()
{
pinMode(LED_BUILTIN, OUTPUT);
Serial.begin(9600);   //Seri iletişimi başlatır
}
void loop()
{
if(Serial.available()) // Eğer Bluetooth bağlantısı varsa kodaları çalıştırır
{
int data = Serial.read();
delay(100);
if(data=='0')
digitalWrite(LED_BUILTIN,LOW);
if(data=='1')
digitalWrite(LED_BUILTIN,HIGH);
}
}
