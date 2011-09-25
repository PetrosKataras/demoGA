/*
 *  Individual.h
 *  demoGA
 *
 *  
 *
 */

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H


#include "Phenotype.h"
#include "Genotype.h"



class Individual : public Phenotype, Genotype {
	
public: 
	
	
	Individual();
	
	~Individual();
	
	Genotype m_genotype;
	Phenotype m_phenotype;
	
	float m_fitness;
	
	virtual void draw();
	virtual void evaluate();
	
	Individual breed(Individual a , Individual b);
	
};


#endif