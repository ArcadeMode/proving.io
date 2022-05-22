
#include <dp/Subject.h>

#ifndef ButtonController_H
#define ButtonController_H

   class ButtonController {
        private:
            int pinId;
            unsigned long lastDebounceTime; 
            unsigned long debounceDelay;
            int readState;
            int lastReadState;
            bool buttonState;
            Subject<bool> subject;
        public:
            ButtonController(int pin);
            IObservable<bool>* getState();
            void read();
        
   };

#endif 