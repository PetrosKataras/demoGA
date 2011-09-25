/*
 *  Individual.cpp
 *  demoGA
 *
 *  Our Individual consists of a Genotype and a Phenotype ofcourse....
 *
 */

#include "Individual.h"

Individual::Individual()
{
	m_genotype = Genotype();
	m_fitness = 0.0;
}

void Individual::evaluate()
{
	m_phenotype = Phenotype(m_genotype);
	m_fitness = m_phenotype.evaluate();
}


Individual::~Individual()
{
}

void Individual::draw()
{
	m_phenotype.draw();
}

Individual Individual::breed(Individual a , Individual b)
{
	Individual c ;
	c.m_genotype = crossover(a.m_genotype, b.m_genotype);
	c.m_genotype.mutate();
	return c;
}