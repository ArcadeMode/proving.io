#ifndef Subject_H
#define Subject_H

#include <dp/ISubject.h>
#include <dp/IObserver.h>
#include <memory>
#include <list>

    template <typename T>
    /*abstract*/ class Subject : public ISubject<T> {
        private:
            std::list<std::unique_ptr<IObserver<T>>> observers;

        protected:
            void updateObservers(T value) {
                for (auto&& observer : observers) {
                    observer->update(value);
                }
            }

        public:
            Subject() {
                observers = { };
            }

            void addObserver(IObserver<T>* observer) {
                observers.push_back(std::unique_ptr<IObserver<T>>(observer));
            }

            /**
             * Pure virtual method i.e. abstract
             */
            virtual void read() = 0;
   };


   template <>
    /*abstract*/ class Subject<void> : public ISubject<void> {
        private:
            std::list<std::unique_ptr<IObserver<void>>> observers;
        protected:
            void updateObservers() {
                for (auto&& observer : observers) {
                    observer->update();
                }
            }
        public:
            Subject() {} 

            void addObserver(IObserver<void>* observer) {
                observers.push_back(std::unique_ptr<IObserver<void>>(observer));
            }

            /**
             * 
             */
            virtual void read() = 0;
   };

#endif

