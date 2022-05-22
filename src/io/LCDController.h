#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <io/ButtonController.h>

#ifndef LCDController_H
#define LCDController_H

   class LCDController {
        private:
            LiquidCrystal_I2C* lcd; 
            int state;
        public:
            LCDController(LiquidCrystal_I2C* lcdRef);

            void init();
        
   };

#endif