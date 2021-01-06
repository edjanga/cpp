//
//  BlackScholes.hpp
//  BlackScholes
//

// Black Scholes class is a class that aims to generate stock price paths according to Black Scholes SDE
// and export them in .csv file.
// Header file where all the members of the Black Scholes class are prototyped.

#ifndef BlackScholes_hpp
#define BlackScholes_hpp

#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
class BlackScholes
{
    public:
        BlackScholes(float vol,float mat,int steps,int sim,float S0,float rf);
        ~BlackScholes();
        void setVol(float a);
        void setMat(float b);
        void setSteps(int c);
        void setSim(int d);
        void setS0(float e);
        void setRF(float f);
        float getVol();
        float getMat();
        int getSteps();
        int getSim();
        float getS0();
        float getRF();
        vector<vector<float>> generateBlackScholesPaths();
        void exportBlackScholesPaths();
    
    private:
    
        // Member attributes of the class
        // vol: Annualised volatility of returns
        // mat: Maturity of the option (in years)
        // steps: Number of incremental steps
        // sim: Number of simulations
        // S0: Stock price at time 0
        // rf: Risk free rate
    
        float vol;
        float mat;
        int steps;
        int sim;
        float S0;
        float rf;
    
};

#endif /* BlackScholes_hpp */
