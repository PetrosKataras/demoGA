/*
 *  Phenotype.cpp
 *  demoGA
 *  
 *  Physical represantation of our Genotype
 *  
 * 
 *
 */

#include "Phenotype.h"
#include "ofMain.h"

Phenotype::Phenotype()
{
	
}

Phenotype::Phenotype(Genotype g)
{
	m_width = g.m_genes[0] * ofGetScreenWidth() / 256;
	m_height = g.m_genes[1]* ofGetScreenHeight() / 256;
	m_depth = g.m_genes[2] * ofGetScreenHeight() /256;
	
}

Phenotype::~Phenotype()
{
}

/* This is where we have our generic and not our genetic code !!! 
 Define here the physical representation of what you want to achieve! 
 */
void Phenotype::draw()
{
	ofxBox( 0,  0,  0,  m_width,  m_height,  m_depth);
}


/* Probably the most important function of the algorithm..
 Define here what you want to achieve -- One of the most difficult parts when working with EA's is to define a suitable fitness 
 function for what you want to achieve. In this case its straightforward; the algorithm attempts to maximize the square side lengths
 while minimizing the volume.
 Here it can also be defined a suitable fitness function for multi-objective optimisation.
 */
float Phenotype::evaluate()
{
	float fitness = 0.0;
	fitness += pow((m_width + m_height + m_depth),2);
	fitness -= m_width * m_height * m_depth;
	return fitness;
}