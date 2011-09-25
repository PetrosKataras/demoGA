/*
 *  Genotype.cpp
 *  demoGA
 *  
 *  Genotype --- Where it all starts.... -----
 *  
 *  Pseudo-random seeding for genotype initialization - In this case it uses real numbered values but it could easily  
 *  be a binary representation. 
 *
 *  Mutation probability 5% --> Mutation adds diversity into our Population
 *  Crossover probability 50% --> Crossover helps the algorithm to converge
 *
 */

#include "Genotype.h"
#include "ofMath.h"

Genotype::Genotype()
{
	for (int i = 0; i < NUM_GENES; i++) {
		m_genes[i] = (int)ofRandom(256);
	}
}

Genotype::~Genotype()
{
	
}

void Genotype::mutate()
{
	for (int i = 0; i < NUM_GENES; i++) {
		if (ofRandom(100)<5) {
			m_genes[i] = (int) ofRandom(256);
		}
	}
}

Genotype Genotype::crossover(Genotype a , Genotype b)
{
	Genotype c;
	for (int i = 0; i < NUM_GENES; i++) {
		if (ofRandom(1) < 0.5) {
			c.m_genes[i] = a.m_genes[i];
		}
		else {
			c.m_genes[i] = b.m_genes[i];
		}
	}
	return c;
}