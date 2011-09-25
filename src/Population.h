/*
 *  Population.h
 *  demoGA
 *
 *  
 *
 */

#ifndef POPULATION_H
#define POPULATION_H

#include "Individual.h"

#define POP_NUM 100

class Population : public Individual{
	
public:
	
	Population();
	~Population();
	
	vector<Individual>m_pop;
	
	void evolve();
	
	Individual select();
};

struct compare {
	bool operator () (Individual const &  Individual_1, Individual const & Individual_2) { 
		return Individual_1.m_fitness < Individual_2.m_fitness; 
	}
};

#endif POPULATION_H

