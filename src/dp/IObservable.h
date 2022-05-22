  
#ifndef IObservable_H
#define IObservable_H
    #include <Arduino.h>
    using std::function;

    template <typename T>
    class IObservable {
        
        public:
            virtual void subscribe(function<void(T)> sub);
        
    };

#endif