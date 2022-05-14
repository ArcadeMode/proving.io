

#include <dp/IObserver.h>

#ifndef ISubject_H
#define ISubject_H

   template <typename T>
   class ISubject {
        
        public:
            virtual void addObserver(IObserver<T>* observer);
   };

#endif