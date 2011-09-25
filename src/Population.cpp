/*
 *  Population.cpp
 *  demoGA
 *
 *  Our evolving Population...
 *   
 *
 */

#include "Population.h"

Population::Population()
{
	for (int i = 0 ; i < POP_NUM; i++) {
		m_pop.push_back(Individual());
		m_pop[i].evaluate();
	}
	sort(m_pop.begin(), m_pop.end(), compare());

}

Population::~Population()
{
}

void Population::evolve()
{
	Individual a = select();
	Individual b = select();
	Individual x = breed(a, b);
	m_pop[0] = x;
	m_pop[0].evaluate();
	sort(m_pop.begin(), m_pop.end(), compare());
}

/* The selection critirion in this case is based on a simple skew distribution
   where the mass of the probability distribution is concentrated on better Individuals.
 */ 
Individual Population::select()
{	
    int which = (int) floor((100 - 1e-4) * (1.0 - pow(ofRandom(0,1), 2)));	
	return m_pop[which];
}