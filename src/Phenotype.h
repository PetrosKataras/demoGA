/*
 *  Phenotype.h
 *  demoGA
 *
 *  
 *
 */

#ifndef PHENOTYPE_H
#define PHENOTYPE_H

#include "Genotype.h"
#include "ofx3DGraphics.h"

class Phenotype {
				
public:
	
	Phenotype();
	Phenotype(Genotype g);
	
	~Phenotype();
	
	float m_width;
	float m_height;
	float m_depth;
	
	float evaluate();
	
	virtual void draw();
	
};


#endif
