
#include <dp/ISubject.h>
#include <dp/Subject.h>

#ifndef ButtonController_H
#define ButtonController_H

   class ButtonController: public Subject<void> {
        private:
            int pinId;
            unsigned long lastDebounceTime; 
            unsigned long debounceDelay;
            int buttonState;
            int lastButtonState;

        public:
            ButtonController(int pin);
            int getState();
            void read();
        
   };

#endif 