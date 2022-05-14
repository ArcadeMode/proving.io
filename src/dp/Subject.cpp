#include <dp/ISubject.h>
#include <dp/IObserver.h>
#include <list>

#ifndef Subject_H
#define Subject_H
    template <typename T>
    /*abstract*/ class Subject : public ISubject<T> {
        private:
            std::list<IObserver<T>> observers;

        protected:
            void updateObservers(T value) {
                for (IObserver<T> observer : observers) {
                    observer.update(value);
                }
            }

        public:
            Subject() {
                observers = { };
            }

            void addObserver(IObserver<T> observer) {
                observers.push_back(observer);
            }

            /**
             * Pure virtual method i.e. abstract
             */
            virtual void read() = 0;
   };


   template <>
    /*abstract*/ class Subject<void> : public ISubject<void> {
        private:
            std::list<IObserver<void>> observers;
        protected:
            void updateObservers() {
                for (IObserver<void> observer : observers) {
                    observer.update();
                }
            }
        public:
            Subject() {
                observers = { };
            }
            void addObserver(IObserver<void> observer) {
                observers.push_back(observer);
            }

            /**
             * 
             */
            virtual void read() = 0;
   };

#endif

