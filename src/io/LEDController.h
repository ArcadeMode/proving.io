#ifndef LEDController_H
#define LEDController_H

   class LEDController {
        private:
            int pinId;
            void write(int val);

        public:
        LEDController(int pin);
        void on();
        void off();
        
   };

#endif