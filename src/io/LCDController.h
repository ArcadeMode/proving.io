#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <io/ButtonController.h>
#include <dp/IObserver.h>

#ifndef LCDController_H
#define LCDController_H

   class LCDController: public IObserver<void> {
        private:
            LiquidCrystal_I2C &lcd; 
            bool state = false;
        public:
            LCDController(LiquidCrystal_I2C &lcdRef) : lcd(lcdRef) {
            }

            void init() {
                lcd.init();
                lcd.backlight();
                lcd.setCursor(0,0);
            }

            void update() {
                state = !state;
                lcd.clear();
                lcd.print("State: ");
                lcd.print(state);
            }
            
        
   };

#endif