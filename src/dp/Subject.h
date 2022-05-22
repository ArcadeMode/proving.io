#ifndef Subject_H
#define Subject_H

    #include <dp/ISubject.h>
    #include <dp/IObservable.h>
    #include <dp/Observable.h>
    #include <memory>
    #include <list>

    template <typename T>
    class Subject : public Observable<T>, public ISubject<T> {


        public:
            void next(T value) {
                this->updateSubscribers(value);
            }
   };

#endif

