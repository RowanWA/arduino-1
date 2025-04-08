#include <LiquidCrystal.h>
// Define LCD pins
const int RS = 12, E = 11, D4 = 5, D5 = 4, D6 = 3, D7 = 2;
LiquidCrystal lcd (RS, E, D4, D5, D6, D7);

const char Text[] = "Hello, Arduino! How are you? This is a very long message.";

void setup() {
	lcd.clear();
	lcd.begin(20, 4); 
  lcd.home();
  // lcd.autoscroll();
  // lcd.scrollDisplayLeft();

  if ((sizeof(Text)/sizeof(*Text))>80){
    for(i=0; i<=(sizeof(Text)); i++){
		  if((i - 80) <= 0)
		  {
			const char Text_One
		  }
		  else
	  	{
			dest_two[ctr] = source[ctr];
		  }
	}
  }

int Flow = ((sizeof(Text)/sizeof(*Text)))/4;

lcd.setCursor(0, 0);
for (int i =0; i < Flow; i++) {
  lcd.print (Text[i]);
}
    
lcd.setCursor(0, 1);
for (int i =Flow; i < 2*Flow; i++) {
  lcd.print (Text[i]);
}

lcd.setCursor(0, 2);
for (int i =2*Flow; i < 3*Flow; i++) {
  lcd.print (Text[i]);
}

lcd.setCursor(0, 3);
for (int i =3*Flow; i < 4*Flow; i++) {
  lcd.print (Text[i]);
}

}

void loop() {
  // lcd.scrollDisplayLeft();
  // delay(1000);
}