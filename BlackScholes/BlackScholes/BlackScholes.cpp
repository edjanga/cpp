//
//  BlackScholes.cpp
//  BlackScholes
//
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "BlackScholes.hpp"

using namespace std;

BlackScholes::BlackScholes(float vol_,float mat_,int steps_,int sim_,float S0_,float rf_)
: vol(vol_),mat(mat_),steps(steps_),sim(sim_),S0(S0_),rf(rf_)
{
    
};

BlackScholes::~BlackScholes()
{
    
};

void BlackScholes::setVol(float a)
{
    vol = a;
};

void BlackScholes::setMat(float b)
{
    mat = b;
};

void BlackScholes::setSteps(int c)
{
    steps = c;
};

void BlackScholes::setSim(int d)
{
    steps = d;
};

void BlackScholes::setS0(float e)
{
    S0 = e;
};

void BlackScholes::setRF(float f)
{
    rf = f;
};

float BlackScholes::getVol()
{
    return vol;
};

float BlackScholes::getMat()
{
    return mat;
};

int BlackScholes::getSteps()
{
    return steps;
};

int BlackScholes::getSim()
{
    return sim;
};

float BlackScholes::getS0()
{
    return S0;
}

float BlackScholes::getRF()
{
    return rf;
}
