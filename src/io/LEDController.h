#ifndef LEDController_H
#define LEDController_H

   class LEDController {
        private:
            int pinId;
            int state;
            void write(int val);

        public:
        LEDController(int pin);
        int getState();
        void on();
        void off();
        void toggle();
        
   };

#endif