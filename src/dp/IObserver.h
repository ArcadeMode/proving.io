  
#ifndef IObserver_H
#define IObserver_H
    template <typename T>
    class IObserver {
        
        public:
            virtual void update(T value);
        
    };

    template <>
    class IObserver<void> {
        
        public:
            virtual void update();
        
    };

#endif