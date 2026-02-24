#include <iostream>
using namespace std;

int main() {

int x [2][2][2] = {
    {
        {1, 2}
        , {3, 4}
    },

    {

        {5, 6},
            {7, 8}
    }
};


 for(auto & a : x) {
 for(auto & b : a) {
  for(int & c : b) {


                cout  << c

                                    << endl;

            }
        }
    }


};
















