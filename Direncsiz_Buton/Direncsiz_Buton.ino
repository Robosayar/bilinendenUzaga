/*
 *  Mert VAROL
 *    Robosayar
 *        www.robosayar.com
 *            Dirençsiz Buton
 */

int buton = 2;    //buton için kullandığımız pini, değişkene aktardık.

void setup() {
  Serial.begin(9600);               //seri port ekranı, kullanılabilir hale getirildi.
  pinMode(buton,INPUT_PULLUP);      //buton için kullandığımız pindeki dahili direnci aktif ettik.
}

void loop() {
  int butonDurumu = digitalRead(buton);       //butona basılıp basılmadığının sonucunu, değişkene aktarıyoruz.
  if(butonDurumu == LOW) {                    //butona basıldı mı? basıldı ise..
    Serial.println("Butona Basıldı!!");       //seri port ekranında haber ver.
    delay(200);                               //200 ms bekle. (butonun 1 kez algılanması için)
  }
}

/*
 * Direnç olmadan buton nasıl kullanılır..
 * 
 * Not: Bağlantımız PULLUP olduğu için, sorgulamayı "LOW" ile yaptık.
 * Bu şu anlama geliyor. butona bastığımızda, Lojik - 0, LOW sinyali yani 0 volt gönderildi mi..
 * Butona basmadığımız süre boyunca 5v, Lojik - 1, HIGH sinyali gönderilir.
 */
