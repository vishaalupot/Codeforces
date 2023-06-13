#include<iostream>
#include <bits/stdc++.h>
#include<sstream>
using namespace std;
class Nmber {

                        public:

                                    virtual void setnum(float n);

                                    virtual void setint(int i) = 0;

                        protected:

                                    int i;

                        private:

                                    float n;

                        };

              class EvenOdd: public Nmber {

                        public:

                        virtual void setnum(float n);

                        virtual void setint(int i);

                        };

             EvenOdd::setnum(float num) {

                        n = num;                                  // statement 1

                         }

             EvenOdd::setint(int s) {

                        i = s;                                        // Statement 2

                         }


int main()
{
	number n;
	
}
