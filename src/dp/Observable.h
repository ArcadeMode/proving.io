
#ifndef Observable_H
#define Observable_H
#include <Arduino.h>
    #include <dp/IObservable.h>
    #include <vector>
    using std::function;
    
    template <typename T>
    class Observable : public IObservable<T> {
        
        protected:
            std::vector<function<void(T)>> subscriptions;

            void updateSubscribers(T value) {
                for(auto&& sub : subscriptions) {
                    sub(value);
                }
            }

        public:
            void subscribe(function<void(T)> sub) {
                subscriptions.push_back(sub);
            }

    };

#endif